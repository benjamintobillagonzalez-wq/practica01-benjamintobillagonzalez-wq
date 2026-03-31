#include <stdio.h>

int main() {

    int a[6];

    printf("sizeof(int) = %lu\n", sizeof(int));

    printf("&a[0] = %p\n", &a[0]);
    printf("&a[3] = %p\n", &a[3]);
    printf("&a[5] = %p\n", &a[5]);

    return 0;
}
