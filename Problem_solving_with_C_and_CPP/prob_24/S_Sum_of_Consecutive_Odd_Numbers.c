#include<stdio.h>

int main()
{
    int tast_case;
    scanf("%d", &tast_case);

    for(int i = 1; i <= tast_case; i++){
        int first_num, last_num;
        scanf("%d %d\n", &first_num, &last_num);

        /*
            find the small and max number to start the counting;
            For the condition of excluding, 1 was added or deleted.
        */
       
        int starting_point = 0;
        int ending_point = 0;

        if(first_num > last_num){
            ending_point = first_num - 1; 
            starting_point = last_num + 1; 
        }
        else{
            starting_point = first_num + 1;
            ending_point = last_num - 1;
        }


        // calculate the odd numbers;
        int sum = 0;
        for(int j = starting_point; j <= ending_point; j++){
            if(j % 2 == 1){
                sum += j;
            }
        }

        // print the output
        printf("%d\n", sum);
        
    }

    return 0;
}