#include<stdio.h>
#include<string.h>

int main() {
    char str[100];


    printf("Enter a string:");
    scanf("%s",str);

    int left=0;
    int right=strlen(str)-1;

    int pallindrome=1;

while(left<right) {
    if(str[left]!=str[right]) {
        pallindrome=0;
        break;
    }
    left++;
    right--;

}
if(pallindrome==1) {
    printf("YES \n");
    }
    else {
        printf("NO \n");
    }
}
