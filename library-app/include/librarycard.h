#include <iostream>

#include "student.h"

#ifndef LIBRARYCARD_H
#define LIBRARYCARD_H

class LibraryCard {
    private:
        int booksBorrowed = 0;
        Student cardOwner;

    public:
        static const int MAXBOOKS = 5;

        // Constructors
        LibraryCard();
        // In case user wants to immediately checkout books
        LibraryCard(int booksToCheckout);

        // Accessors
        int getBooksBorrowed();
        std::string getCardOwner();

        // Mutators
        void setCardOwner(Student student);

        // Methods
        void checkout(int booksToCheckout);
        std::string generateReport();
};

#endif