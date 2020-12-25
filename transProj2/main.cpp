#include <iostream>
#include "Functions.h"

using namespace std;
#define charLen 1000

int main()
{
    char* inputArray = new char[charLen];
    cin.getline(inputArray, charLen);
    char* result = TranslateFunc(inputArray);
    cout << result;

    return 0;
}
