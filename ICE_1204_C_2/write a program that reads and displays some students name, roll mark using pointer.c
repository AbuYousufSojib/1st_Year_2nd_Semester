#include <stdio.h>
#include <stdlib.h>
struct std
{
   char name[30];
   int roll, mark;
};
void main()
{
    struct std *p;
    p = (struct std *)malloc(sizeof(struct std));
    printf("Enter a name:  ");
    gets(p->name);
    printf("Enter roll:  ");
    scanf("%d",&p->roll);
    printf("Enter mark:  ");
    scanf("%d",&p->mark);
    printf("Name, Roll and Mark of students is: \n");
    printf("Name = %s\nRoll = %d\nMark = %d",p->name,p->roll,p->mark);
    getch();
}
