#ifndef _BOOK_H
#define _BOOK_H
#include "Document.h"

class Book : public Document {
    int id;
public:
    Book(int _id);
    int getDocumentID();
};
#endif

