#include <iostream>
using namespace std;

int main() {
    for (double magnitude = 4.5; magnitude <= 7.5; magnitude += 0.5) {
        if (magnitude < 5.0) {
            cout << "Балів " << magnitude << ": Легке, немає руйнувань" << endl;
        } else if (magnitude >= 5.0 && magnitude < 5.5) {
            cout << "Балів " << magnitude << ": Середнє, невеликі руйнування" << endl;
        } else if (magnitude >= 5.5 && magnitude < 6.5) {
            cout << "Балів " << magnitude << ": Серйозне, руйнування та пошкодження стін" << endl;
        } else if (magnitude >= 6.5 && magnitude < 7.5) {
            cout << "Балів " << magnitude << ": Лихо, багато будинків та будівель пошкоджено" << endl;
        } else {
            cout << "Балів " << magnitude << ": Катастрофа, більшість будинків та будівель зруйновано" << endl;
        }
    }

    return 0;
}