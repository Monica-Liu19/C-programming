/*
=============================================
 Author:Luoyu Liu
 Student id:2430033032
 Description:lab9
 Date:2025/4/24
=============================================
*/
#include <stdbool.h>
#include <stdio.h>

#include <math.h>
int recursive_f(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return n * n + recursive_f(n - 1);
}
void task31(void)
{
    printf("\n Output of task31:\n");
    printf("Input a positive integer(>=1)");
    int n;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Warning!A positive integer no smaller than 1 should be input.\n");
        return;
    }
    int result = recursive_f(n);
    printf("Sum is %d when n is %d.\n", result, n);
}

int recursive_count(int n, int m){
    if(n<m){
        return 0;
    }
    if (n%m!=0){
        return 0;
    }
    return 1+recursive_count(n/m,m);
}

void task32(void) {
     printf("\n Output of task32:\n");
     printf("Please input n and m :");
     int n,m;
     scanf("%d %d",&n,&m);
     if(m <= 1 ){
        printf("Warning! value of m is invalid!");
     }if(n <= 1 ){
        printf("Warning! value of n is invalid!");
     }
     int result=recursive_count(n,m);
     printf("There are %d %d(s) in %d",result,m,n);
}
int PowerRec_f(int m,int n){
    if (n==0){
        return 1;
    }return m*PowerRec_f(m,(n-1));
}
void task33(void) { printf("\n Output of task33:\n");
printf("Please input m and n :");
int m,n;
scanf("%d %d",&m,&n);
if(m<0){
    printf("Warning! value of m is invalid!");
}if(n<0){
    printf("Warning! value of n is invalid!");
}
int result1=PowerRec_f(m, n);
printf("Product is %d using recursion.\n",result1);
int i;
int result2=1;
for(i=n;i>0;i--){
    result2*=m;
}printf("Product is %d using loop.\n",result2);
}

int SUM(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + SUM(n - 1);
}

void task34(void)
{
    printf("\n Output of task34:\n");
    printf("Please input maxNum :");
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Warning! Input of maxNum is invalid!");
    }
    int sum = SUM(n);
    printf("Sum is %d\n", sum);
}

int main()
{

   task31();
    task32();
    task33();
    task34();

    return 0;
}