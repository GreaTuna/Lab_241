#include <iostream>
using namespace std; 
int main() {
    
    cout <<	"Напишіть цикли for, while, do…while для друку чисел від 100 до 200 через 2." << endl;

    cout <<	"Цикл for" << endl;
    for(int i = 100; i <= 200; i+=2) {
        cout << i << ' ';

        if(i == 150) {
            cout << endl;
        }
    }
    
    cout << endl;
    cout <<	"Цикл while" << endl;
    int j = 100;
    while (j <= 200) {
        cout << j << ' ';

        if (j == 150) {
            cout << endl;
        }

        j += 2;
    }

    cout << endl;
    cout <<	"Цикл do while" << endl;
    int k = 100;
    do {
        cout << k << ' ';

        if (k == 150) {
            cout << endl;
        }

        k += 2;
    } while (k <= 200);
    
    return 0;
}