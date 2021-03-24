#include <stdio.h>
#include <math.h>
void swapM (int *x,int *y) {
    int r;
    r=*x;
    *x=*y;
    *y=r;
}



void swap (int v[], int i, int j){

   int z;

   z = v[i];

   v[i] = v[j];

   v[j] = z;

}
    //...


void inverteArray (int v[], int N){
    int r=N-1;
    for (int i=0;i<N/2;i++) {
        swapM (v+i,v+r);
        r--;

    }
}

void dumpV (int v[], int N){
    int i;
    for (i=0; i<N; i++) printf ("%d ", v[i]);
    putchar ('\n');
}

int soma (int v[], int N){
    int r=0;
    for (int i=0;i<N;i++) {
        r += v[i];
    }
    return r;
}

int maximum (int v[], int N, int *m){
    if (N>0){
        *m= v[0];

    for (int i=1;i<N;i++) {
        if (v[i]>*m) *m = v[i];
    }
    return 1;
}
}

/*
void quadrados (int q[], int N){
     q[0] = 0;
        for(int i=1;i<N;i++) {
            q[i] = pow(q[i-1],2) + (2*i+ 1);

        }
    }
*/

void pascal (int v[], int N){
    //...
}

void desenhaTriangulpP (int N){
//...
}

int main()
{
    //trianguloJBB(10);
    printf ("Testes\n");
    // teste das funções de swap
    
    int a, b, v[10] = {10, 6, 2, 3, 5, 1, 5, 9, 8, 7};
    int x = 3, y = 5;
    printf ("x = %d y = %d\n", x, y);
    swapM (&x, &y);
    printf ("x = %d y = %d\n", x, y);
    
    printf ("%d %d\n", v[0], v[9]);
    swap (v,0,9);
    printf ("%d %d\n", v[0], v[9]);
    
    
    printf ("ao invertemos o array "); dumpV (v,10);
    inverteArray (v,10);
    printf ("obtemos               "); dumpV (v,10);

    
    
    // teste das funções maximum, soma e quadrados
    
    x = maximum (v,10, &y);
    printf ("O maior elemento de "); dumpV (v,10);
    printf ("é %d\n", y);
    
    /*
    printf ("Os 10 primeiros quadrados: "); 
    quadrados (v,10); 
    dumpV (v,10);
    */
    
    x = soma (v,10);
    printf ("A soma dos elementos de "); dumpV (v,10);
    printf ("é %d\n", x);
    
    
    // teste da função de cálculo do triangulo de Pascal
    /*
    printf ("A linha 5 do triângulo de Pascal é ");
    pascal (v,5); dumpV (v,6);
    */
    /*
    printf ("As linhas 0 a 10 do triângulo de Pascal\n\n");
    desenhaTriangulpP (10);
    */
    printf ("\nFim dos testes\n");

    return 0;
}
