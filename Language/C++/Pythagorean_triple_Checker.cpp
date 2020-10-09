/*
C++ program to verify a Pythagorean triple
*/

#include <iostream>

using namespace std;

bool Triple_Checker(int a, int b, int c);

int main()
{
    int a, b, c;    //3 positive integers

    do
    {
        cout << "Enter the first positive number (a): ";
        cin >> a;
    } while (a <= 0);

    do
    {
        cout << "Enter the second positive number (b): ";
        cin >> b;
    } while (b <= 0);

    do
    {
        cout << "Enter the third positive number (c): ";
        cin >> c;
    } while (c <= 0);

    if(Triple_Checker(a, b, c))
    {
        cout << endl << "Pythagorean triple found!" << endl;

        cout << a << "^2" << " + " << b << "^2" << " = " << c << "^2" << endl;
    }else
    {
        cout << "Pythagorean triple not found!" << endl;

        cout << a << "^2" << " + " << b << "^2" << " != " << c << "^2" << endl;
    }

}

bool Triple_Checker(int a, int b, int c)
{
    int aSquared = a * a;
    int bSquared = b * b;
    int cSquared = c * c;

    int sum = aSquared + bSquared;

    if(sum == cSquared)     //if a^2+b^2=c^2 => (a,b,c) is a Pythagorean triple
        return true;
    else
        return false;
}
