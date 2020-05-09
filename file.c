#include <stdio.h>
void main ( )
{
    int N, i, pass, x;
    float PI;
    printf("Enter Number of terms: ");
    scanf("%d", &N);
    PI=0;
    pass=1;
    for(i=1, x=1; i<=N; i++, x+=2){
        if(pass){
            PI=PI+4.0/x;
            pass=0;
        }
        else{
            PI=PI-4.0/x;
            pass=1;
        }
        printf("\nFor %d terms PI= %f", i, PI);
    }
}
