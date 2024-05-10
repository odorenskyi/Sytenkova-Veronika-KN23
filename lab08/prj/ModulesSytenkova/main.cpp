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
        std::cout << "Вартість має бути додатньою.";
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
            std::cout << "Відповідник у системі Франції - 2\nВідповідник у системі Великобританії - 34\nВідповідник у міжнародній системі - S";
            break;
        case 46:
            std::cout << "Відповідник у системі Франції - 3\nВідповідник у системі Великобританії - 36\nВідповідник у міжнародній системі - M";
            break;
        case 48:
            std::cout << "Відповідник у системі Франції - 4\nВідповідник у системі Великобританії - 38\nВідповідник у міжнародній системі - L";
            break;
        case 50:
            std::cout << "Відповідник у системі Франції - 5\nВідповідник у системі Великобританії - 40\nВідповідник у міжнародній системі - XL";
            break;
        case 52:
            std::cout << "Відповідник у системі Франції - 6\nВідповідник у системі Великобританії - 42\nВідповідник у міжнародній системі - XXL";
            break;
        case 54:
            std::cout << "Відповідник у системі Франції - відсутній\nВідповідник у системі Великобританії - 44\nВідповідник у міжнародній системі - XXXL";
            break;
        default:
            std::cout << "Такого розміру не існує.";
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
