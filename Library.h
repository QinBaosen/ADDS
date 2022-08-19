#ifndef _LIBRARY_H
#define _LIBRARY_H
#include "Document.h"
#include <vector>

class Library {
    std::vector<Document *> *documents;
public:
    Library();
    ~Library();
    void addDocument(Document *doc);
    bool hasDocument(Document *doc);
};
#endif