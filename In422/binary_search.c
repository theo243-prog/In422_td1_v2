#include <stdio.h>

// Fonction pour effectuer la recherche binaire
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Évite les débordements (overflow)

        // Si la cible est au milieu
        if (arr[mid] == target)
            return mid;

        // Si la cible est plus grande, ignorer la moitié gauche
        if (arr[mid] < target)
            left = mid + 1;
        // Sinon, ignorer la moitié droite
        else
            right = mid - 1;
    }
    return -1; // Non trouvé
}

int main() {
    int liste[] = {2, 5, 8, 12, 16, 23, 38, 56, 72};
    int n = sizeof(liste) / sizeof(liste[0]);
    int cible = 23;

    int resultat = binarySearch(liste, n, cible);

    if (resultat != -1)
        printf("Valeur %d trouvee a l'index %d\n", cible, resultat);
    else
        printf("Valeur non trouvee.\n");

    return 0;
}
