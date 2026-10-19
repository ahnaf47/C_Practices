#include<stdio.h>
int main(){

    int i,n;

    scanf("%d",&n);
     int lab_marks[n+4];

     for(i=0;i<n;i++){
        scanf("%d",&lab_marks[i]);
     }

     int pass = 0,total_marks=0;

     for(i=0;i<n;i++){
        total_marks += lab_marks[i];
     }

     float avg = (total_marks/n);

     int passed_below_avg = 0;

     for(i=0;i<n;i++){
        if(lab_marks[i]>=40 && lab_marks[i]<avg){
            passed_below_avg++;
        }
        else if(lab_marks[i]>=40){
            pass++;
        }
     }

     printf("Passed Students:%d\nPassed but below average:%d\n",pass,passed_below_avg);

     return 0;
}
