#include <iostream>
#include <ctime>

#include "../include/librarycard.h"

// Constructors
LibraryCard::LibraryCard() {
    // Seconds since epoch
    cardExpiry = time(0);
    // Add one year of seconds to get expiry
    cardExpiry += YEAR;
}

LibraryCard::LibraryCard(int booksToCheckout) {
    // Seconds since epoch
    cardExpiry = time(0);
    // Add one year of seconds to get expiry
    cardExpiry += YEAR;

    checkout(booksToCheckout);
}

// Accessors
int LibraryCard::getBooksBorrowed() { return booksBorrowed; }
std::string LibraryCard::getCardOwner() { return cardOwner.getStudentName(); }

// Mutators
void LibraryCard::setCardOwner(Student student) { cardOwner = student; }

// Methods
void LibraryCard::checkout(int booksToCheckout) {
    time_t current = time(0);

    if (current >= cardExpiry) {
        std::cout << "Card expired. You may not checkout any books." << std::endl;
        return;
    }

    int booksAvailable = booksBorrowed >= MAXBOOKS ? 0 : MAXBOOKS - booksBorrowed;
    booksBorrowed += booksAvailable >= booksToCheckout ? booksToCheckout : booksAvailable;
}

std::string LibraryCard::generateReport() {
    if (cardOwner.getStudentId() == "unassigned") { return "Cannot generate report. Card has not been assigned to a student."; }

    std::string report = "Student ID: " + cardOwner.getStudentId()
        + "\nStudent Name: " + cardOwner.getStudentName()
        + "\nStudent Email: " + cardOwner.getStudentEmail()
        + "\nBooks Borrowed: " + std::to_string(booksBorrowed)
        + "\n\nCard Expires: " + (ctime(&cardExpiry))
        + "\n";

    return report;
}
