#include <stdio.h>
int dodaj(int num1, int num2);
int main() {
    printf("Hello, World!\n");
    printf("Hello D!");
    printf("%d", dodaj(127,-843));
    return 0;
}
int dodaj(int num1, int num2)
{
    return num1+num2;
}