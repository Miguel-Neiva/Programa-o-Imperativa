#include <stdio.h>

float multInt1 (int n, float m) {
    float r;
    for (r=0;m>0;m--) {
        r = r+n;
    }
    return r;
}

float multInt2 (int n, float m) {
    float r;
    for (r=0;n>0;n) {
        if(n%2==1){
        r=r+m;
        m=m*2;
        n/=2;
    }
    else {
        m=m*2;
        n/=2;
    }

}
return r ;
}

int mdc (int n , int m) {
    int x;
    while (n!=m) {
        if (n>m) n=n-m;
        if(n>m)  m=m-n;
        x=n;
        }
        return x;
        
    }


int main () {
  int a,d,e;
  int x;
  float b,c;
  printf("Qual a função que pretende?\nPrima 1 para multiplicação\nPrima 2 para multiplicação2\nPrima 3 para mdc\n");
  scanf("%d",&x);
  switch (x)
  {
 case 1 : 
 printf ("Introduza dois numeros a multiplicar.\n");
    scanf("%d", &a);
    scanf("%f", &b);
    c= multInt1 (a,b);
    printf("o resultado da multiplicação é %f\n",c);
    break;   

  case 2 : 
 printf ("Introduza dois numeros a multiplicar.\n");
    scanf("%d", &a);
    scanf("%f", &b);
    c= multInt2 (a,b);
    printf("o resultado da multiplicação é %f\n",c);
    break;   
    case 3 : 
 printf ("Introduza dois numeros para o mdc .\n");
    scanf("%d", &a);
    scanf("%d", &e);
    d= mdc (a,e);
    printf("o resultado do mdc é %d\n",d);
    break;   
}
}