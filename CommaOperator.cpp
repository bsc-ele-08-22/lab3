#include <iostream>
using namespace std;

int main ()
{
    int i, j;

    i = 10;
    j = (i++, i+100, 999 + i);
    cout << j << endl;

    return 0;
}