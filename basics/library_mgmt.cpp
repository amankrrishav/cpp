// Library Management System
// Implements all requirements from library_mgmt.md:
// 1. Template Class: Storage<T>
// 2. OOP: Book class with attributes, constructor, display()
// 3. Pointers: Book* dynamically allocated with new/delete
// 4. STL Containers: unordered_map, map, multimap, set
// 5. Operations: addBook, findBook, removeBook, display, topAuthor
// 6. Complete test flow in main()

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <set>
#include <iomanip>

using namespace std;

// ==========================================
// 1. TEMPLATE CLASS: Storage<T>
// Can store any type of collection
// ==========================================
template <typename T>
class Storage {
private:
    vector<T> collection;

public:
    Storage() = default;

    void add(const T& item) {
        collection.push_back(item);
    }

    size_t size() const {
        return collection.size();
    }

    const vector<T>& getCollection() const {
        return collection;
    }

    void display() const {
        for (const auto& item : collection) {
            cout << "  * " << item << "\n";
        }
    }
};

// ==========================================
// 2. OOP: Book Class
// Attributes: title, author, price, genre
// Constructor and display() method
// ==========================================
class Book {
private:
    string title;
    string author;
    double price;
    string genre;

public:
    Book(string t, string a, double p, string g)
        : title(t), author(a), price(p), genre(g) {}

    // Getters
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    double getPrice() const { return price; }
    string getGenre() const { return genre; }

    // Display method
    void display() const {
        cout << "  Title  : " << title << "\n"
             << "  Author : " << author << "\n"
             << "  Genre  : " << genre << "\n"
             << "  Price  : $" << fixed << setprecision(2) << price << "\n";
    }
};

// ==========================================
// 3, 4 & 5. Library Class using STL & Pointers
// Containers:
//   - unordered_map<string, Book*>  (bookID -> Book*)
//   - map<string, int>              (author -> count)
//   - multimap<string, string>      (genre -> bookTitle)
//   - set<string>                   (unique genres)
// ==========================================
class Library {
private:
    // 4 STL Containers
    unordered_map<string, Book*> books;       // Fast lookup by bookID
    map<string, int> authorCount;             // Sorted author -> book count
    multimap<string, string> genreBooks;      // Genre -> title (supports duplicates)
    set<string> uniqueGenres;                 // Set of unique genres only

    // Generic Storage template for transaction logs
    Storage<string> transactionLogs;

public:
    // Destructor to deallocate dynamic memory
    ~Library() {
        for (auto& pair : books) {
            delete pair.second;
        }
        books.clear();
    }

    // 5. Operations:

    // 1. addBook: insert into all 4 containers
    void addBook(const string& id, const string& title, const string& author, const string& genre, double price) {
        if (books.find(id) != books.end()) {
            cout << "Error: Book with ID '" << id << "' already exists!\n";
            return;
        }

        // Dynamically allocate Book on the heap
        Book* newBook = new Book(title, author, price, genre);

        // 1. unordered_map (bookID -> Book*)
        books[id] = newBook;

        // 2. map (author -> count)
        authorCount[author]++;

        // 3. multimap (genre -> title)
        genreBooks.insert({genre, title});

        // 4. set (unique genres)
        uniqueGenres.insert(genre);

        transactionLogs.add("Added book [" + id + "]: " + title);
        cout << "Added: [" << id << "] \"" << title << "\" by " << author << "\n";
    }

    // 2. findBook: find by bookID
    bool findBook(const string& id) const {
        auto it = books.find(id);
        if (it != books.end()) {
            cout << "Book Found [ID: " << id << "]:\n";
            it->second->display();
            return true;
        } else {
            cout << "Book with ID '" << id << "' NOT found.\n";
            return false;
        }
    }

    // 3. removeBook: erase from all 4 containers
    bool removeBook(const string& id) {
        auto it = books.find(id);
        if (it == books.end()) {
            cout << "Cannot remove: Book with ID '" << id << "' does not exist.\n";
            return false;
        }

        Book* bookToDelete = it->second;
        string author = bookToDelete->getAuthor();
        string genre = bookToDelete->getGenre();
        string title = bookToDelete->getTitle();

        // 1. Update authorCount in map
        if (authorCount.find(author) != authorCount.end()) {
            authorCount[author]--;
            if (authorCount[author] <= 0) {
                authorCount.erase(author);
            }
        }

        // 2. Erase from genreBooks multimap
        auto range = genreBooks.equal_range(genre);
        for (auto git = range.first; git != range.second; ++git) {
            if (git->second == title) {
                genreBooks.erase(git);
                break;
            }
        }

        // 3. Update uniqueGenres set if no books in this genre remain
        if (genreBooks.count(genre) == 0) {
            uniqueGenres.erase(genre);
        }

        // 4. Delete dynamically allocated Book object
        delete bookToDelete;

        // 5. Erase from unordered_map
        books.erase(it);

        transactionLogs.add("Removed book [" + id + "]: " + title);
        cout << "Removed book [" << id << "] \"" << title << "\"\n";
        return true;
    }

    // 4. display: iterate and print all books
    void display() const {
        cout << "\n--- Library Inventory (" << books.size() << " Books) ---\n";
        if (books.empty()) {
            cout << "  (Library is empty)\n";
            return;
        }
        for (const auto& pair : books) {
            cout << "[ID: " << pair.first << "]\n";
            pair.second->display();
            cout << "  -----------------------\n";
        }
    }

    // 5. topAuthor: find author with most books
    void topAuthor() const {
        if (authorCount.empty()) {
            cout << "No authors registered in the library.\n";
            return;
        }

        string top;
        int maxCount = 0;
        for (const auto& pair : authorCount) {
            if (pair.second > maxCount) {
                maxCount = pair.second;
                top = pair.first;
            }
        }
        cout << "Top Author: " << top << " with " << maxCount << " book(s).\n";
    }

    // Additional reporting helpers
    size_t size() const {
        return books.size();
    }

    void printUniqueGenres() const {
        cout << "\n--- Unique Genres (" << uniqueGenres.size() << ") ---\n";
        for (const auto& g : uniqueGenres) {
            cout << "  * " << g << "\n";
        }
    }

    void printBooksSortedByAuthor() const {
        cout << "\n--- Books Grouped & Sorted by Author ---\n";
        // authorCount is already sorted alphabetically by author name (std::map)
        for (const auto& aPair : authorCount) {
            const string& author = aPair.first;
            int count = aPair.second;
            cout << "Author: " << author << " (" << count << " book" << (count > 1 ? "s" : "") << ")\n";
            for (const auto& bPair : books) {
                if (bPair.second->getAuthor() == author) {
                    cout << "   - [" << bPair.first << "] " << bPair.second->getTitle()
                         << " | " << bPair.second->getGenre()
                         << " | $" << fixed << setprecision(2) << bPair.second->getPrice() << "\n";
                }
            }
        }
    }

    void displayLogs() const {
        cout << "\n--- System Transaction Logs (Storage<string>) ---\n";
        transactionLogs.display();
    }
};

// ==========================================
// 6. MAIN: Full Test Flow
// ==========================================
int main() {
    cout << "===============================================\n";
    cout << "       LIBRARY MANAGEMENT SYSTEM (C++)         \n";
    cout << "===============================================\n\n";

    Library lib;

    // Step 1: Add 5 books
    cout << ">>> Step 1: Adding 5 books into the library...\n";
    lib.addBook("B001", "Clean Code", "Robert C. Martin", "Programming", 35.50);
    lib.addBook("B002", "The Pragmatic Programmer", "Andy Hunt", "Programming", 42.00);
    lib.addBook("B003", "Dune", "Frank Herbert", "Sci-Fi", 18.99);
    lib.addBook("B004", "Foundation", "Isaac Asimov", "Sci-Fi", 15.20);
    lib.addBook("B005", "Clean Architecture", "Robert C. Martin", "Programming", 39.99);

    // Initial size
    cout << "\nTotal books in library: " << lib.size() << "\n";

    // Step 2: Display all books
    cout << "\n>>> Step 2: Displaying all books...";
    lib.display();

    // Step 3: Find 1 existing and 1 non-existing book
    cout << "\n>>> Step 3: Searching for books...\n";
    cout << "-- Searching for existing book (B003):\n";
    lib.findBook("B003");

    cout << "\n-- Searching for non-existing book (B999):\n";
    lib.findBook("B999");

    // Step 4: Top Author
    cout << "\n>>> Step 4: Determining top author...\n";
    lib.topAuthor();

    // Step 5: Remove 1 book and print size before and after
    cout << "\n>>> Step 5: Removing a book...\n";
    cout << "Size BEFORE removal: " << lib.size() << "\n";
    lib.removeBook("B002");
    cout << "Size AFTER removal : " << lib.size() << "\n";

    // Step 6: Print all unique genres
    cout << "\n>>> Step 6: Printing all unique genres...";
    lib.printUniqueGenres();

    // Step 7: Print all books sorted by author
    cout << "\n>>> Step 7: Printing books sorted by author...";
    lib.printBooksSortedByAuthor();

    // Step 8: Display template storage activity logs
    lib.displayLogs();

    cout << "\n===============================================\n";
    cout << "   ALL REQUIREMENTS EXECUTED SUCCESSFULLY!     \n";
    cout << "===============================================\n";

    return 0;
}
