#include <iostream>
using namespace std; 
int main() {
    
    cout << "Напишіть вкладений цикл for, який друкує картинку з нулів 10х10." << endl;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout << "0";
        }
        cout << endl;
    }
    
    return 0;
}