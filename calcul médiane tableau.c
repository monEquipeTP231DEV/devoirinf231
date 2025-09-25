//Mediane tableau




#include <stdio.h>

#define MAX 100

int main() {
    int T[MAX];
    int n, i, j, temp;
    float mediane;

    // Lecture de la taille du tableau
    printf("veuillez entrer le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Ce programme ne tient pas en compte ce nombre d'éléments.\n");
        return 1;
    }

    // Lecture des éléments du tableau
    for (i = 0; i < n; i++) {
        printf("Entrer l'élément %d : ", i + 1);
        scanf("%d", &T[i]);
    }

    // Tri du tableau (tri à bulles s)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (T[j] > T[j + 1]) {
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }

    // Calcul de la médiane
    if (n % 2 == 1) {
        // Taille impaire
        mediane = T[n / 2];  // indice central
    } else {
        // Taille paire
        mediane = (T[n / 2 - 1] + T[n / 2]) / 2.0;
    }

    // Affichage du résultat
    printf("La médiane de ce tableau est : %.2f\n", mediane);

    return 0;
}