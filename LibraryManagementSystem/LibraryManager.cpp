#include "LibraryManager.h"
// LibraryManager.cpp
#include "LibraryManager.h"

LibraryManager& LibraryManager::getInstance() {
    static LibraryManager instance;
    return instance;
}

void LibraryManager::addBook(const std::shared_ptr<Book>& book) {
    books.push_back(book);
}

std::vector<std::shared_ptr<Book>> LibraryManager::getBooks() const {
    return books;
}
