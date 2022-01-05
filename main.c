#include <stdio.h>
int dodaj(int num1, int num2);
int odjac(int num1, int num2);
int main() {

    printf("%d", odjac(127,-843));
    return 0;
}
int dodaj(int num1, int num2)
{
    return num1+num2;
}
int odjac(int num1, int num2)
{
    return num1-num2;
}