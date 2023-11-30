// EXP:1 Write a  program to add matrix elements.

#include<stdio.h>

int main(){

    
    int i,j,a[3][3],b[3][3],c[3][3];

    printf("Enter the elements of matrix 1: ");

    for(i=1;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of matrix 2: ");

    for(i=1;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t", c[i][j]);
        }

        printf("\n");
    }


}