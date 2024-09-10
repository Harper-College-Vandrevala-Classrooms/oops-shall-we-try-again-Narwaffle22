// OopsShalWeTryThatAgainLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void verify(int min, int max, string prompt, string errorMessage) {
    string input;
    int value = min - 1;

    while (value < min || value > max) {
        cout << prompt << "\n";
        getline(cin, input);
        value = stoi(input);
        cout << "\n";
        if (value < min || value > max) {
            cout << errorMessage << "\n";
        }
    }
    cout << "Your value was: " << value << "\n";
}


int main()
{
    verify(0, 100, "Please input a value", "erm, it bad value");

    cout << "yay, it works!!! :D";
}
