#include<stdio.h>
#include<string.h>

struct student {
    int id;
    char name[20];
    float cgpa;
};
typedef struct student student;

int main(){

    student s[2];

    s[0].id = 348;
    strcpy(s[0].name,"Nira");
    s[0].cgpa = 3.06;

    s[1].id = 352;
    strcpy(s[1].name,"Ahnaf");
    s[1].cgpa = 3.31;

    for(int i=0; i<2; i++){
        printf("Student-%d:\nID: %d\nName: %s\nCGPA: %.2f\n",i+1,s[i].id,s[i].name,s[i].cgpa);
    }

    return 0;

}
