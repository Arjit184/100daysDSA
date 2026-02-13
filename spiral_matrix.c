/*
Enter the number of rows and columns:3 3
Enter the elements of the matrix:
1 2 3 
4 5 6
7 8 9
Spiral order of the matrix is:
1 2 3 6 9 8 7 4 5*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int m,n;

    printf("Enter the number of rows and columns:");
    scanf("%d %d",&m,&n);

    int A[m][n];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&A[i][j]);
        }
    }

    int top=0,bottom=m-1;
    int left=0,right=n-1;

    printf("Spiral order of the matrix is:\n");
    while(top<=bottom && left<=right) {
        for(int i=left;i<=right;i++) {
            printf("%d ",A[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++) {
            printf("%d ",A[i][right]);
        }
        right--;
        if(top<=bottom) {
            for(int i=right;i>=left;i--) {
                printf("%d ",A[bottom][i]);
            }
            bottom--;
        }
        if(left<=right) {
            for(int i=bottom;i>=top;i--) {
                printf("%d ",A[i][left]);
            }
            left++;
        }
    }
   return 0; 
}