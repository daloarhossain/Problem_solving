#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    // check the condition
    if(a >= b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}