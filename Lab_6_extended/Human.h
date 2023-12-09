#pragma once
#include "Address.h"

class Human {
private:
    int age;
    bool gender;
    Address address;
    string role;
public:
    Human(int age = 18, bool gender = 1,  Address address = Address(), string role = "Human") {
        this-> age = age;
        this-> gender = gender;
        this-> address = address;
        this-> role = role;
    }

    int getAge() const {return age;}
    void setAge(int newAge) {age = newAge;}

    string getGender() const {return (gender ? "male":"female");}
    void setGender(bool newGender) {gender = newGender;}

    Address getAddress() const {return address;}
    void setAddress(Address newAddress) {address = newAddress;}

    string getRole() const {return role;}
    void setRole(string newRole) {role = newRole;}


    void Info() const {
        cout << "Age - " << age << endl;
        cout << "Gender - " << (gender ? "male":"female") << endl;
        cout << "Role - " << role << endl;
        cout << "Address: ";
        address.printAddressInfo();
    }
    
    virtual void printInfo() const {
        Info();
        cout << endl;
    }
};