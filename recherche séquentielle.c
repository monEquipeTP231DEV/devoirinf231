// Recherche séquentielle 



#include <stdio.h>

#define MAX_SIZE 100  

int main() {
    int T[MAX_SIZE];
    int i, n, x;
    int found = 0; // booléen pour savoir si l'élément a été trouvé

    // Demander le nombre d'éléments
    printf("Entrer le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("Ce programme ne considère pas ce nombre d'éléments (max %d).\n", MAX_SIZE);
        return 1;
    }

    // Remplir le tableau
    for (i = 0; i < n; i++) {
        printf("Entrer l'élément %d : ", i);
        scanf("%d", &T[i]);
    }

    // Demander l'élément à rechercher
    printf("Veuillez entrer l'élément recherché : ");
    scanf("%d", &x);

    // Recherche séquentielle
    for (i = 0; i < n; i++) {
        if (T[i] == x) {
            printf("Cet élément a été trouvé à l'indice %d.\n", i);
            found = 1;
            break; //pour sortir de la boucle dès qu'on le trouve 
        }
    }

    if (!found) {// l'opérateur ! Pour la négation ( comme pour dire non trouvé//
        printf("Cet élément n'est pas dans ce tableau.\n");
    }

    return 0;
}