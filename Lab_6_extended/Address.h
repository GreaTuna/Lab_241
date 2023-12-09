#pragma once
#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string country;
    string city;
public:
    Address(string country = "Ukraine", string city = "Kherson") {
        this-> country = country;
        this-> city = city;
    }

    string getCountry() const {return country;}
    void setCountry(string newCountry) {country = newCountry;}

    string getCity() const {return city;}
    void setCity(string newCity) {city = newCity;}


    void printAddressInfo() const {
        cout << "Country " << country << " City " << city << endl;
    }
};