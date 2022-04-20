// Operatoren4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void main()
{
    int a, b, c;

    a = b = c = 42;

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    a += 10;
    b -= 2;
    c *= 2;

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    a = 50'000;
    b = 2'147'483'647;

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    int x = 0xff;

    cout << "x: " << x << endl;

    x = 0x10;

    cout << "x: " << x << endl;

    x = 0b1100'1100;

    cout << "x: " << x << endl;

    x = 0377;

    cout << "x: " << x << endl;

    int i1{ 42 };

    cout << "i1: " << i1 << endl;

    int i2(42);

    cout << "i2: " << i2 << endl;


    cout << "Speichergrösse von 'int': " << sizeof(int) << endl;
    cout << "Speichergrösse von 'double': " << sizeof(double) << endl;

    double d = 0;

    cout << "Speichergrösse von 'a': " << sizeof(a) << endl;
    cout << "Speichergrösse von 'd': " << sizeof(d) << endl;

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
