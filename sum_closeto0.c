/*
Enter the number of elements:5
Enter the elements:1  
60
-10
70
-80
1        -10*/

#include<stdio.h>
#include<stdlib.h>

int main() {
int n;

printf("Enter the number of elements:");
scanf("%d",&n);

int arr[n];

printf("Enter the elements:");
for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
}

int closest_sum=1000;

int a,b;

for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
        int sum=arr[i]+arr[j];
        if(abs(sum)<abs(closest_sum)) {
            closest_sum=sum;
            a=arr[i];
            b=arr[j];
        }
    }
}
printf("%d\t %d",a,b);
return 0;
}