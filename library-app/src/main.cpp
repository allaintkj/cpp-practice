#include <iostream>

#include "../include/librarycard.h"
#include "../include/student.h"

int main() {
    // Declare Student model
    Student student("W1234567");
    // Declare LibraryCard model
    LibraryCard card(1);

    // Set some properties on the student
    student.setStudentName("Johnny Java");
    student.setStudentEmail("jjava@nscc.ca");

    // Set card owner and check out some books
    card.setCardOwner(student);
    card.checkout(2);

    // Print card report
    std::cout << card.generateReport() << std::endl;

    // Return success
    return 0;
}