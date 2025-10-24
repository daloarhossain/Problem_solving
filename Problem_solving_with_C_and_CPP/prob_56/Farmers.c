/**
 📅 Date   : 24-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  
  int test_case;
  scanf("%d", &test_case);

  for(int i = 0; i < test_case; i++){
    int workers, extra_workers,days;
    scanf("%d %d %d", &workers, &extra_workers, &days);

    // A worker can complet the task within .....days
    int one_worker_needs = days * workers;
    // all people can complet the task within ......days
    int all_workers_need = one_worker_needs / (workers + extra_workers);

    // extra workers reducing the days ...... 
    int total_days_require = days - all_workers_need;

    if(total_days_require < 0){
        printf("%d\n", 1);
    }
    else{
        printf("%d\n", total_days_require);
    }

  }

  return 0; 
}