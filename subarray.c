/*
Enter the elements:
1
-1
2
-2
3
-3
6*/

#include<stdio.h>

int main() {
    int n;

    printf("Enter the size of the array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements:\n");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++) {
        int sum=0;
    
    for(int j=i;j<n;j++) {
        sum+=arr[j];
        if(sum==0){
        count++;

    }
}

}

printf("%d\n",count);
return 0;
}