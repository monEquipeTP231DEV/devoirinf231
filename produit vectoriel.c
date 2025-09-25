//Produit vectoriel




#include <stdio.h>

int main() {
    int T[3], N[3], P[3];
    int dim, i;

    // Saisie de la dimension
    printf("Entrez la dimension des deux vecteurs : ");
    scanf("%d", &dim);

    if (dim != 3) {
        printf("Le produit vectoriel n'est défini que pour des vecteurs de dimension 3.\n");
        return 1;
    }

    // Saisie des coordonnées du premier vecteur
    printf("Veuillez entrer les coordonnées du 1er vecteur :\n");
    for (i = 0; i < 3; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    // Saisie des coordonnées du deuxième vecteur
    printf("Veuillez entrer les coordonnées du 2e vecteur :\n");
    for (i = 0; i < 3; i++) {
        printf("N[%d] = ", i);
        scanf("%d", &N[i]);
    }

    // Calcul produit vectoriel
    P[0] = T[1] * N[2] - T[2] * N[1];
    P[1] = T[2] * N[0] - T[0] * N[2];
    P[2] = T[0] * N[1] - T[1] * N[0];

    // Affichage du résultat
    printf("Le produit vectoriel T × N est :\n");
    for (i = 0; i < 3; i++) {
        printf("P[%d] = %d\n", i, P[i]);
    }

    return 0;
}