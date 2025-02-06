#include<stdio.h>

int main(){
    int n;
    printf("enter size of matrix:");
    scanf("%d",&n);
    printf("enter the elements of matrix:\n");
    int arr1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("first matrix:\n");
     for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",arr1[i][j]);
            }
            printf("\n");
     }
    int m;
    printf("enter the size of 2nd matrix:");
    scanf("%d",&m);
    
    printf("enter the elements of 2nd matrix\n");
    int arr2[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("second matrix:\n");
     for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",arr2[i][j]);
            }
            printf("\n");
     }
    int ans[n][n];
    if(n!=m){
        printf("ADDITION CANNOT BE PERFORMED!!");
        return 0;
    }

    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=arr1[i][j]+arr2[i][j];
            }
        }

        printf("matrix after addition:\n");
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }

    }
    return 0;

}