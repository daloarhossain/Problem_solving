/**
 📅 Date   : 23-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <string.h>

int main()
{

    char text[1000001];
    fgets(text, sizeof(text), stdin);

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '\\')
        {
            text[i] = '\0';
        }
    }

    printf("%s", text);


    return 0;
}