#include <stdio.h>
#include <stddef.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

struct S {
    char c;
    double d;
};

int main(void) {
    printf("the first element is at offset %zu\n", offsetof(struct S, c));
    printf("the double is at offset %zu\n", offsetof(struct S, d));

    _getch();
    return 0;
}