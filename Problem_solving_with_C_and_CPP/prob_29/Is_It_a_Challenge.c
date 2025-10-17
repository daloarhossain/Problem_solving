#include<stdio.h>

int main()
{
    int value;
    scanf("%d", &value);

    if(value >= 1){
        for(int i = 1; i <= value; i++){
            printf("%d ", i);
        }
    }
    else {
            
        for (int i = value; i <= 0; i++){
            printf("%d ", i);
        }
            
    }

    
    return 0;
}