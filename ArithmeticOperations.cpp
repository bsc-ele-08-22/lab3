#include <iostream>
using namespace std;

int main()
{
    int A = 21;
    int B = 10;
    int C;

    C = A + B;
    cout << "addition: c is " << C << endl;

    C = A - B;
    cout << "subtrsction: c is "<< C << endl;

    C = A / B;
    cout <<"division:   c is "<< C << endl;

    C = A * B;
    cout << "multiplication: C is "<< C << endl;

    C = A % B;
    cout <<"remainder: C is "<< C << endl;

    C = A++;
    cout << "increment: C is "<< C << endl;

    C = A--;
    cout << "Decrement: C is "<< C << endl;

}