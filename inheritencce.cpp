#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(std::string n, int a) : name(n), age(a) {}

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Employee : public Person {
private:
    std::string employeeId;

public:
    Employee(std::string n, int a, std::string id) : Person(n, a), employeeId(id) {}

    void displayEmployeeInfo() {
        displayInfo();
        std::cout << "Employee ID: " << employeeId << std::endl;
    }
};

class Student {
protected:
    std::string studentId;

public:
    Student(std::string id) : studentId(id) {}

    void displayStudentInfo() {
        std::cout << "Student ID: " << studentId << std::endl;
    }
};

class TeachingAssistant : public Employee, public Student {
private:
    std::string course;

public:
    TeachingAssistant(std::string n, int a, std::string empId, std::string stuId, std::string c)
        : Employee(n, a, empId), Student(stuId), course(c) {}

    void displayTAInfo() {
        displayEmployeeInfo();
        displayStudentInfo();
        std::cout << "Teaching Assistant for: " << course << std::endl;
    }
};

class Parent : public Person {
private:
    int numberOfChildren;

public:
    Parent(std::string n, int a, int children) : Person(n, a), numberOfChildren(children) {}

    void displayParentInfo() {
        displayInfo();
        std::cout << "Number of Children: " << numberOfChildren << std::endl;
    }
};

int main() {
    Employee emp("John Doe", 30, "E12345");
    Student stu("S54321");
    TeachingAssistant ta("Alice Smith", 25, "T98765", "S43210", "Mathematics");
    Parent parent("Mike Johnson", 40, 2);

    emp.displayEmployeeInfo();
    stu.displayStudentInfo();
    ta.displayTAInfo();
    parent.displayParentInfo();

    return 0;
}
