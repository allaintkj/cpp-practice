#include <iostream>

#include "student.h"

#ifndef LIBRARYCARD_H
#define LIBRARYCARD_H

class LibraryCard {
    private:
        int booksBorrowed = 0;
        Student cardOwner;

    public:
        // Constructors
        LibraryCard();
        // Overloaded in case user wants to immediately checkout books
        LibraryCard(int booksToCheckout);

        // Accessors
        int getBooksBorrowed();
        std::string getCardOwner();
        void setCardOwner(Student student);

        // Methods
        void checkout(int booksToCheckout);
        std::string generateReport();
};

#endif