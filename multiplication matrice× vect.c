// Multiplication matrice*vecteur 





#include <stdio.h>

#define MAX 100

int main() {
    int M[MAX][MAX];  // Matrice M[n][m]
    int T[MAX];       // Vecteur T[m]
    int P[MAX];       // Résultat P[n]
    int n, m, dim;
    int i, j;

    // Lecture des dimensions de la matrice
    printf("Veuillez entrer le nombre de lignes (n) et de colonnes (m) de la matrice : ");
    scanf("%d %d", &n, &m);

    // Lecture de la dimension du vecteur
    printf("Quelle est la dimension du vecteur ? ");
    scanf("%d", &dim);

    // Vérification 
    if (dim != m) {
        printf("Cette multiplication est impossible. (La dimension du vecteur doit être égale au nombre de colonnes de la matrice.)\n");
        return 1;
    }

    // Saisie des éléments de la matrice
    printf("Entrez les éléments de la matrice M (%d lignes × %d colonnes) :\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    // Saisie des coordonnées du vecteur
    printf("Entrez les coordonnées du vecteur T (%d éléments) :\n", dim);
    for (j = 0; j < dim; j++) {
        printf("T[%d] = ", j);
        scanf("%d", &T[j]);
    }

    // Multiplication matrice par vecteur
    for (i = 0; i < n; i++) {
        P[i] = 0; // Initialisation de la somme
        for (j = 0; j < m; j++) {
            P[i] += M[i][j] * T[j];
        }
    }

    // Affichage du résultat
    printf("Résultat du produit matrice × vecteur :\n");
    for (i = 0; i < n; i++) {
        printf("P[%d] = %d\n", i, P[i]);
    }

    return 0;
}