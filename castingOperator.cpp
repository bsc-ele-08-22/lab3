#include <iostream>
using namespace std;

main()
{
    double a = 21.4234;
    float d = 10.20;
    int c;

    c = (int) a;
    cout << "(int) a = "<< c<< endl;

    c = (int) d;
    cout <<"(int) d = "<< c << endl;
    
    return 0;
}