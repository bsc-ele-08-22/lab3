#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "hello";
    string str2 = " world";
    string str3; 
    int len ; 

    //copy str1 into str3
    str3 = str1;
    cout << str3 << endl;

    //concatenate sstr1 and str2
    str3 = str1 + str2;
    cout << str3 << endl;

    //total length of str3 after concatenation
    len = str3.size();
    cout << len << endl;

    return 0;

}