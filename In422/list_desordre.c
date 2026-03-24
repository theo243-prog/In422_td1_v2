#include <stdio.h>

int main() {
    int liste[] = {191, 8, 56, 14, 73, 19, 51, 49, 83, 108, 72, 66, 38, 56, 72};
    int taille = sizeof(liste) / sizeof(liste[0]);

    for (int i =0; i < taille-1; i++){
	for (int j=0; j < taille-1; j++){
		if (liste[j]>liste[j+1]) {
			int a = liste[j+1];
			liste[j+1] = liste[j];
			liste[j] = a;
		}
	}
    }
    printf("liste triée :");
    for (int k=0; k<taille; k++){
	printf("-%d", liste[k]);
    }
    return 0;
}
