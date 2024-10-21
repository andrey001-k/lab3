#include <iostream>
#include <cmath> // Для функції sin() и M_PI
using namespace std;

int main() 
{
    // Оголошення змінних для трьох чисел
    int a, b, c;

    // Введення трьох чисел
    cout << ": ";
    cin >> a >> b >> c;

    // Логика нахождения среднего числа
    int middle;

    if ((a > b && a < c) || (a < b && a > c)) {
        middle = a;
    }
    else if ((b > a && b < c) || (b < a && b > c)) {
        middle = b;
    }
    else {
        middle = c;
    }

    // Висновок середнього числа
    cout << "Середня кількість: " << middle << endl;

    double d; // Сторона трикутника
    double r; // Радіус вписаного кола

    // Введення значення сторони трикутника
    cout << "Введіть сторону трикутника a: ";
    cin >> d;

    // Обчислення радіуса кола
    r = (d * (1 + sin(M_PI / 4))) / 2; // sin(45 градусів) = sin(PI/4)

    // Виведення радіусу
    cout << "Радіус вписаного кола: " << r << endl;

    return 0;
}
