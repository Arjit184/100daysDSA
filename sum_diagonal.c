/*
Enter the rows and columns of matrix:
3 3
Enter the elemetns of the matrix:
1 2 3
4 5 6
7 8 9
Sum of diagonal elements is 15*/

#include<stdio.h>

int main() {
    int m,n,i,j,sum=0;

    printf("Enter the rows and columns of matrix:\n");
    scanf("%d %d",&m,&n);

    int A[m][n];
    
    printf("Enter the elemetns of the matrix:\n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&A[i][j]);

        }
    }

    if(m!=n)
    {
        printf("Not a square matrix");
        return 0;
    }

    for(int i=0;i<m;i++) {
        sum+=A[i][i];
    }
    printf("Sum of diagonal elements is %d",sum);

    return 0;
}
