#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    if (number > 1){
        for(int i = 2; i <= number; i++){

            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    else{
        printf("%d", -1);
    }


    return 0;
}