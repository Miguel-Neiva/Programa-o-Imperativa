#include <stdio.h>

void quadrado1 (int n)
{

    for(int x=0; x<n ; x++) {
        for (int y= 0 ; y<n ; y++) {
            putchar ('#');
        }
        putchar ('\n');
        }
        }

void quadrado2 (int n) {
    int x;
    int y;
    int z=0;
    for (y=0;y<n;y++){
        for(x=0;x<n;x++) { if (z%2==0) putchar ('#');
         else putchar ('_');
         z++;
          }
         putchar ('\n');
    }
}

void triangulo (int n) {
    int x;
    
    for (int z=1;z < n*2  ; z++) { 

        for (x=1;x<=n*2-z;x++) {
            if (x<=z) putchar ('#');
        }
    putchar ('\n');
    }
    }




int main ()
{
    quadrado1(5);
    putchar ('\n');
 quadrado2(5);
 putchar ('\n');
 triangulo (5);

 return 0 ; 
}