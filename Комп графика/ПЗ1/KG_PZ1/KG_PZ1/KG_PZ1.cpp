#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    double num1, num2;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    double x = max(num1, num2);

    double result = log(pow(x, 2));

    cout << "Большее число: " << x << endl;
    cout << "Результат F(x) = ln(x^2): " << result << endl;

    return 0;
}