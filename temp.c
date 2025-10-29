#include <stdio.h>
#include <stdbool.h>

int main() {
    float temperatura;
    char znak;


    printf("Podaj wymagany symbol(C/F): ");
    scanf("%c", &znak);

    printf("Podaj wartosc temperatury: ");
    scanf("%2f", &temperatura);


    if(znak == 'C'){
        temperatura=(temperatura-32)/1.8;
        printf("Temperatura w Celcjuszach wynosi: %2f ", temperatura);}
    else if(znak == 'F'){
        temperatura=temperatura*1.8 +32;
        printf("Temperatura w Fahrenheita wynosi: %2f ", temperatura);} 
    else {
        printf("Zly symbol");
    }
   
    return 0;
}