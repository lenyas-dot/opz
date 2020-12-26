#include "charLetters.h"

char* TranslateFunc(const char* inputStr)
{
    int i = 0;
    int j = 0;
    int count = 0;
    bool flag = false;
    char* result = new char[1000];
    while (true)
    {
        if(inputStr[i] == '\xD0' || inputStr[i] == '\xD1')
        {
            j = 0;
            flag = false;
            while (j < 66)
            {
                if (inputStr[i] == rusLetters[j][0] && inputStr[i + 1] == rusLetters[j][1])
                {
                    int k = 0;
                    while (transLetters[j][k] != '\0')
                    {

                        result[count] = transLetters[j][k];
                        count += 1;
                        k++;

                    }
                    i += 2;
                    flag = true;
                    break;
                }
                j++;
            }
        }
        else
        {
            result[count] = inputStr[i];
            count += 1;
            i++;
        }
        if (inputStr[i] == '\0' || i >= 1000)
        {
            break;
        }

    }
    result[count] = '\0';

    return result;
}
