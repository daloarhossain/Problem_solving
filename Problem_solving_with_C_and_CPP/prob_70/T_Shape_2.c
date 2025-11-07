/**
 📅 Date   : 07-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  
    int len;
    scanf("%d", &len);

    int make_star = 1;

    for(int i = 1; i <= len; i++){

        for(int k = len - i; k >= 1; k--){
            printf(" ");
        }

        for(int j = 1; j <= make_star; j++){
            printf("*");
        }

        printf("\n");
        make_star += 2;
    }
  
  return 0; 
}