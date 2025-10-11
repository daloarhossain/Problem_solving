#include <stdio.h>
int main()
{
    // taking integer number for indicating the time.
    int time;
    scanf("%d", &time);

    // checking condition and printing the time.
    if(time >= 5 && time < 12){
        printf("Morning");
    }
    else if(time >= 12 && time < 17){
        printf("Afternoon");
    }
    else if(time >= 17 && time < 21){
        printf("Evening");
    }
    else{
        printf("Night");
    }
    
}