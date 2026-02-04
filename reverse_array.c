#include<stdio.h>

int main() {
    int n,i=0,j,temp;
    int arr[100];

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements:\t");

    for(int k=0;k<n;k++) {
        scanf("%d",&arr[k]);
    }

j=n-1;
while(i<j) {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;

}
printf("The reversed array is:\t");
for(int k=0;k<n;k++) {
    printf("%d\t",arr[k]);
}

return 0;
}