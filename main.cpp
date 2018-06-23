#include <iostream>
#include "operations.h"
using namespace std;

int main()
{
    int a = 40;
    int b = 2;
    cout << "a?";
    cin >> a;
    cout << "b?";
    cin >> b;
    cout << "a + b = " << a << " + " << b << " = " << add(a,b) << endl;
    cout << "a - b = " << a << " - " << b << " = " << diff(a,b) << endl;
    return 0;
}
