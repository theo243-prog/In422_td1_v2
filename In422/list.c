#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    // 1. Création d'un tableau dynamique (l'équivalent d'une ArrayList)
    int *liste = malloc(n * sizeof(int));

    // Remplissage
    liste[0] = 1; liste[1] = 2; liste[2] = 3; liste[3] = 4; liste[4] = 5;

    // 2. Recherche d'une valeur
    int cible;
    printf("valeur recherchée : ");
    scanf("%d", &cible);

    int index_trouve = -1; // -1 signifie "non trouvé"

    for (int i = 0; i < n; i++) {
        if (liste[i] == cible) {
            index_trouve = i;
            break; // On arrête la recherche dès qu'on trouve
        }
    }

    // Résultat
    if (index_trouve != -1)
        printf("Valeur %d trouvee a l'index %d\n", cible, index_trouve);
    else
        printf("Valeur non trouvee.\n");

    // 3. Libération de la mémoire (indispensable !)
    free(liste);
    return 0;
}
