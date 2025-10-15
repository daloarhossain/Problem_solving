#include<stdio.h>

int main()
{
    int how_many_values;
    scanf("%d\n", &how_many_values);
    
    int max_value = 0;
    

    for (int i = 0; i < how_many_values; i++){ 
        int current_value;
        scanf("%d", &current_value);

        if(current_value > max_value){
            max_value = current_value;
        }
    }

    // print output
    printf("%d", max_value);
    
    return 0;
}