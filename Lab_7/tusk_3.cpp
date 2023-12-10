#include <iostream>
using namespace std;

int main() {
    
    int lowerBound = 0; 
    int upperBound = 0; 
    int number;

    cout << "Введите нижнюю границу: ";
    cin >> lowerBound;
    cout << "Введите верхнюю границу: ";
    cin >> upperBound;

    do {
        cout << "Введите число в диапазоне от " << lowerBound << " до " << upperBound << ": ";
        cin >> number;

        if (number < lowerBound || number > upperBound) {
            cout << "Число выходит за границы диапазона. Повторите ввод." << endl;
        }
    } while (number < lowerBound || number > upperBound);

    cout << "Вы ввели допустимое число: " << number << endl;

    return 0;
}