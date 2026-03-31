
#include <stdio.h>
int main() {

    int a[6];

    printf("&a[4] = %p\n", &a[4]);
    printf("&a[5] = %p\n", &a[5]);

    if(&a[5] > &a[4]){
        printf("a[5] está en una direccion mayor\n");
    }

    return 0;
}
