#include<stdio.h>
#include<locale.h>
#include<conio.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int c, chave, temp, i, j, a[6], dab[6], b[6];
    a[1] = -3;
    a[2] = 7;
    a[3] = 4;
    a[4] = 9;
    a[5] = 12;

    b[1] = -9;
    b[2] = 5;
    b[3] = -2;
    b[4] = -3;
    b[5] = 12;

    for(i = 1; i<= 5; i++)
        printf("\n %d", a[i]);
        printf("\n");

    for(i = 1; i<= 5; i++)
        printf("\n %d", b[i]);
        c = 0;

    for(i = 1; i<= 5; i++){
        chave = 1;
        for(j=1; j<= 5; j++)
            if(a[i] == b[j]){
                chave = 0;
                j = 10;
            }if (chave == 1){
                c = c + 1;
                dab[c] = a[i];
                chave = 1;
            }
    }
    printf("\n");
    for(i = 1; i <= c; i ++)
        printf("\n %d", dab[i]);
    getch(); 
}