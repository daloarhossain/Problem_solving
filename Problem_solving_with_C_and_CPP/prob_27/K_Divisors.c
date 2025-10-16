#include<stdio.h>

int main()
{
    int value;
    scanf("%d", &value);

    for(int i = 1; i <= value; i++){

        if(value % i == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}