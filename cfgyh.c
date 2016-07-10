#include <stdio.h>
#include<conio.h>

void towerofhanoi(int num,char from,char to,char aux)
{
    if(num==1)
    {
        printf("\nMoving disc 1 from peg %c to peg %c",from,to);
        return;
    }
    towerofhanoi(num-1,frompeg,auxpeg,topeg);
    printf("\nMoving disc %d from peg %c to peg %c",num,from,to);
    towerofhanoi(num-1,to,from,aux);
}

int main(){
    int num;
    printf("enter the number of disk :  ")
    scanf("%d",&num);
    towerofhanoi(num,'A','C','B');
    return 0;
}
