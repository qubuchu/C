#include<stdio.h>
void month_day(int year,int yearday,int *pmonth,int *pday);
int main()
{
    int day,month,year,yearday;
    printf("input year and yearday:");
    scanf("%d%d",&year,&yearday);
    month_day(year,yearday,&month,&day);
    printf("%d-%d-%d\n",year,month,day);
    return 0;
}
void month_day(int year,int yearday,int *pmonth,int *pday)
{
    int m;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||(year%400==0))
    a[2]=29;
    m=0;
    while(yearday>a[m]) {
        yearday=yearday-a[m];
        m++;
    }
    *pmonth=m;
    *pday=yearday;
}