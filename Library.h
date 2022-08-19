#ifndef _LIBRARY_H
#define _LIBRARY_H
#include "Document.h"
#include <vector>

class Library {
    std::vector<Document *> *documents;
public:
    Library();
    ~Library();
    void addDocument(Document *doc); // add a Document to the Library
    bool hasDocument(Document *doc); // check if a Document is in the Library
};
#endif