 /*Enter the number of elements:5
Enter the elements:
1
2
4
5
6
Enter the element to be inserted3
Enter the position to insert the element:3
The array after insertion is:
1 2 3 4 5 6 */
 
 
 #include<stdio.h>


 int main() {
int n,element,pos;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements:\t");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be inserted");
    scanf("%d",&element);

    printf("Enter the position to insert the element:");
    scanf("%d",&pos);

    for(int i=n-1;i>=pos-1;i--) {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=element;
    n++;
    printf("The array after insertion is:\t");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
 }