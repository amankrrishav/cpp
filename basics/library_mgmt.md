Build a Library Management System using C++

REQUIREMENTS:

1. TEMPLATE CLASS
   - Create a template class `Storage<T>` 
   - that can store any type of collection

2. OOP
   - Create a `Book` class with:
     - title, author, price (attributes)
     - constructor, display() method

3. POINTERS
   - Store Book objects as POINTERS inside your map
   - use `new` to create, `delete` to free memory

4. STL — use ALL of these:
   - unordered_map<string, Book*> → bookID → Book  (fast lookup)
   - map<string, int>             → author → book count (sorted)
   - multimap<string, string>     → genre → bookTitle (duplicates)
   - set<string>                  → unique genres only

5. OPERATIONS to implement:
   - addBook()    → insert into all 4 containers
   - findBook()   → find by bookID
   - removeBook() → erase from all containers
   - display()    → iterate and print all books
   - topAuthor()  → find author with most books

6. MAIN
   - Add 5 books
   - Find 1 existing, 1 non-existing
   - Remove 1 book
   - Print size before and after
   - Print all unique genres
   - Print all books sorted by author