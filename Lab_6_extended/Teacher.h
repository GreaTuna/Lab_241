#pragma once
#include "Human.h"
#include "HumanList.h"
#include "Coursework.h"
#include "CourseworksList.h"
#include <string>

class Teacher : public Human {
private:
    double salary;
    CourseworksList courseworksLog;
public:
    Teacher(int age = 18, bool gender = true, Address address = Address(), double salary = 5000) : Human(age, gender, address) {
        setRole("Teacher");
        this -> salary = salary;
    }

    Teacher(const Human& human, double salary = 5000) : Human(human) {
        setRole("Teacher");
        this->salary = salary;
    }

    CourseworksList getCourseworksLog() const {return courseworksLog;}
    void setCourseworksLog(CourseworksList newCourseworksLog) {courseworksLog = newCourseworksLog;}


    void createCoursework(int duration, int entryLimit, string topic, string description) {
        Coursework coursework(duration, entryLimit, topic, description);
        courseworksLog.addCoursework(coursework);  
    }

    void printCourseworksLog() {
        courseworksLog.printCourseworksInfo();
    }

    void registerStudent(Human* student) {
        Coursework &randomCoursework = courseworksLog.randomCoursework(); 
        int entryLimit = randomCoursework.getEntryLimit();
        int totalStudents = randomCoursework.getStudents().getSize();
        string topic = randomCoursework.getTopic();

        if (totalStudents + 1 <= entryLimit) {
            randomCoursework.addStudent(student);
        }
        else {
            cout << "На курс " << topic << " вже записалося максимальна кількість людей" << endl;
        }
    }
    
    void printInfo() const override {
        Info();
        cout << "Salary: " << salary << endl;
        cout << endl;
    }
};