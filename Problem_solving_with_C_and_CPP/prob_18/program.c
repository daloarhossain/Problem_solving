#include <stdio.h>

int main()
{
    int password = 1999;
    int user_entered_pass;

    while (scanf("%d", &user_entered_pass) != EOF)
    {
        

        if (user_entered_pass == password)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}