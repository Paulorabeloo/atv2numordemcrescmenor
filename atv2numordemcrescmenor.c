#include <stdio.h>
int main(){
    int a, b, temp;
    printf("Digite 2 numeros para saber a ordem crescente.\n");
    scanf("%i%i", &a, &b);
    if (a > b){
        // trocar o valor de a por b
        temp = a;
        a = b;
        b = temp;
    }
    printf("%i %i", a ,b);
return 0;
}
