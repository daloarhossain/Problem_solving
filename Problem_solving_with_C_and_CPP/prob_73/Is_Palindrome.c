/**
 📅 Date   : 08-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <string.h>

int is_palindrome(char string[])
{
    int detect_plaindrome = 1;

    for (int i = 0, j = strlen(string) - 1; i <= j; i++, j--)
    {
        if (string[i] != string[j])
        {
            detect_plaindrome = 0;

            break;
        }
    }

    return detect_plaindrome;
}

int main()
{
    char string[1001];
    fgets(string, 1001, stdin);

    // Remove the new line charecter
    if (string[strlen(string) - 1] == '\n')
    {
        string[strlen(string) - 1] = '\0';
    }

    int is_pldm = is_palindrome(string);

    // check whether it is plaindrome or not
    if (is_pldm)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}