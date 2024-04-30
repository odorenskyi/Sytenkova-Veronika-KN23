#include <iostream>
#include <iomanip>
#include "ModulesSytenkova.h"

using namespace std;

bool degree ( char a, char b){
    if ((a + 3) <= b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void rights (){
    system("chcp 1251 & cls");
    cout << ":=======================:\nBy Veronika Sytenkova ©\n:=======================:\n" << endl;
}

int main(){
    int x, y, z;
    char a, b;
    rights();
    cout << "¬вед≥ть x: ";
    cin >> x;
    cout << "¬вед≥ть y: ";
    cin >> y;
    cout << "¬вед≥ть z: ";
    cin >> z;
    cout << "¬вед≥ть a: ";
    cin >> a;
    cout << "¬вед≥ть b: ";
    cin >> b;

    std::cout << std::boolalpha << degree(a, b) << std::endl;
    std::cout << "¬ дес€тков≥й систем≥ численн€: x = " << x << ", y = " << y << ", z = " << z << std::endl;
    std::cout << "¬ ш≥снадц€тков≥й систем≥ численн€x: x = " << std::hex << x << ", y = " << std::hex << y << ", z = " << std::hex << z << std::endl;
    std::cout << "S = " << s_calculation(x, z) << std::endl;
}
