#include <iostream>
using namespace std;


class Book {
    public:
        string title;
        string author;
        int pages;

        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        // "a" stands for argument
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main() {

    //A class is a new data type. We give it attributes to describe it. It's the template of the data type.
    //An object is an instance of that class that uses that template.
    //A constructor is a function that can/will get called whenever we create an object of a class. Can be used to initialize information.
    // It's common to give multiple constructors to give multiple options.

    Book book1("Harry Potter", "J.K.Rowling",500);
    Book book2("LOTR","Tolkein",1000);
    Book book3;

    cout << book1.title << endl;
    cout << book3.title << endl;
 
    return 0;
}