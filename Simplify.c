#include <stdio.h>

int try(int a, int b, int c) {
    return (!b || a) && (!a || !b) && (!a || c);
}

int try2(int a, int b, int c) {
    return !b && ((a && c) || (!a && !c) || c);
}

int main (void)
{
    // int milk=1,honey=1,bread=0;
    // milk && honey && (!bread || bread);


    printf("A | B | C | RES\n");
    printf("%d | %d | %d | %d\n", 0, 0, 0, try(0,0,0));
    printf("%d | %d | %d | %d\n", 0, 0, 1, try(0,0,1));
    printf("%d | %d | %d | %d\n", 0, 1, 0, try(0,1,0));
    printf("%d | %d | %d | %d\n", 0, 1, 1, try(0,1,1));
    printf("%d | %d | %d | %d\n", 1, 0, 0, try(1,0,0));
    printf("%d | %d | %d | %d\n", 1, 0, 1, try(1,0,1));
    printf("%d | %d | %d | %d\n", 1, 1, 0, try(1,1,0));
    printf("%d | %d | %d | %d\n", 1, 1, 1, try(1,1,1));

    printf("\n\n");
     // !B && (A <-> C || C)
    printf("A | B | C | RES\n");
    printf("%d | %d | %d | %d\n", 0, 0, 0, try2(0,0,0));
    printf("%d | %d | %d | %d\n", 0, 0, 1, try2(0,0,1));
    printf("%d | %d | %d | %d\n", 0, 1, 0, try2(0,1,0));
    printf("%d | %d | %d | %d\n", 0, 1, 1, try2(0,1,1));
    printf("%d | %d | %d | %d\n", 1, 0, 0, try2(1,0,0));
    printf("%d | %d | %d | %d\n", 1, 0, 1, try2(1,0,1));
    printf("%d | %d | %d | %d\n", 1, 1, 0, try2(1,1,0));
    printf("%d | %d | %d | %d\n", 1, 1, 1, try2(1,1,1));
    return 0;
}