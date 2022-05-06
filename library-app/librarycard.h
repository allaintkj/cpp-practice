#include "student.h"

#ifndef LIBRARYCARD_H
#define LIBRARYCARD_H

class LibraryCard {
    private:
        int booksBorrowed;
        Student cardOwner;

    public:
        // Constructors
        LibraryCard();
        // Overloaded in case user wants to immediately checkout books
        LibraryCard(int booksToCheckout);

        // Accessors
        int getBooksBorrowed();
        string getCardOwner();
        void setCardOwner();

        // Methods
        void checkout(int booksToCheckout);
        string printReport();
};

#endif