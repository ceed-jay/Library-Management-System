#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>
#include <iostream>
using namespace std;

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book);
    void removeBook(int id);
    Book* findBook(int id);
    void listBooks();
};

#endif
