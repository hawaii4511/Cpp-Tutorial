#include <iostream>
using namespace std;


class Book {
    public:
        string title;
        string author;
        int pages;
};

int main() {

    //A class is a new data type. We give it attributes to describe it. It's the template of the data type.
    //An object is an instance of that class that uses that template.

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "J. K. Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "JRR Tolkein";
    book2.pages = 1000;

    cout << book1.title << endl;
    cout << book2.pages;
 
    return 0;
}