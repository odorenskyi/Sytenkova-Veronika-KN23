#include <iostream>
#include <conio.h>
#include "ModulesSytenkova.h"

using namespace std;

void rights (){
    system("chcp 1251 & cls");
    cout << ":=======================:\nBy Veronika Sytenkova �\n:=======================:\n" << endl;
}

int main()
{
    rights();
    char letter;
    cout << "������ ������: " << endl;
    cin >> letter;

    do
    {
        switch (letter)
        {
            case 's':
            {
                int x, z;
                cout << "������ x: ";
                cin >> x;
                cout << "������ z: ";
                cin >> z;

                cout << "\nS = " << s_calculation(x,z) << endl;
                break;
            }
            case 'f':
            {
                float x;
                cout << "������ ���� �������: ";
                cin >> x;

                cout << "\n�� ������: " << sale(x) << endl;
                break;
            }
            case 'g':
            {
                int x;
                cout << "������ �����: ";
                cin >> x;
                whiteness(x);
                break;
            }
            case 'h':
            {
                int x;
                cout << "������ N: ";
                cin >> x;

                cout << "\nN = " << to_binary(x) << endl;
                break;
            }
            default:
            {
                cout << "\n\a���� ������� �� ����" << endl;
                break;
            }

        }
        cout << "\n��� ���������� �������� �������� J ��� j";
        letter = getch();
    } while (letter != 'j' && letter != 'J');
    return 0;
}
