// Q135: Assign explicit values starting from 10 and print them.


#include <stdio.h>

enum Numbers {
    A = 10,
    B = 11,
    C = 12,
    D = 13,
    E = 14
};

int main() {
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);

    return 0;
}