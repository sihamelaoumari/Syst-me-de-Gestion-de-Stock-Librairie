#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct Livre {
char titre[50];
char auteur[50];
int prix;
int quantite_en_stock;
};
int main() {
    struct Livre livres[100];
    int nombre_de_livres=0;
    int programme=1;
    while(programme==1){
    printf("-------------------------------------------------------------\n");
    printf("------------ 1: Ajouter un livre ----------------------------\n");
    printf("------------ 2: Afficher les livres -------------------------\n");
    printf("------------ 3: Rechercher sur un livre par son titre ---------------\n");
    printf("------------ 5: Mettre à jour la quantite stocke d'un livre ----------\n");
    printf("------------ 6: Supprimer un livre --------------------------\n");
    printf("------------ 4: Afficher le nombre total des livres stockes--\n");
    printf("------------ 7: Sortir\n");
    printf("-------------------------------------------------------------\n");
    printf("Entrez votre choix: ");
    int choix;
    scanf("%d", &choix);
        switch (choix)
        {
            case 1:
    printf("Entrez le titre du livre: ");
    scanf(" %[^\n]s", livres[nombre_de_livres].titre);
    printf("Entrez l'auteur du livre: ");
    scanf(" %[^\n]s", livres[nombre_de_livres].auteur);
    printf("Entrez le prix du livre: ");
    scanf(" %d", &livres[nombre_de_livres].prix);
    printf("Entrez la quantite en stock du livre: ");
    scanf(" %d", &livres[nombre_de_livres].quantite_en_stock);
    nombre_de_livres++;
                break;
            case 2:

    for(int i=0; i < nombre_de_livres;i++){
    printf("Livre %d:\n",i+1);
    printf("Titre: %s\n",livres[i].titre);
    printf("Auteur: %s\n",livres[i].auteur);
    printf("Prix: %d\n",livres[i].prix);
    printf("Quantite en stock: %d\n",livres[i].quantite_en_stock);
    printf("\n");
                }
                break;
            case 3:
                {
    char titre_recherche[50];
    printf("Entrez le titre du livre a rechercher: ");
    scanf(" %[^\n]s", titre_recherche);
    int x= 0;
    for (int i =0; i < nombre_de_livres; i++) {
        if (strcmp(livres[i].titre, titre_recherche) == 0) {
        printf("Livre trouve:\n");
        printf("Titre: %s\n", livres[i].titre);
        printf("Auteur: %s\n", livres[i].auteur);
        printf("Prix: %d\n", livres[i].prix);
        printf("Quantite en stock: %d\n", livres[i].quantite_en_stock);
        x = 1;
                        break;
                        }
                    }
                    if (!x) {
                        printf("Livre non trouve.\n");
                    }
                }
                break;
            case 4:
   
                {
                    int total =0;
                    for (int i=0; i < nombre_de_livres; i++) {
                        total += livres[i].quantite_en_stock;
                    }
                    printf("Nombre total de livres en stock: %d\n", total);
                }
                break;
            case 5:
             
    {
        char titre_update[50];
        printf("Entrez le titre du livre a mettre a jour: ");
        scanf(" %[^\n]s", titre_update);
        int x=0;
        for(int i=0; i < nombre_de_livres; i++){
        if (strcmp(livres[i].titre, titre_update) == 0) {
            printf("Entrez la nouvelle quantite en stock: ");
            scanf(" %d", &livres[i].quantite_en_stock);
            printf("Stock mis a jour.\n");
            x = 1;
            break;
        }
        }
        if(!x){
        printf("Livre non trouve.\n");
        }
                }
                break;
            case 6:
             
                {
                char titre_delete[50];
                printf("Entrez le titre du livre a supprimer: ");
                scanf(" %[^\n]s", titre_delete);
                int x = 0;
                for (int i = 0; i < nombre_de_livres; i++) {
                    if (strcmp(livres[i].titre, titre_delete) == 0) {
                    for (int j = i; j < nombre_de_livres - 1; j++) {
                        livres[j] = livres[j + 1];
                    }
                    nombre_de_livres--;
                    printf("Livre supprime.\n");
                    x = 1;
                    break;
                    }
                }
                if(!x){
                printf("Livre non trouve.\n");
                }
                }
                break;
            case 7:
                programme=0;
                break;
            default:
                printf("Veuillez réessayer avec un choix valid\n");
    }
}    
return 0;
    

}