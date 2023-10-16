
//weather station
#include<stdio.h>
void weatherstation( float temp[7]);
int main()
{
    float temp[7];
    int i;
    printf("hello there...\n");
    printf("welcome to weather station..\n");
    printf("Enter the details to get started:\nenter temmpertaure for the 7 previous days\n ");
    for(i=0;i<7;i++)
    {
        printf("Temperrture of %d:",i+1);
        scanf("%f",&temp[i]);
    }
    weatherstation(temp);
}
void weatherstation(float temp[7])
{
    float average,sum=0,hottest=temp[0],coldest=temp[0];
    int i,hoti=0,coldi=0;

    for(i=0;i<7;i++)
    {
        sum+=temp[i];
    }
    average=sum/7;
    for(i=0;i<7;i++)
    {
       if(temp[i]>hottest)
       {
        hottest=temp[i];
        hoti=i;
       } 
       if(temp[i]<coldest)
       {
        coldest=temp[i];
        coldi=i;
       }
    }
    printf("------weather station------\n");
    for(i=0;i<7;i++)
    {
        printf("%-2d-day,%-5.2f-temperature\n",i+1,temp[i]);
    }
    printf("Average Temperature: %.2f\n", average);
    printf("Hottest Day: Day %d - Temperature: %.2f\n", hoti + 1, temp[hoti]);
    printf("Coldest Day: Day %d - Temperature: %.2f\n", coldi + 1, temp[coldi]);
}