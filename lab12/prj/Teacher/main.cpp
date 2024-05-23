#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <filesystem>
#include "ModulesSytenkova.h"

using namespace std;

int main() {
    system("chcp 1251 & cls");
    string currentFilePath = __FILE__;
    int checkResult = currentFilePath.find("\\lab12\\prj\\");
    if (checkResult == -1)
    {
        ofstream outputFile("TestResults.txt");
        outputFile << "���������� ������ ������� ��������� ����������� ������ ��������!" << endl;
        outputFile.close();

        for (int i = 0; i < 100; ++i) cout << "\a";

        return 0;
    }
    else
    {
        ifstream inputFile("C:\\Users\\user\\university\\Sytenkova-Veronika-KN23\\lab12\\TestSuite\\TestSuite.txt");
        ofstream outputFile("C:\\Users\\user\\university\\Sytenkova-Veronika-KN23\\lab12\\TestSuite\\TestResults.txt");

        if (inputFile.is_open() && outputFile.is_open()){

            string line;
            vector<float> numbers;
            float num;

            if (getline(inputFile, line))
                {
                stringstream ss1(line);
                for (int i = 0; i < 2; ++i)
                {
                    ss1 >> num;
                    numbers.push_back(num);
                }
            }
            if (getline(inputFile, line))
            {
                stringstream ss2(line);
                for (int i = 0; i < 4; ++i)
                {
                    ss2 >> num;
                    numbers.push_back(num);
                }
            }
            if (getline(inputFile, line))
            {
                stringstream ss3(line);
                for (int i = 0; i < 4; ++i)
                {
                    ss3 >> num;
                    numbers.push_back(num);
                }
            }
            inputFile.close();


            ClassLab12_Sytenkova j;

            // ����-���� 1
            outputFile << "����-���� �1" << endl;
            float radius = j.get_radius();
            outputFile << "����� ������: "<< radius << endl;
            float area = j.get_area();
            outputFile << "����� ������: "<< area << endl;
            int cabin = j.get_cabin();
            outputFile << "ʳ������ ���� � ���������� �����: "<< cabin << endl;
            if (abs(area - numbers[0]) < 0.001 && cabin == numbers[1])
                {
                outputFile << "������ ����-�����: passed\n" << endl;
            }
            else
            {
                outputFile << "������ ����-�����: failed\n" << endl;
            }

            // ����-���� 2
            outputFile << "����-���� �2" << endl;
            j.set_radius(numbers[2]);
            j.set_cabin(numbers[3]);
            radius = j.get_radius();
            outputFile << "����� ������: "<< radius << endl;
            area = j.get_area();
            outputFile << "����� ������: "<< area << endl;
            cabin = j.get_cabin();
            outputFile << "ʳ������ ���� � ���������� �����: "<< cabin << endl;
            if (abs(area - numbers[4]) < 0.001 && cabin == numbers[5])
            {
                outputFile << "������ ����-�����: passed\n" << endl;
            }
            else
            {
                outputFile << "������ ����-�����: failed\n" << endl;
            }

            // ����-���� 3
            outputFile << "����-���� �3" << endl;
            j.set_radius(numbers[6]);
            j.set_cabin(numbers[7]);
            radius = j.get_radius();
            outputFile << "����� ������: "<< radius << endl;
            area = j.get_area();
            outputFile << "����� ������: "<< area << endl;
            cabin = j.get_cabin();
            outputFile << "ʳ������ ���� � ���������� �����: "<< cabin << endl;
            if (abs(area - numbers[8]) < 0.001 && cabin == numbers[9])
            {
                outputFile << "������ ����-�����: passed\n" << endl;
            }
            else
            {
                outputFile << "������ ����-�����: failed\n" << endl;
            }

            outputFile.close();
        }
    }
    return 0;
}
