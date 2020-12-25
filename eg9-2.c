#include<stdio.h>

struct student {
    int num;
    char name[10];
    int math,eignish,computer;
    double average;
};

int main() 
{
    int i,n,j;
    struct student students[50],t;
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
    for(i=1;i<n;i++) {
        for(j=0;j<n-1;j++) {
            if(students[j].average <students[j+1].average) {
                t=students[j];
                students[j]=students[j+1];
                students[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++) {
        printf("%d %s %d %d %d %.2f\n",students[i].num,students[i].name,students[i].math,students[i].eignish,students[i].computer,students[i].average);
    }
}