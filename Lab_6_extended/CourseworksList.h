#pragma once
#include <vector>
#include "Coursework.h"
#include <cstdlib>
#include <ctime>

class CourseworksList {
private:
    vector<Coursework> courseworksList;
public:
    CourseworksList() {srand(static_cast<unsigned int>(time(nullptr)));}

    int getSize() const {return courseworksList.size();}

    void addCoursework(Coursework coursework) {
        courseworksList.push_back(coursework);
    }

    void printCourseworksInfo() {
        for(const auto& coursework: courseworksList) {
            coursework.printCourseworkInfo();
            cout << endl;
        }
    }

    Coursework& randomCoursework() {
        int randomIndex = rand() % courseworksList.size();
        return courseworksList[randomIndex];
    }
};