/**
 📅 Date   : 23-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <string.h>

int main()
{

    char text[1001];
    fgets(text, sizeof(text), stdin);

    if (text[strlen(text) - 1] == '\n')
    {
        // Remove new line as fgets() takes it automatically
        text[strlen(text) - 1] = '\0';
    }

    int str_len = strlen(text);

    // Checking the palindrome
    int is_palindrome = 0;
    for (int i = 0, j = str_len -1; i < str_len; i++, j--)
    {
        if(text[i] != text[j]){
            is_palindrome += 1;
        }  
    }

    // Print the output;

    if(is_palindrome == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}