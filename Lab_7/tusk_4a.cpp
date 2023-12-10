#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "Введіть кількість чисел: ";
    cin >> count;

    int sum = 0;
    int product = 1;

    for (int i = 0; i < count; i++) {
        int num;
        cout << "Введіть число " << (i + 1) << ": ";
        cin >> num;

        sum += num;
        product *= num;
    }

    cout << "Сума введених чисел: " << sum << endl;
    cout << "Добуток введених чисел: " << product << endl;

    return 0;
}