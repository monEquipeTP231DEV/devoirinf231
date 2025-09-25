//Vérification  tableau trié 




#include <stdio.h>

#define MAX 100

int main() {
    int T[MAX];
    int i, n;
    int croissant = 1;
    int decroissant = 1;

    // Saisie du nombre d'éléments
    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Taille invalide.\n");
        return 1;
    }

    // Saisie des éléments du tableau
    printf("Entrez les %d éléments du tableau :\n", n);
    for (i = 0; i < n; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    // Vérification 
    for (i = 0; i < n - 1; i++) {
        if (T[i] < T[i + 1]) {
            decroissant = 0; // Pas décroissant
        } else if (T[i] > T[i + 1]) {
            croissant = 0; // Pas croissant
        }
    }

    //Affichage du résultat 
    if (croissant ==1|| decroissant==1) {
        printf("Ce tableau est trié (ordre croissant ou décroissant).\n");
    } else {
        printf("Ce tableau n'est pas trié.\n");
    }

    return 0;
}