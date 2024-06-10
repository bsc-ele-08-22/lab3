#include <iostream>
using namespace std;
main ()
{
    int a = 21;
    int c;

    c = a;
    cout << "Line 1-  = operation, value of c : "<< c << endl;
    
    c += a;
    cout << "Line 2-  += operation, value of c : "<< c << endl;

    c -= a;
    cout << "Line 3 - -= operation, value of c : "<< c << endl;

    c *= a;
    cout << "Line 4 - *= operation, value of c : "<< c << endl;

    c /= a;
    cout << "Line 5 - /= operation, value of c : "<< c << endl;

    c = 200;
    c %= a;
    cout << "Line 6 - %= operation, value of c : "<< c << endl;

    c <<= 2;
    cout << "Line 7 - <<= operation, value of c : "<< c << endl;

    c >>= 2;
    cout << "Line 8 - >>= operation, value of c : "<< c << endl;

    c &= 2;
    cout << "Line 9 - &= operation, value of c : "<< c << endl;

    c ^= 2;
    cout << "Line 10 - ^= operation, value of c : "<< c << endl;

    c  |= 2;
    cout << "Line 11 - |= operation, value of c : "<< c << endl;

    return 0;
}