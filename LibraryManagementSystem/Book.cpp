#include "Book.h"

Book::Book(int id, string title, string author) {
    this->id = id;
    this->title = title;
    this->author = author;
    this->isCheckedOut = false;
}

void Book::checkout() {
    if (!isCheckedOut) {
        isCheckedOut = true;
    }
}

void Book::returnBook() {
    if (isCheckedOut) {
        isCheckedOut = false;
    }
}

int Book::getId() const {
    return id;
}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

bool Book::isAvailable() const {
    return !isCheckedOut;
}
