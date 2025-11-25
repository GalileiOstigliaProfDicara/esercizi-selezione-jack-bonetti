/*Il programma legge due numeri e controlla se il primo è maggiore del secondo.*/

#include <stdio.h>

int main(){
    int num1, num2;
    printf("Inserisci due numeri interi");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2) {
        printf("Il primo numero %d è maggiore del secondo %d.\n", num1, num2);
    
    } else {
        printf("Il primo numero %d non è maggiore del secondo %d.\n", num1, num2);
    }

    return 0;
}