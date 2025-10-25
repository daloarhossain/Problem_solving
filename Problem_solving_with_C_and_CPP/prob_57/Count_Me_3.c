/**
 📅 Date   : 24-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <string.h>

int main()
{

    int test_case;
    scanf("%d", &test_case);
    getchar();

    for (int i = 0; i < test_case; i++)
    {
        char str[10001];
        fgets(str, 10001, stdin);

        int upper_case = 0, lower_case = 0, digits = 0;

        for (int c = 0; c < strlen(str); c++)
        {
            int ch = str[c];
            if(ch >= 'A' && ch <= 'Z'){
                upper_case++;
            }
            else if(ch >= 'a' && ch <= 'z'){
                lower_case++;
            }
            else if(ch >= '0' && ch <= '9'){
                digits++;
            }
            else if(ch == '\n' || ch == '\0'){
                break;
            }
        }

        printf("%d %d %d\n", upper_case, lower_case, digits);
    }
    return 0;
}