//Multiplication ( en ajoutant+1 uniquement) 



#include <stdio.h>

int main() {
    int a, b, produit = 0;

    // Saisie des deux entiers positifs
    printf("Veuillez entrer deux entiers positifs à multiplier : ");
    scanf("%d %d", &a, &b);

    // Vérification 
    if (a < 0 || b < 0) {
        printf("Erreur : les deux nombres doivent être positifs.\n");
        return 1;
    }

    //  multiplication exclusivement en ajoutant 1 à chaque tour
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            produit += 1;
        }
    }

    // Affichage du résultat
    printf("%d multiplié par %d est égal à %d\n", a, b, produit);

    return 0;
}