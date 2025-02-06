#include<stdio.h>

int main(){
    int n;
    printf("enter no of rows of 1st matrix:");
    scanf("%d",&n);
    int m;
    printf("enter no of column of 1st matrix:");
    scanf("%d",&m);

    printf("enter the elements of matrix:\n");
    int arr1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("first matrix:\n");
     for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%d ",arr1[i][j]);
            }
            printf("\n");
     }
    int r;
    printf("enter no of rows of 1st matrix:");
    scanf("%d",&r);
    int c;
    printf("enter no of column of 1st matrix:");
    scanf("%d",&c);
    
    printf("enter the elements of 2nd matrix\n");
    int arr2[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("second matrix:\n");
     for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf("%d ",arr2[i][j]);
            }
            printf("\n");
     }
    int ans[r][c];
    if(m!=r){
        printf("MULTIPLICATION CANNOT BE PERFORMED!!");
        return 0;
    }

    else{
        int mul[n][c];
        for(int i=0;i<n;i++){
            for(int j=0;j<c;j++){
                mul[i][j]=0;
                for(int k=0;k<c;k++){
               mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
            }
        }

        printf("matrix after multiplication:\n");
         for(int i=0;i<n;i++){
            for(int j=0;j<c;j++){
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }

    }
    return 0;

}