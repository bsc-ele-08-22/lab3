#include <iostream>
using namespace std;

main()
{
    int a = 21;
    int b = 10;
    int c;

    if (a == b){
        cout << "line 1 -- a is qual to b "<< endl;
    } else {
        cout << "line 1 -- a is not equal to b " << endl;
    }
    if (a < b) {
        cout << "line 2 -- a is less than b "<< endl;
    }else {
        cout << "line 2 -- a is not less than b "<< endl;
    }
    if (a>b) {
        cout << "line 3 -- a is greater than b" << endl;
    } else {
        cout << "line 3 -- a is not greater than b " << endl;
    }

    a = 5;
    b = 20;
    if (b >= a) {
        cout << "line 4 -- b is either greater than or equal to a "<< endl;
    }
    if (a <= b) {
        cout << "line 4 -- a is either less than or equal to b" << endl;
    }
    return 0;
}