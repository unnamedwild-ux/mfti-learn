#include <stdio.h>

int xor (int a, int b) {
    return !a || b;
}

int eq (int a, int b) {
    return (a && b) || (!a && !b);
}

int main (void)
{
    printf("A | B | A -> B\n");
    printf("%d | %d | %d\n", 0, 0, xor(0,0));
    printf("%d | %d | %d\n", 0, 1, xor(0,1));
    printf("%d | %d | %d\n", 1, 0, xor(1,0));
    printf("%d | %d | %d\n", 1, 1, xor(1,1));

    printf("\n\n");

    printf("A | B | A <-> B\n");
    printf("%d | %d | %d\n", 0, 0, eq(0,0));
    printf("%d | %d | %d\n", 0, 1, eq(0,1));
    printf("%d | %d | %d\n", 1, 0, eq(1,0));
    printf("%d | %d | %d\n", 1, 1, eq(1,1));
    return 0;
}