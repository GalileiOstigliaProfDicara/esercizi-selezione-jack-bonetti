/*L’utente inserisce la propria età e il programma 
dice se è maggiorenne (ovvero con età maggiore uguale a 18 anni)*/

#include <stdio.h>

int main(){
    int eta_utente;
    printf("inserisci la tua età:");
    scanf("%d", eta_utente);
    if(eta_utente >= 18) {
        printf("sei maggiorenne!");
    } else {
        printf("sei ancora minorenne!");
    }

    return 0;
}