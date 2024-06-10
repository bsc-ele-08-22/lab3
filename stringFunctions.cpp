#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[10] = "Hello ";
    char str2[10] = "World";
    char str3[10];
    int len;

    //copy str1 into str3
    strcpy(str3, str1);
    cout << str3 << endl;

    //concatenate str1 and str2
    strcat(str1, str2);
    cout << str1 << endl;

    //total length of str1 after concatenation
    len = strlen(str1);
    cout << len << endl;

    return 0;
}