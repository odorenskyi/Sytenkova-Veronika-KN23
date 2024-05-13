#include <iostream>
#include <conio.h>
#include "ModulesSytenkova.h"

using namespace std;

void rights (){
    system("chcp 1251 & cls");
    cout << ":=======================:\nBy Veronika Sytenkova ©\n:=======================:\n" << endl;
}

int main()
{
    rights();
    char letter;
    cout << "Введіть символ: " << endl;
    cin >> letter;

    do
    {
        switch (letter)
        {
            case 's':
            {
                int x, z;
                cout << "Введіть x: ";
                cin >> x;
                cout << "Введіть z: ";
                cin >> z;

                cout << "\nS = " << s_calculation(x,z) << endl;
                break;
            }
            case 'f':
            {
                float x;
                cout << "Введіть суму покупки: ";
                cin >> x;

                cout << "\nДо сплати: " << sale(x) << endl;
                break;
            }
            case 'g':
            {
                int x;
                cout << "Введіть розмір: ";
                cin >> x;
                whiteness(x);
                break;
            }
            case 'h':
            {
                int x;
                cout << "Введіть N: ";
                cin >> x;

                cout << "\nN = " << to_binary(x) << endl;
                break;
            }
            default:
            {
                cout << "\n\aТакої функції не існує" << endl;
                break;
            }

        }
        cout << "\nДля завершення програми натисніть J або j";
        letter = getch();
    } while (letter != 'j' && letter != 'J');
    return 0;
}
