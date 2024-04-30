#include <iostream>
#include "ModulesSytenkova.h"

using namespace std;

void test_sc (int number, double x, double z, double mustbe){
    cout << "Тест-кейс №" << number << "\nВхідні дані:\nx=" << x << "\nz=" << z << endl;
    double result = s_calculation(x, z);
    cout << "\n" << result << "\n" << endl;
    if (result - mustbe > -0.3 && result - mustbe < 0.3) cout << "Статус тест-кейса: passed\n" << endl;
    else cout << "Статус тест-кейса: failed\n" << endl;
}

int main()
{
    system("chcp 1251 & cls");
    test_sc(1, 1, 1, 0.111532);
    test_sc(2, 2, 2, 0);
    test_sc(3, -1, -1, -3.01136);
    test_sc(4, 0.5, 0.5, 0.250118);
    test_sc(5, -2, -2, -45.5644);
    return 0;
}
