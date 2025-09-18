#include<stdio.h>
#include<conio.h>

int main(){

    int n;
    int i, a[n], b[n], U[2*n];
    a[1] = 2;
    a[2] = 7;
    a[3] = -12;
    a[4] = 6;
    a[5] = 5;

    b[1] = 7;
    b[2] = 9;
    b[3] = 3;
    b[4] = 2;
    b[5] = -12;

    for(i = 1; i < n; i++){
        U[i] = a[i];
        U[i+n]=b[i];
    }

     for(i = 1; i <= n; i ++)
        printf("\n %d", U[i]);
    getch(); 
}