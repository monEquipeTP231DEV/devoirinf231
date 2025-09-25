// addition matrice 


#include <stdio.h>

int main() {
    int n, m, x, y;
    
    // Lire les dimensions des deux matrices
    printf("Veuillez entrer le nombre de lignes et de colonnes de la première matrice : ");
    scanf("%d %d", &n, &m);
    
    printf("Veuillez entrer le nombre de lignes et de colonnes de la deuxième matrice : ");
    scanf("%d %d", &x, &y);
    
    // Vérifier si l'addition est possible
    if (n != x || m != y) {
        printf("L'addition de ces deux matrices est impossible (dimensions incompatibles).\n");
        return 1;
    }

    // Déclarer les matrices
    int M[n][m];
    int N[x][y];
    int A[n][m];

    // Saisie de la première matrice
    printf("Entrez les éléments de la première matrice :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    // Saisie de la deuxième matrice
    printf("Entrez les éléments de la deuxième matrice :\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("N[%d][%d] = ", i, j);
            scanf("%d", &N[i][j]);
        }
    }

    // Addition des matrices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = M[i][j] + N[i][j];
        }
    }

    // Affichage du résultat
    printf("Résultat de l'addition des matrices :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}