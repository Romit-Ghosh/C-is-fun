#include <stdio.h>
struct student
{
    char name[30];
    int age;
    int class;
    int roll;
} st;

void display(char *name, int *a, int *c, int *r)
{
    scanf("%s %d %d %d",name,a,c,r);
    printf("%s,%d,%d,%d\n", name, *a, *c, *r);
}

void main()
{
    struct student st;
    display(st.name,&st.age,&st.class,&st.roll);
    printf("%s,%d,%d,%d", st.name, st.age, st.class, st.roll);
}
