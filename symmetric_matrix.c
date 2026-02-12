#include<stdio.h>

int main() {
    int m,n;

    printf("Enter the number of rows and columns:");
    scanf("%d %d",&m,&n);

    printf("Enter the elements of the matrix:\n");

    int A[m][n];

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&A[i][j]);
        }
    }

        if(m!=n) {
            printf("The matrix is not square matrix,so it cannot be symmetric amtrix as well .\n");
            return 0;
        }

        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(A[i][j]!=A[j][i]) {
                    printf("The matrix is not symmetric matrix.\n");
                    return 0;
                }
                else {
                    continue;
                }
                
             }
        }
        printf("The matrix is symmetric matrix.\n");
        return 0;
}