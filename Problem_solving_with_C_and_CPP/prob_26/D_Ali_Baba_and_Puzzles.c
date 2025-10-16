#include<stdio.h>

int main()
{
    int num_one, num_two, num_three;
    long long last_num;
    scanf("%d %d %d %lld", &num_one, &num_two, &num_three, &last_num);

    if((num_one + num_two - num_three) == last_num){
        printf("YES");
    }
    else if((num_one + num_two * num_three) == last_num){
        printf("YES");
    }
    else if((num_one - num_two + num_three) == last_num){
        printf("YES");
    }
    else if((num_one - num_two * num_three) == last_num){
        printf("YES");
    }
    else if((num_one * num_two + num_three) == last_num){
        printf("YES");
    }
    else if((num_one * num_two - num_three) == last_num){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}