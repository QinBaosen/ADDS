#include "Library.h"

// default constructor
Library::Library() {
    documents = new std::vector<Document *>();
}
Library::~Library() {
    delete documents;
}
// add a Document to the Library
void Library::addDocument(Document *doc) {
    documents->push_back(doc);
}

// check if a Document is in the Library
bool Library::hasDocument(Document *doc) {
    bool b = false;
    int id = doc->getDocumentID();
    for(int k = 0; k < documents->size(); k++)
    {
        if(documents->at(k)->getDocumentID() == id)
        {
            b = true;
            break;
        }
    }
    return b;
}