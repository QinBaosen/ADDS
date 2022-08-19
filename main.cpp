#include "Book.h"
#include "Library.h"
#include <iostream>

int main() {
    Library lib;
    Document *doc=new Book(0);

    lib.addDocument(doc);
    if(lib.hasDocument(doc))
    {
        std::cout << "hasDocument() return true"<<endl;
    }
}
