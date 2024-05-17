#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

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
    int times0 = 0;
    int times1 = 0;
    if (N < 0 || N > 80000) return 0;
    else
    {
        int bites = sizeof(N)*8;
        for (int i = 0; i < bites; ++i)
        {
            if (((N >> i) & 1) == 0) times0++;
            else times1++;
        }
        return ((((N >> 5) & 1) == 1) ? times1 : times0);
    }
}

void task_ten_one (string input_file, string output_file)
{
    ifstream inFile(input_file);
    ofstream outFile(output_file);

    if (!inFile || !outFile)
    {
        cout << "Помилка відкриття файлу" << endl;
        return;
    }

    string word;
    inFile >> word;

    outFile << ":----------------------------------------------------------:" << endl;
    outFile << "  Cитенкова Вероніка" << endl;
    outFile << "  Центральноукраїнський національний технічний університет" << endl;
    outFile << "  м. Кропивницький, Україна" << endl;
    outFile << "  2024" << endl;
    outFile << ":------------------ © All rights reserved -----------------:" << endl;
    outFile << endl;

    string consonants = "бвгґджзйклмнпрстфхцчшщ";
    int consonantCount = 0;

    for (char c : word)
    {
        char lower_c = tolower(c);
        for (char consonant : consonants)
        {
            if (lower_c == consonant)
            {
                consonantCount++;
                break;
            }
        }
    }

    outFile << "Кількість приголосних літер у вхідному файлі: " << consonantCount << endl;

    string droplet = "Про себе не кажи недобрих слів, "
                  "Бо має сказане таємну силу. "
                  "Кажи: «Я сильний, впевнений, щасливий!» "
                  "І буде саме так, як ти хотів!";

    for (char &c : droplet)
    {
        c = tolower(c);
    }
    for (char &c : word)
    {
        c = tolower(c);
    }

    bool found = false;
    for (size_t i = 0; i <= droplet.length() - word.length(); ++i)
    {
        size_t j = 0;
        while (j < word.length() && droplet[i + j] == word[j])
        {
            ++j;
        }
        if (j == word.length())
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        outFile << "Слово \"" << word << "\" знайдено у краплинці Віталія Іващенка." << endl;
    }
    else
    {
        outFile << "Слово \"" << word << "\" не знайдено у краплинці Віталія Іващенка." << endl;
    }

    inFile.close();
    outFile.close();
}

void task_ten_two(const string& input_file)
{
    ifstream inputFile(input_file);
    if (!inputFile)
    {
        cout << "Не вдалося відкрити файл" << endl;
        return;
    }

    time_t time_now;
        time_now = time(NULL);

    inputFile.seekg(0, ios::end);
    streampos fileSize = inputFile.tellg();
    inputFile.close();

    ofstream outputFile(input_file, ios::app);
    if (!outputFile)
    {
        cout << "Не вдалося відкрити файл для дозапису" << endl;
        return;
    }

    outputFile << "\nКількість символів у вхідному вайлі: " << fileSize << endl;
    outputFile << "Дата дозапису: " << ctime(&time_now) << endl;

    outputFile.close();
    cout << "Інформацію успішно дописано у файл: " << input_file << endl;
}

void task_ten_three(int x, int z, int b, const string& output_file)
{
    ofstream outputFile(output_file, ios::app);

    float S = s_calculation(x, z);
    outputFile << "\nРезультат функції s_calculation: " << S << endl;

    string binary = "";
    while (b > 0)
    {
        int remainder = b % 2;
        binary = std::to_string(remainder) + binary;
        b /= 2;
    }
    outputFile << "\nb у двійковому коді: " << binary << endl;
}
