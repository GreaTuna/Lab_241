#pragma once
#include <vector>
#include "Human.h"

class HumanList {
private:
    vector<Human*> humans;
public:
    HumanList() {}

    int getSize() const {return humans.size();}

    void addHuman(Human* human) {
        humans.push_back(human);
    }

    void printHumansInfo()  const {
        for(const auto& human: humans) {
            human->printInfo();
        }
    }
};