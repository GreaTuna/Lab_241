#pragma once
#include "Human.h"
#include <iostream>

class Student : public Human {
private:
    string groupNumber;
public:
    Student(int age = 18, bool gender = true, Address address = Address(), const string& groupNumber = "141-M") : Human(age, gender, address) {
        setRole("Student");
        this->groupNumber = groupNumber;
    }

    Student(const Human& human, const string& groupNumber = "141-M") : Human(human) {
        setRole("Student");
        this -> groupNumber = groupNumber;
    }

    string getGroupNumber() const {return groupNumber;}
    void setGroupNumber(string newGroupNumber) {groupNumber = newGroupNumber;}


    void printInfo() const override {
        Info();
        cout << "Group Number: " << groupNumber << endl;
        cout << endl;
    }
};