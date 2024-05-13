#include <iostream>
#include "ModulesSytenkova.h"

using namespace std;

void test_sc (int number, float buy, int siz, int N, float mus, int mus2){
    cout << "Тест-кейс №" << number << "\nВхідні дані:\nСума покупки=" << buy << "\nРозмір=" << siz << "\nЧисло N=" << N << endl;
    float re1 = sale(buy);
    int re2 = to_binary(N);
    cout << "\n" << re1 <<endl;
    whiteness (siz);
    cout << "\n" << re2 << "\n" << endl;
    if (re1 - mus > -0.01 && re1 - mus < 0.01 && re2 == mus2) cout << "Статус тест-кейса: passed\n" << endl;
    else cout << "Статус тест-кейса: failed\n" << endl;
}

int main()
{
    system("chcp 1251 & cls");
    test_sc(1, 100, 42, 1, 99, 31);
    test_sc(2, 1500, 44, 2, 1425, 31);
    test_sc(3, 2600, 46, 10, 2418, 30);
    test_sc(4, 4125, 48, 671, 3712.5, 25);
    test_sc(5, 7777, 54, 31, 6221.6, 27);
    test_sc(6, 11111, 43, -1, 8888.8, 0);
    test_sc(7, -1000, -1, 80001, 0, 0);
    return 0;
}
