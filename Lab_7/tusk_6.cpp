#include <iostream>
using namespace std;

int main() {
    for (double power = 20; power <= 220; power += 20) {
        int serviceLife; 

        if (power == 25) {
            serviceLife = 2500;
        } else if (power == 40 || power == 60) {
            serviceLife = 1000;
        } else if (power == 75 || power == 100) {
            serviceLife = 750;
        } else if (power == 150 || power == 200) {
            serviceLife = 500;
        } else {
            cout << "Для мощности " << power << " Вт нет данных о термине службы в таблице." << endl;
            continue;
        }

        cout << "Термин службы лампочки мощностью " << power << " Вт: " << serviceLife << " часов" << endl;
    }

    return 0;
}