#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the number of column:");
    scanf("%d",&c);
    printf("Enter all the element:");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);

        }
    }
    
    int brr[c][r];
    //printf("\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j] = arr[j][i];
        }
       //printf("\n");
    }
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
     printf("%d ",brr[i][j]);

    }
    printf("\n");
     }

}