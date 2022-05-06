#include <iostream>

#include "student.h"

// Constructors
Student::Student() {
    studentId = "unassigned";
    studentName = "unassigned";
    studentEmail = "unassigned";
}

Student::Student(std::string id) {
    studentId = id;
    studentName = "unassigned";
    studentEmail = "unassigned";
}

// Accessors
std::string Student::getStudentId() { return studentId; }
std::string Student::getStudentEmail() { return studentEmail; }
std::string Student::getStudentName() { return studentName; }
void Student::setStudentId(std::string newId) { studentId = newId; }
void Student::setStudentEmail(std::string newEmail) { studentEmail = newEmail; }
void Student::setStudentName(std::string newName) { studentName = newName; }