#include<stdio.h>

// Multiplication matrice





int main() {
    int n, m, x, y;

    // Lire les dimensions
    printf("Veuillez entrer le nombre de lignes et de colonnes de la première matrice : ");
    scanf("%d %d", &n, &m);

    printf("Veuillez entrer le nombre de lignes et de colonnes de la deuxième matrice : ");
    scanf("%d %d", &x, &y);

    // Vérifier si la multiplication est possible
    if (m != x) {
        printf("La multiplication de ces deux matrices est impossible (colonnes de M ≠ lignes de N).\n");
        return 1;
    }

    // Déclaration des matrices
    int M[n][m];
    int N[x][y];
    int P[n][y];  // Résultat aura n lignes et y colonnes

    // Saisie de la matrice M
    printf("Entrez les éléments de la première matrice M (%d x %d) :\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    // Saisie de la matrice N
    printf("Entrez les éléments de la deuxième matrice N (%d x %d) :\n", x, y);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("N[%d][%d] = ", i, j);
            scanf("%d", &N[i][j]);
        }
    }

    // Initialiser la matrice produit à zéro
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < y; j++) {
            P[i][j] = 0;
        }
    }

    // Calcul du produit matriciel
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < m; k++) {
                P[i][j] += M[i][k] * N[k][j];
            }
        }
    }

    // Affichage du résultat
    printf("Résultat de la multiplication :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", P[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}