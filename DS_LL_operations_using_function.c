#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    int id;
    char name;
    struct student *next;
};

struct student *start = NULL;

void traverse()
{
    printf("Traverse Function Called\n");
    struct student *i = start;
    while(i != NULL){
        printf("ID: %d\nName: %c\n", i->id, i->name);
        i = i->next;
    }
}

struct student *createnode()
{
    printf("CreateNode Function Called\n");
    int a;
    char b;

    printf("Enter your ID: ");
    scanf("%d",&a);
    printf("Enter your Name: ");
    scanf(" %c",&b);
    struct student *newnode;

    newnode = (struct student*)malloc(sizeof(struct student));

    newnode->id = a;
    newnode->name = b;
    newnode->next = NULL;

    return newnode;
}
void insert_last()
{
    printf("Insert_Last Function Called\n");
    struct student *newnode = createnode();

    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct student *i = start;
        while(i->next != NULL)
        {
              i = i->next;
        }
        i->next = newnode;
    }
}

void insert_first()
{
    printf("Insert_First Function Called\n");
    struct student *newnode = createnode();

    newnode->next = start;
    start = newnode;
}

void insert_any()
{
    printf("Insert_Any Function Called\n");
    struct student *newnode = createnode();

    int search;
    printf("After which you want to insert? ");
    scanf("%d",&search);

    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct student *i = start;
        while(i != NULL)
        {
            if(i->id == search)
            {
                newnode->next = i->next;
                i->next = newnode;
            }
            i = i->next;
        }
    }
}
void delete_first()
{
    if(start == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        start = start->next;
    }
}

void delete_last()
{
    if(start == NULL)
    {
        printf("Underflow\n");
    }
    else if(start->next == NULL)
    {
        start = NULL;
    }
    else
    {
        struct student *i = start;
        while(i->next->next != NULL)
        {
            i = i->next;
        }
        i->next = NULL;
    }
}

void delete_any()
{
    int search;
    printf("Which ID You want to delete? ");
    scanf("%d",&search);

    if(start == NULL)
    {
        printf("Underflow\n");
    }
    else if(start->id == search)
    {
        start = start->next;
    }
    else
    {
        struct student *i = start;

        while(i != NULL)
        {
            if(i->next->id == search)
            {
                i->next = i->next->next;
                break;
            }
            i = i->next;
        }
    }
}
int main()
{
    insert_last();
    insert_last();
    insert_last();
    traverse();
    delete_any();
    traverse();

    return 0;
}
