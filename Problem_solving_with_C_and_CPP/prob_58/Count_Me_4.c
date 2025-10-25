/**
 📅 Date   : 25-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <string.h>

int main()
{

    char value[10001];
    scanf("%s", value);

    int count_value[27] = {0};
    for (int i = 0; i < strlen(value); i++)
    {
        // calculating the index with ascii to store value
        int make_indx = value[i] - 97;
        count_value[make_indx]++;
    }

    /*
        Priting the output with the help of ASCII value
        A = 97
        B = 97 + 1
        D = 97 + 3
    */
   
    for (int i = 0; i < 27; i++)
    {
        if (count_value[i] > 0)
        {
            printf("%c - %d\n", (97 + i), count_value[i]);
        }
    }

    return 0;
}