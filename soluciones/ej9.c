#include <stdio.h>

int main() {

    int a[5];

    printf("&a[-1] = %p\n", &a[-1]);
    printf("&a[5]  = %p\n", &a[5]);

    return 0;
}
//Compila porque C solo calcula direcciones, no valida límites.
//Es peligroso porque accede a memoria que no pertenece al arreglo, lo que puede alterar otras variables o causar errores impredecibles.
//El acceso fuera de rango es responsabilidad del programador.
