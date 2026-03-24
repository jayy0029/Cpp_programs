#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    int multiply;
    multiply = a * b;
    return multiply;
}

int main()
{
    cout << multiply(12, 4);
    cout << endl;
    return 0;
}