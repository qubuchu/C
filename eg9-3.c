#include<stdio.h>

struct student 
{
    int num;
    char name[10];
    int math,eignish,computer;
    double average;
};

int f(struct student *p,int n,int num,int cou,int sco)
{
    int i,flag=0;
    for(i=0;i<n;i++,p++) 
        if(p->num==num)
        break;
    if(i<n) 
        switch(cou) {
            case 1:p->math=sco;break;
            case 2:p->eignish=sco;break;
            case 3:p->computer=sco;break;
            default:return -1;
        }
    else
    return -1;
    p->average=(p->math+p->eignish+p->computer)/3.0;
    return flag;
}
int main() 
{
    int i, n,cou,sco,num;
    struct student students[50];
    printf("enter class`number:");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("NO.%d输出学号:",i+1);
        scanf("%d",&students[i].num);
        printf("NO.%d输入姓名:",i+1);
        scanf("%s",&students[i].name);
        printf("NO.%d输入数学成绩，英语成绩，计算机成绩：",i+1);
        scanf("%d%d%d",&students[i].math,&students[i].eignish,&students[i].computer);
        students[i].average=(students[i].math+students[i].eignish+students[i].computer)/3.0;
    }
    printf("输入修改学生学号:");
    scanf("%d",&num);
    printf("选择修改科目\n");
    printf("math:1\n");
    printf("eignish:2\n");
    printf("computer:3\n");   
    scanf("%d",&cou);
    printf("输入修改分数:");
    scanf("%d",&sco);
    f(students,n,num,cou,sco);
    if(f(students,n,num,cou,sco)==0)
    for(i=0;i<n;i++)
    {
        printf("%d %s %d %d %d %.2f\n",students[i].num,students[i].name,students[i].math,students[i].eignish,students[i].computer,students[i].average);
    }
    else
    {
        printf("error");
    }
}