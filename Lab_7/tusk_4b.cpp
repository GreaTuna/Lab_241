#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int product = 1;
    int num;
    char choice;

    do {
        cout << "Введіть число: ";
        cin >> num;

        sum += num;
        product *= num;

        cout << "Бажаєте ввести ще одне число? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << "Сума введених чисел: " << sum << endl;
    cout << "Добуток введених чисел: " << product << endl;

    return 0;
}