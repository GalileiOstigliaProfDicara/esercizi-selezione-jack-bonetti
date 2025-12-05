/*Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo
(perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)*/

#include <stdio.h>

int main(){
    float l1, l2, l3;
    printf("inserisci la lunghezza del primo lato:");
    scanf("%f", &l1);
    printf("inserisci la lunghezza del secondo lato:");
    scanf("%f", &l2);
    printf("inserisci la lunghezza del terzo lato:");
    scanf("%f", &l3);

    if(l1 + l2 > l3 && l2 + l3 > l1 && l3 + l1 > l2){
    printf("le lunghezze %f, %f e %f possono formare un triangolo, l1, l2, l3");

    } else{
    printf("le lunghezze %f, %f e %f non possono formare un triangolo, l1, l2, l3");
    }
    return 0;
}