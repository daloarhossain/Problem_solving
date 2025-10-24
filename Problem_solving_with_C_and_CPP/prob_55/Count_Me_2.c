/**
 📅 Date   : 24-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <string.h>

int main()
{

    char str[100001];
    scanf("%s", str);

    int count_consonent = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        // check whether it is vowel or not;
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            count_consonent++;
        }
    }

    printf("%d", count_consonent);
    return 0;
}