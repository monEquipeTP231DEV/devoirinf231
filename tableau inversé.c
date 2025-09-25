//Affichage d'un tableau inversé 



#include <stdio.h>

#define MAX 100

int main() {
    int T[MAX], N[MAX];
    int i, n;

    // Lecture de la taille
    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("ce programme ne prend pas en compte les tableaux de cette taille.\n");
        return 1;
    }

    // Lecture des éléments du tableau T
    printf("veuillez entrez les éléments du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    // Inversion : copie de T dans N à l'envers
    for (i = 0; i < n; i++) {
        N[i] = T[n - 1 - i];
    }

    // Affichage du tableau inversé
    printf("Tableau inversé :\n");
    for (i = 0; i < n; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}