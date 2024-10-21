#include <iostream>
#include <Windows.h>
#include "Money.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Money m1, m2;
    m1.Read();
    m2.Read();

    Money sum = m1 + m2;
    cout << "Додавання: " << m1.GetMoney() << "." << m1.GetCents() << " + " << m2.GetMoney() << "." << m2.GetCents() << " = " << sum.GetMoney() << "." << sum.GetCents() << endl;

    // Демонстрація віднімання
    Money difference = m1 - m2;
    cout << "Віднімання: " << m1.GetMoney() << "." << m1.GetCents() << " - " << m2.GetMoney() << "." << m2.GetCents() << " = " << difference.GetMoney() << "." << difference.GetCents() << endl;

    // Демонстрація множення
    Money product = m1 * 2.5;
    cout << "Множення: " << m1.GetMoney() << "." << m1.GetCents() << " * 2.5 = " << product.GetMoney() << "." << product.GetCents() << endl;

    // Демонстрація ділення
    Money quotient = m1 / 3;
    cout << "Ділення: " << m1.GetMoney() << "." << m1.GetCents() << " / 3 = " << quotient.GetMoney() << "." << quotient.GetCents() << endl;

    // Демонстрація порівняння
    if (m1 == m2) {
        cout << m1.GetMoney() << "." << m1.GetCents() << " дорівнює " << m2.GetMoney() << "." << m2.GetCents() << endl;
    }
    else if (m1 > m2) {
        cout << m1.GetMoney() << "." << m1.GetCents() << " більше ніж " << m2.GetMoney() << "." << m2.GetCents() << endl;
    }
    else {
        cout << m1.GetMoney() << "." << m1.GetCents() << " менше ніж " << m2.GetMoney() << "." << m2.GetCents() << endl;
    }
}