// EXP: 2 WAP TO  TO SORT ARRAY ELEMENTS IN ASCENDING ORDER.

#include<stdio.h>

int main(){
    int a[5],i,j,temp;

    printf("enter the elemnets of an array \n");

    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("array in the ascending order is: \n");

    for(i=0;i<5;i++){
        printf("\t%d", a[i]);
    }
}