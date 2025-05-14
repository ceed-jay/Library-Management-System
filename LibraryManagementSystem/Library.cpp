#include "Library.h"

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::removeBook(int id) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getId() == id) {
            books.erase(it);
            break;
        }
    }
}

Book* Library::findBook(int id) {
    for (auto& book : books) {
        if (book.getId() == id) {
            return &book;
        }
    }
    return nullptr;
}

void Library::listBooks() {
    if (books.empty()) {
        cout << "No books available in the library.\n";
        return;
    }

    for (auto& book : books) {
        cout << "ID: " << book.getId() << ", Title: " << book.getTitle() << ", Author: " << book.getAuthor();
        if (book.isAvailable()) {
            cout << " (Available)" << endl;
        }
        else {
            cout << " (Checked Out)" << endl;
        }
    }
}
