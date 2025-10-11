#include <stdio.h>
int main()
{
    float number_one;
    int number_two;
    char opr;

    scanf("%f %c %d", &number_one, &opr, &number_two);

    if(opr == '+'){
        int sum = number_one + number_two;
        printf("%d", sum);
    }
    else if (opr == '-'){
        int sub = number_one - number_two;
        printf("%d", sub);
    }
    else if(opr == '*'){
        int mul = number_one * number_two;
        printf("%d", mul);
    }
    else if(opr == '/'){
        float divid = number_one / number_two;
        printf("%.2f", divid);
    }


    return 0;
    
}