#include <stdio.h>
int main() {
    int a;
    int b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter another number");
    scanf("%d",&b);
    int c = a*b;
    printf("The product of the two numbers is %d",c);
    return 0;
}
