#include <iostream>
#include <cmath>

using namespace std;

double calculateFunction(double x) {
    return log(pow(x, 2));
}

int main() {
    double number;
    int choice;

    do {
        cout << "Введите число x: ";
        cin >> number;

        double result = calculateFunction(number);
        cout << "Результат F(x) = " << result << endl;

        cout << "Продолжить вычисления? (1 - да, 0 - нет): ";
        cin >> choice;

    } while (choice != 0);

    return 0;
}