#include <iostream>

#include "../include/librarycard.h"

// Constructors
LibraryCard::LibraryCard() {}
LibraryCard::LibraryCard(int booksToCheckout) { checkout(booksToCheckout); }

// Accessors
int LibraryCard::getBooksBorrowed() { return booksBorrowed; }
std::string LibraryCard::getCardOwner() { return cardOwner.getStudentName(); }

// Mutators
void LibraryCard::setCardOwner(Student student) { cardOwner = student; }

// Methods
void LibraryCard::checkout(int booksToCheckout) {
    int booksAvailable = booksBorrowed >= MAXBOOKS ? 0 : MAXBOOKS - booksBorrowed;
    booksBorrowed += booksAvailable >= booksToCheckout ? booksToCheckout : booksAvailable;
}

std::string LibraryCard::generateReport() {
    std::string report;

    report = "Student ID: " + cardOwner.getStudentId()
        + "\nStudent Name: " + cardOwner.getStudentName()
        + "\nStudent Email: " + cardOwner.getStudentEmail()
        + "\nBooks Borrowed: " + std::to_string(booksBorrowed)
        + "\n";

    return report;
}
