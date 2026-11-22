//para m constructor is used to save all the values
#include <iostream>
#include<string>
using namespace std;

class Book{
    private:
    //attributes
    string title;
    string author;
    double price;

    public:
    Book(string t,string a, double p){
        title=t;
        author=a;
        price=p;
    }

    //methods
    void display();
};
void Book::display(){
    cout <<"Title: " <<title << endl;
      cout <<"Author: "<< author << endl;
      cout <<"Price: "<< price << endl;
      cout << "-----"<<endl;
}
int main() {
    Book a{"The Book1","Xyz_Author",100.0};
    Book b{"The Book2","Xyz1_Author",500.0};
    Book* c=new Book{"The_Book3","Xyz2_Author",1000.0};

    a.display();
    b.display();
    c->display();

    delete c;

    

    return 0;
}