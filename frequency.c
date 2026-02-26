/*
Enter the number of elements:
5 
Enter the elements of matrix:
1 
2
2
3 
1
1:2     2:2     3:1*/

#include<stdio.h>

int main() {
    int n;
printf("Enter the number of elements:\n");
scanf("%d",&n);

int arr[n];

printf("Enter the elements of \n");
for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);

}

for(int i=0;i<n;i++) {
    int count=1;
    if(arr[i]==-1) 
    continue;


for(int j=i+1;j<n;j++) {
    if(arr[i]==arr[j]) {
        count++;
        arr[j]=-1;
    }
}
printf("%d:%d\t",arr[i],count);
}
return 0;
}