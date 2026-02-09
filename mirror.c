#include<stdio.h>
#include<string.h>

void mirror(char *str,int n) {
    int left=0;
    int right=n-1;
    char temp;

    while(left<right) {
        temp=str[left];
        str[left]=str[right];
        str[right]=temp;

        left++;
        right--;

    }
}
    int main() {
char str[100];

        printf("Enter a string:");
        scanf("%s",str);

        mirror(str,strlen(str));

        printf("Mirrored string: %s\n",str);
        return 0;
    }


