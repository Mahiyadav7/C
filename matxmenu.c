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
     printf("press 1 for addition of two matrix\n");
     printf("press 2 for subtraction of two matrix\n");
     printf("press 3 for transpose of a matrix\n");
     printf("press4 to exit\n");
     printf("enter your choice\n");
     int ch;
     scanf("%d",&ch);
     switch (ch)
     {
     case 1:
     {
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
    }

        printf("matrix after addition:\n");
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }

     }
        break;
        case 2:
        {
        int ans[n][n];
    if(n!=m){
        printf("SUBTRACTION CANNOT BE PERFORMED!!");
        return 0;
    }

    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=arr1[i][j]-arr2[i][j];
            }
        }
    }

        printf("matrix after subtraction:\n");
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }

     }
     break;
     case 3:
     {
       int r;
    printf("enter no of rows matrix:");
    scanf("%d",&r);
    int c;
    printf("enter no of column matrix:");
    scanf("%d",&c);
    
    printf("enter the elements of matrix\n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("original matrix:\n");
     for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
     }
     
 //transpose of matrix

    printf("transposed matrix:\n");
     for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                printf("%d ",arr[j][i]);
            }
            printf("\n");
     }
     }
     break;
     case 4:
     return 0;
     break;
     
     default:
     printf("INVALID CHOICE!!");
        break;
     }
        return 0;
     }
