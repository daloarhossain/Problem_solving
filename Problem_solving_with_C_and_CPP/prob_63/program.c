/**
 📅 Date   : 29-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{

    int test_case;
    scanf("%d", &test_case);

    getchar(); // to skip the new line 

    for (int i = 1; i <= test_case; i++)
    {
        char string[1001];
        gets(string);

        // get the length of a string with the help of null char
        int strlen = 0;
        for(int ch = 0; ; ch++){
            if(string[ch] != '\0'){
                strlen++;
            }
            else{
                break;
            }
        }

        printf("%d\n", strlen);
    }

    return 0;
}