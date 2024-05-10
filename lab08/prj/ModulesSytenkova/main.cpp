#include <iostream>
#include <math.h>

double s_calculation (double x, double z)
{
    double S = ((0.5)*(pow(((abs(2*z - pow(x, 2)))/ sin(x)), 3)))/(pow(1+(abs(cos(x))), 0.5) + 2 * 3.1415);
    return S;
}

float sale (float buy)
{
    if (buy<=0)
    {
        std::cout << "������� �� ���� ���������.";
        return 0;
    }
    else
    {
        if (buy<1000) buy = buy*0.99;
        else if (buy<2000) buy = buy*0.95;
        else if (buy<3000) buy = buy*0.93;
        else if (buy<5000) buy = buy*0.9;
        else if (buy<1000) buy = buy*0.85;
        else buy = buy*0.8;
        return buy;
    }
}

void whiteness (int siz)
{
    switch (siz)
    {
        case 44:
            std::cout << "³�������� � ������ ������� - 2\n³�������� � ������ ������������ - 34\n³�������� � ��������� ������ - S";
            break;
        case 46:
            std::cout << "³�������� � ������ ������� - 3\n³�������� � ������ ������������ - 36\n³�������� � ��������� ������ - M";
            break;
        case 48:
            std::cout << "³�������� � ������ ������� - 4\n³�������� � ������ ������������ - 38\n³�������� � ��������� ������ - L";
            break;
        case 50:
            std::cout << "³�������� � ������ ������� - 5\n³�������� � ������ ������������ - 40\n³�������� � ��������� ������ - XL";
            break;
        case 52:
            std::cout << "³�������� � ������ ������� - 6\n³�������� � ������ ������������ - 42\n³�������� � ��������� ������ - XXL";
            break;
        case 54:
            std::cout << "³�������� � ������ ������� - �������\n³�������� � ������ ������������ - 44\n³�������� � ��������� ������ - XXXL";
            break;
        default:
            std::cout << "������ ������ �� ����.";
    }
}

int to_binary (int N)
{
    int bites = sizeof(N)*8;
    int times0 = 0;
    int times1 = 0;
    for (int i = 0; i < bites; ++i)
    {
        if (((N >> i) & 1) == 0) times0++;
        else times1++;
    }
    return ((((N >> 5) & 1) == 1) ? times1 : times0);
}
