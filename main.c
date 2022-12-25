/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>

int swap(int*x,int*y,int*z)
{
    int *t;
    *t=*x;
    *x=*z;
    *z=*y;
    *y=*t;
}

int main()
{
    int a,b,c;
    printf("Enter your three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Your entered numbers are\n%d  %d  %d ",a,b,c);

    swap(&a,&b,&c);
    printf("\nafter circular swapping the numbers are\n%d  %d  %d",a,b,c);

    return 0;
}

