#include <iostream>

#ifndef STUDENT_H
#define STUDENT_H

class Student {
    private:
        std::string studentId;
        std::string studentName;
        std::string studentEmail;

    public:
        // Constructors
        Student();
        Student(std::string id);

        // Accessors
        std::string getStudentId();
        std::string getStudentEmail();
        std::string getStudentName();
        void setStudentId(std::string newId);
        void setStudentEmail(std::string newEmail);
        void setStudentName(std::string newName);
};

#endif