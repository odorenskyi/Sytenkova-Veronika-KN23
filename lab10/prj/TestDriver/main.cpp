#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "ModulesSytenkova.h"


using namespace std;

#define TEST_CASES 3

void TestDriver_first_task(int test_case, string input_file, string output_file)
{
    cout << "TC_0" << test_case << endl;
    cout << "Вхідні дані:\ninput_file: " << input_file << endl;

    task_ten_one(input_file, output_file);
    cout << "Вміст файлу відповідає тест-кейсу? (y/n): " ;
    char check;
    cin >> check;
    if (check == 'y')
    {
        cout << endl << "Результат: passed" << endl;
    }
    else
    {
        cout << endl << "Результат: failed" << endl;
    }

    cout << endl;
}

void TestDriver_second_task(int test_case, string input_file)
{
    cout << "TC_0" << test_case << endl;
    cout << "Вхідні дані:\ninput_file: " << input_file << endl;

    task_ten_two(input_file);
    cout << "Вміст файлу відповідає тест-кейсу? (y/n): " ;
    char check;
    cin >> check;
    if (check == 'y')
    {
        cout << endl << "Результат: passed" << endl;
    }
    else
    {
        cout << endl << "Результат: failed" << endl;
    }

    cout << endl;;
}
void TestDriver_third_task(int test_case, int x, int z, int b, string output_file)
{
    cout << "TC_0" << test_case << endl;
    cout << "Вхідні дані:\nx: " << x << "\nz: " << z << "\nb: " << b << endl;
    cout << "output_file: " << output_file << endl;

    task_ten_three(x, z, b, output_file);
    cout << "Вміст файлу відповідає тест-кейсу? (y/n): " ;
    char check;
    cin >> check;
    if (check == 'y')
    {
        cout << endl << "Результат: passed" << endl;
    }
    else
    {
        cout << endl << "Результат: failed" << endl;
    }

    cout << endl;;
}


int main()
{
    system("chcp 1251 & cls");

    cout << ":====== TS_10_1 ======:" << endl;
    const string first_task[TEST_CASES][2] = {
        {"input_1.txt", "output_1.txt"},
        {"input_2.txt", "output_2.txt"},
        {"input_3.txt", "output_3.txt"}
    };
    for (int i = 0; i < TEST_CASES; i++)
    {
        TestDriver_first_task(i + 1, first_task[i][0], first_task[i][1]);
    }

    cout << ":====== TS_10_2 ======:" << endl;
    const string second_task[TEST_CASES] = {
        "input_4.txt",
        "input_5.txt",
        "input_6.txt"
    };
    for (int i = 0; i < TEST_CASES; i++)
    {
        TestDriver_second_task(i + 1, second_task[i]);
    }

    cout << ":====== TS_10_3 ======:" << endl;
    const string third_task[TEST_CASES][4] = {
        {"1", "1", "10", "output_4.txt"},
        {"2", "2", "182", "output_5.txt"},
        {"-1", "0", "255", "output_6.txt"}
    };
    for (int i = 0; i < TEST_CASES; i++)
    {
        TestDriver_third_task(i + 1, stoi(third_task[i][0]), stoi(third_task[i][1]), stoi(third_task[i][2]), third_task[i][3]);
    }

    system("pause");
    return 0;
}
