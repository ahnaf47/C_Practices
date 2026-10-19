#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
    int id;
    char name;
    struct student *next;
};
int main(){

    struct student *s1,*s2,*s3,*start;

    s1 = (struct student*)malloc(sizeof(struct student));
    s2 = (struct student*)malloc(sizeof(struct student));
    s3 = (struct student*)malloc(sizeof(struct student));

    start = s1;

    s1->id = 10;
    s1->name = 'A';
    s1->next = s2;
    s2->id = 20;
    s2->name = 'B';
    s2->next = s3;
    s3->id = 30;
    s3->name = 'C';
    s3->next = NULL;

    int t;
    printf("Enter the ID you are searching:\n");
    scanf("%d",&t);

    struct student *i = start;
    while(i != NULL){
        if(i->id == t){
            printf("Found\n");
            return 0;
        }
        i = i->next;
    }
    printf("Not Found\n");

    return 0;
}

