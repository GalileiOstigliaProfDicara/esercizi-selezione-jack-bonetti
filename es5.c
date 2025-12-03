/*L’utente inserisce una temperatura in Celsius e il calcolatore la converte
 in Fahrenheit ed in Kelvin. Se la temperatura inserita è minore dello zero assoluto (-273,15), 
 il calcolatore segnala un errore.
Si ricordi che:
Fahrenheit = (9/5) · Celsius + 32
Kelvin = Celsius + 273,15*/

#include <stdio.h>

int main(){
    float temp_celsius, temp_kelvin, temp_fahrenheit;
    printf("inserisci la temperatura in celsius:")
    scanf("%f", temp_celsius);
    
    if(temp_celsius < -273,15);
    printf("errore!"){
    } else {
    temp_kelvin = temp_celsius + 273,15;
    temp fahrenheit = (9/5) * trmp_celsius + 32;

    printf("la temperatura in kelvin è %f\n, temp_kelvin");
    printf("la temperatura in fahrenheit è %f\n, temp_fahrenheit");

    return 0;
}