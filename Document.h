#ifndef _DOCUMENT_H
#define _DOCUMENT_H

class Document {
public:
    virtual int getDocumentID() = 0; // pure virtural function, so don't need document.cpp
};
#endif