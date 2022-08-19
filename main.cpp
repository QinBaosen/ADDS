#include "Book.h"
#include "Library.h"
#include <iostream>

int main() {
    Library lib; // creates a Library and a Book
    Document *doc=new Book(0);
    //adds the Book to the Library
    lib.addDocument(doc);
    //checks if the Book is in the Library
    if(lib.hasDocument(doc))
    {
        std::cout << "hasDocument() return true"<<endl;
    }
}
