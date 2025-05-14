#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    int id;
    string title;
    string author;
    bool isCheckedOut;

public:
    Book(int id, string title, string author);
    void checkout();
    void returnBook();
    int getId() const;
    string getTitle() const;
    string getAuthor() const;
    bool isAvailable() const;
};

#endif
