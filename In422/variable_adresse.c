#include <stdio.h>

int main() {
    int nombre;

    printf("Entre un nombre : ");
    scanf("%d", &nombre);

    // %d affiche la valeur, %p affiche l'adresse mémoire
    printf("Valeur : %d\n", nombre);
    printf("Adresse memoire : %p\n", (void*)&nombre);
    
    return 0;
}
