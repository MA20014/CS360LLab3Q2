#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int studentNumber;
    string studentName;
    double studentAverage;

public:
    Student() : studentNumber(0), studentName(""), studentAverage(0.0) {}

    void setStudentNumber(int number) {
        studentNumber = number;
    }

    int getStudentNumber() const {
        return studentNumber;
    }

    void setStudentName(string name) {
        studentName = name;
    }

    string getStudentName() const {
        return studentName;
    }

    void setStudentAverage(double average) {
        studentAverage = average;
    }

    double getStudentAverage() const {
        return studentAverage;
    }

    void print() const {
        cout << "Student Number: " << studentNumber << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Student Average: " << studentAverage << endl;
    }
};

class GraduateStudent : public Student {
private:
    int level;
    int year;

public:
    GraduateStudent() : level(0), year(0) {}

    void setLevel(int lvl) {
        level = lvl;
    }

    int getLevel() const {
        return level;
    }

    void setYear(int yr) {
        year = yr;
    }

    int getYear() const {
        return year;
    }

    void print() const {
        Student::print();
        cout << "Level: " << level << endl;
        cout << "Year: " << year << endl;
    }
};

class Master : public GraduateStudent {
private:
    int newId;

public:
    Master() : newId(0) {}

    void setNewId(int id) {
        newId = id;
    }

    int getNewId() const {
        return newId;
    }

    void print() const {
        GraduateStudent::print();
        cout << "New ID: " << newId << endl;
    }
};

int main() {
    // Declare object of type student
    Student student1;
    student1.setStudentNumber(20014);
    student1.setStudentName("Mir Ahmad Ali");
    student1.setStudentAverage(85.5);

    cout << "Student Information:" << endl;
    student1.print();
    cout << endl;

    // Declare object of type master
    Master master1;
    master1.setStudentNumber(54321);
    master1.setStudentName("Adnan Haneef");
    master1.setStudentAverage(90.0);
    master1.setLevel(2);
    master1.setYear(2023);
    master1.setNewId(98765);

    cout << "Master Information:" << endl;
    master1.print();

    return 0;
}
