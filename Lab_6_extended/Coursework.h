#pragma once
#include <iostream>
#include <string>
#include "HumanList.h"
using namespace std;

class Coursework {
private:
    int duration;
    int entryLimit;
    string topic;
    string description;
    HumanList students;
public:
    Coursework(
    int duration = 12,
    int entryLimit = 5,
    const string& topic = "Golden ratio",  
    const string& description = "Exploring the Golden Ratio: Mathematical Harmony in Nature and Art") {

        this-> duration = duration;
        this-> entryLimit = entryLimit;
        this-> topic = topic;
        this-> description = description;
    }

    int getDuration() const {return duration;}
    void setDuration(int newDuration) {duration = newDuration;}

    int getEntryLimit() const {return entryLimit;}
    void setEntryLimit(int newEntryLimit) {entryLimit = newEntryLimit;}
    
    HumanList getStudents() const {return students;} //  HumanList getStudents() const {return students;}
    void setStudents(HumanList newStudents) {students = newStudents;}

    string getTopic() const {return topic;}
    void setTopic(string newTopic) {topic = newTopic;}

    void addStudent(Human* student) {
        students.addHuman(student);
    }

    void printCourseworkInfo() const {
        cout << "duration - " << duration << endl;
        cout << "topic - " << topic << endl;
        cout << "description - " << description << endl;
        cout << "registered students - " << students.getSize() << endl;
    }
};