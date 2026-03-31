#include <stdio.h>

int main() {

    int a[3];
    int b[3];
    int c[3];

    for(int i = 0; i < 3; i++){
        printf("a[%d] = %p\n", i, &a[i]);
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        printf("b[%d] = %p\n", i, &b[i]);
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        printf("c[%d] = %p\n", i, &c[i]);
    }

    return 0;
}
