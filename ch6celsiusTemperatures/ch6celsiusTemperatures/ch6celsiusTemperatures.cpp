// ch6celsiusTemperatures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
using namespace std;
void tempConvert(int aValue);
int main()
{
    int number=0;
    cout << "Chap. 6 Celsius Temperatures by Kevin Bell\n";
    cout << "Temperature Conversion Table\n\n";
    cout << "    Fahrenheit        Celsius   \n";
    cout << "--------------------------------\n";
    tempConvert(number);
    system("pause");
    return 0;
}
void tempConvert(int number) {
    double celsius=0.0;
    int fahrenheit=0;
    celsius = (.55555555556) * (fahrenheit - 32);
    int num;
    for (num = 25; num < 100; num) {
        num = num + 5;
        cout << setw(10) <<setprecision(2)<< fixed << num << setw(18) << (num * .6214) << endl;
    }
}
