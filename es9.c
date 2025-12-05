/*Il programma legge tre lunghezze dei lati di un triangolo e dice se il triangolo è scaleno, isoscele o equilatero
(Nota bene, dice solo la tipologia più particolare, ovvero se è equilatero, dice solo che è equilatero 
e non anche che è isoscele)*/

#include <stdio.h>

int main() {
    float l1, l2, l3;
    printf("inserisci la lunghezza del primo lato: ");
    scanf("%f", &l1);
    printf("inserisci la lunghezza del secondo lato: ");
    scanf("%f", &l2);
    printf("inserisci la lunghezza del terzo lato: ");
    scanf("%f", &l3);

    
    if (l1 + l2 > l3 && l2 + l3 > l1 && l3 + l1 > l2) {
        printf("Le lunghezze %f, %f e %f possono formare un triangolo.", l1, l2, l3);

        if (l1 == l2 && l2 == l3) {
            printf("Si tratta di un triangolo equilatero.");
        } 
        
        else { 
            
            if (l1 == l2 || l2 == l3 || l3 == l1) {
                printf("Si tratta di un triangolo isoscele.");
            } 
            
            else {
                printf("Si tratta di un triangolo scaleno.");
            }
        }
    
    } else {
        printf("Le lunghezze %f, %f e %f non possono formare un triangolo.", l1, l2, l3);
    }    

    
    return 0; 
}