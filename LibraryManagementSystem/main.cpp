#include <iostream>
#include "Library.h"
#include "Database.h"
#include <limits>  

using namespace std;

void showMenu();
void addBook(Library& library);
void checkoutBook(Library& library);
void returnBook(Library& library);
void removeBook(Library& library);
void listBooks(Library& library);

int main() {
    Library library;

    library.addBook(Book(1, "CAT COLLEGE Radio Broad Casting Center", "C. OLAVARIO"));
    library.addBook(Book(2, "The Philippine Politics", "C. OLAVARIO"));
    library.addBook(Book(3, "How to Understand Your Self", "C. OLAVARIO"));

    int choice;
    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        while (cin.fail() || choice < 1 || choice > 6) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid choice. Please enter a number between 1 and 6: ";
            cin >> choice;
        }

        switch (choice) {
        case 1:
            addBook(library);
            break;
        case 2:
            checkoutBook(library);
            break;
        case 3:
            returnBook(library);
            break;
        case 4:
            removeBook(library);
            break;
        case 5:
            listBooks(library);
            break;
        case 6:
            cout << "Exiting the system. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    } while (choice != 6);

    return 0;
}

void showMenu() {
    cout << "\nLibrary Management System Menu\n";
    cout << "1. Add a new book\n";
    cout << "2. Checkout a book\n";
    cout << "3. Return a book\n";
    cout << "4. Remove a book\n";
    cout << "5. View all books\n";
    cout << "6. Exit\n";
}

void addBook(Library& library) {
    int id;
    string title, author;

    cout << "\nEnter Book ID: ";
    cin >> id;
    cin.ignore(); 
    cout << "Enter Book Title: ";
    getline(cin, title);
    cout << "Enter Book Author: ";
    getline(cin, author);

    library.addBook(Book(id, title, author));
    cout << "Book added successfully!" << endl;
}

void checkoutBook(Library& library) {
    int id;
    cout << "\nEnter Book ID to checkout: ";
    cin >> id;

    Book* book = library.findBook(id);
    if (book) {
        if (book->isAvailable()) {
            book->checkout();
            cout << "You have successfully checked out the book: " << book->getTitle() << endl;
        }
        else {
            cout << "The book is already checked out." << endl;
        }
    }
    else {
        cout << "Book with ID " << id << " not found!" << endl;
    }
}

void returnBook(Library& library) {
    int id;
    cout << "\nEnter Book ID to return: ";
    cin >> id;

    Book* book = library.findBook(id);
    if (book) {
        if (!book->isAvailable()) {
            book->returnBook();
            cout << "You have successfully returned the book: " << book->getTitle() << endl;
        }
        else {
            cout << "This book is not checked out." << endl;
        }
    }
    else {
        cout << "Book with ID " << id << " not found!" << endl;
    }
}

void removeBook(Library& library) {
    int id;
    cout << "\nEnter Book ID to remove: ";
    cin >> id;

    Book* book = library.findBook(id);
    if (book) {
        library.removeBook(id);
        cout << "Book with ID " << id << " has been removed from the library." << endl;
    }
    else {
        cout << "Book with ID " << id << " not found!" << endl;
    }
}

void listBooks(Library& library) {
    cout << "\nLibrary Inventory:\n";
    library.listBooks();
}
