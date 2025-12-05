/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica;
una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante.*/

#include <stdio.h>

int main(){
    float num_1, num_2, num_3, d1, d2;
    printf("inserisci un numero:");
    scanf("%f", &num_1);
    printf("inserisci un numero:");
    scanf("%f", &num_2);
    printf("inserisci un numero:");
    scanf("%f", &num_3);

    d1 = num_2 - num_1;
    d2 = num_3 - num_2;

    if(d1 == d2){
    printf("i numeri %f, %f e %f sono considerati in progressione aritmetica, num_1, num_2, num_3");

    } else {
    printf("i numeri %f, %f e %f non sono in progressione aritmetica, num_1, num_2, num_3");

    return 0;
}