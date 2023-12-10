#include <iostream>
#include <string>
using namespace std;

enum Days {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main() {
    
    int day = 5;
    string day_str = "Su";
    Days today = Wednesday;

    cout << "Ціле:" << endl;
    switch(day) {
        case 1:
            cout << "Понеділок" << endl;
            break;
        case 2:
            cout << "Вівторок" << endl;
            break;
        case 3:
            cout << "Середа" << endl;
            break;
        case 4:
            cout << "Четвер" << endl;
            break;
        case 5:
            cout << "П'ятниця" << endl;
            break;
        case 6:
            cout << "Субота" << endl;
            break;
        case 7:
            cout << "Неділя" << endl;
            break;    
        default:
            cout << "Недійсний день" << endl;
            break;
    }

    cout << "Символ:" << endl;
    switch(day_str[0]) {
        case 'M':
            cout << "Понеділок" << endl;
            break;
        case 'T':
            if (day_str == "Th") {
                cout <<"Четвер" << endl;
            }
            else {
                cout << "Вівторок" << endl;
            }    
            break;
        case 'W':
            cout << "Середа" << endl;
            break;
        case 'F':
            cout << "П'ятниця" << endl;
            break;
        case 'S':
            if (day_str == "Su") {
                cout <<"Неділя" << endl;
            }
            else {
                cout << "Субота" << endl;
            }
            break;  
        default:
            cout << "Недійсний день" << endl;
            break;
    }
    
    cout << "Enumeration:" << endl;
    switch (today) {
        case Monday:
            cout << "Понеділок" << endl;
            break;
        case Tuesday:
            cout << "Вівторок" << endl;
            break;
        case Wednesday:
            cout << "Середа" << endl;
            break;
        case Thursday:
            cout << "Четвер" << endl;
            break;
        case Friday:
            cout << "П'ятниця" << endl;
            break;
        case Saturday:
            cout << "Субота" << endl;
            break;
        case Sunday:
            cout << "Неділя" << endl;
            break;
        default:
            cout << "Недійсний день" << endl;
            break;
    }
    return 0;
}
