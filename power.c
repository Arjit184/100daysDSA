/*
Enter the base(a):2
Enter the exponenet(b):5
2^5=32*/

#include<stdio.h>

int power(int a,int b) {
    if(b==0) {
        return 1;
    }
    else{
        return a*power(a,b-1);

    }
    }
int main() {
    int a,b;

    printf("Enter the base(a):");
    scanf("%d",&a);

    printf("Enter the exponenet(b):");
    scanf("%d",&b);


    printf("%d^%d=%d",a,b,power(a,b));
    return 0;
}