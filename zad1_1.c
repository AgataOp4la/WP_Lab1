#include <stdio.h>
#include <stdbool.h>

int main() {
    int rok_urodzenia;
    float wzrost;
    

    printf("Podaj swoj rok urodzenia: ");
    scanf("%d", &rok_urodzenia);
   
    printf("Podaj swoj wzrost: ");
    scanf(" %3f", &wzrost);
    
    printf("Jestem urodzony w %d roku, mam %3f wzrostu, mam prawo jazdy", rok_urodzenia, wzrost);

    return 0;
}
