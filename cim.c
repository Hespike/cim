#include <stdio.h>

int main(){
    int a = 5;
    int b = 11;

    printf("Az 'a' valtozo erteke: %d, a cime: %p", a, &a);
    printf("Az 'b' valtozo erteke: %d, a cime: %p", b, &b);

    int *c = &a;  //az a címe kerül ide

     printf("Az 'c' valtozo erteke: %p, a cime: %p\n", c, &c);

     printf("*c: %d\n", *c);  //5, mert a értéke 5

    *c = b; //a = b
    c = &b;
    b = -1;

    printf("----\n");
    printf("Az a valtozo erteke: %d\n", a);
    printf("A 'c' valtozo erteke: %p\n", c);
    return 0;
}