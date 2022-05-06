#ifndef STUDENT_H
#define STUDENT_H

class Student {
    private:
        string studentId;
        string studentName;
        string studentEmail;

    public:
        // Constructor
        Student(string studentId);

        // Accessors
        string getStudentId();
        string getStudentEmail();
        string getStudentName();
        void setStudentEmail(string newEmail);
        void setStudentName(string newName);
};

#endif