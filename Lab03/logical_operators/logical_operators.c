#include <stdio.h>
int main() {
    int a;
    int b;
    printf("Enter your first number for logical operator");
    scanf("%d",&a);
    printf("Enter your second number for logical operator");
    scanf("%d",&b);
    printf("Output of '&&' operator is %d\n ",a&&b);
    printf("Output of '|' operator is %d\n ",a|b);
    printf("Output of '!' operator is %d ",!b);
    return 0;
}
