#include <stdio.h>
#include <string.h>

struct Objet{
	char nomObjet[60];
	int prix;
};
typedef struct Objet objet;


objet epee = {"Epee",20};
objet bouclier = {"Bouclier",15};
objet arc = {"Arc",20};
objet fleche = {"10 Fleche",10};
objet potionS = {"Potion de soin",30};
objet potionM = {"Potion de mana",30};
objet casque = {"Casque",40};
objet plastron = {"Plastron",50};
objet pantalon = {"Pantalon",45};
objet botte = {"Botte",35};

int main(){

    int choix ;
    int achat ;
    int argentDuJoueur = 200;

	int epee1 = 0;
	int bouclier1 = 0;
	int arc1 = 0;
	int fleche1 = 0;
	int potionS1 = 0;
	int potionM1 = 0;
    int casque1 = 0;
    int plastron1 = 0;
    int pantalon1 = 0;
    int botte1 = 0;


    printf("Bienvenue dans mon magasin aventurier!");

   while (argentDuJoueur > 0){

    printf("Veux-tu m'acheter quelque chose ? \n [1] jette un oeil \n [2] voir l'inventaire");
    scanf("%d", &choix);

    if (choix == 1){
    	printf(" [1] %s | %d  \n", epee.nomObjet, epee.prix);
    	printf(" [2] %s | %d  \n", bouclier.nomObjet, bouclier.prix);
    	printf(" [3] %s | %d  \n", arc.nomObjet, arc.prix);
    	printf(" [4] %s | %d  \n", fleche.nomObjet, fleche.prix);
    	printf(" [5] %s | %d  \n", potionS.nomObjet, potionS.prix);
    	printf(" [6] %s | %d  \n", potionM.nomObjet, potionM.prix);
        printf(" [7] %s | %d  \n", casque.nomObjet, casque.prix);
        printf(" [8] %s | %d  \n", plastron.nomObjet, plastron.prix);
        printf(" [9] %s | %d  \n", pantalon.nomObjet, pantalon.prix);
        printf(" [10] %s | %d  \n", botte.nomObjet, botte.prix);

    		scanf("%d", &achat);

    		if (achat == 1){
    			printf("Excellent pour une puissance d'attaque \n");
    			argentDuJoueur = argentDuJoueur - epee.prix;
				epee1 = epee1 + 1;
    			printf("solde : %d\n", argentDuJoueur);
    		}

    		if (achat == 2){
    			printf("Excellent pour une bonne défense! \n");
    			argentDuJoueur = argentDuJoueur - bouclier.prix;
				bouclier1 = bouclier1 + 1;
    			printf("solde : %d\n", argentDuJoueur);
    		}

    		if (achat == 3){
    			printf("Si tu veut devenir legolas c'est le bon choix! \n");
    			argentDuJoueur = argentDuJoueur - arc.prix;
				arc1 = arc1 + 1;
    			printf("solde : %d\n", argentDuJoueur );
    		}

    		if (achat == 4){
    			printf("Des munitions c'est toujours utile! \n");
    			argentDuJoueur = argentDuJoueur - fleche.prix;
				fleche1 = fleche1 + 1;
    			printf("solde : %d\n", argentDuJoueur );
    		}

    		if (achat == 5){
    			printf("Un peu de soin mon brave! \n");
    			argentDuJoueur = argentDuJoueur - potionS.prix;
				potionS1 = potionS1 + 1;
    			printf("solde : %d\n", argentDuJoueur );
    		}

    		if (achat == 6){
    			printf("Un peu de mana mon brave! \n");
    			argentDuJoueur = argentDuJoueur - potionM.prix;
				potionM1 = potionM1 + 1;
    			printf("solde : %d\n", argentDuJoueur );
    		}

            if (achat == 7){
                printf("Super casque la qualiter est présente! \n");
                argentDuJoueur = argentDuJoueur - casque.prix;
                casque1 = casque1 + 1;
                printf("solde : %d\n", argentDuJoueur );
            }

            if (achat == 8){
                printf("Super plastron la qualiter est présente! \n");
                argentDuJoueur = argentDuJoueur - plastron.prix;
                plastron1 = plastron1 + 1;
                printf("solde : %d\n", argentDuJoueur );
            }

            if (achat == 9){
                printf("Super pantalon la qualiter est présente! \n");
                argentDuJoueur = argentDuJoueur - pantalon.prix;
                pantalon1 = pantalon1 + 1;
                printf("solde : %d\n", argentDuJoueur );
            }

            if (achat == 10){
                printf("Super botte la qualiter est présente! \n");
                argentDuJoueur = argentDuJoueur - botte.prix;
                botte1 = botte1 + 1;
                printf("solde : %d\n", argentDuJoueur );
            }
	}


		if (choix == 2){
		printf("inventaire : \n %d %s \n", epee1, epee.nomObjet);
		printf("\n %d %s \n", bouclier1, bouclier.nomObjet);
    	printf("\n %d %s \n", arc1, arc.nomObjet);
    	printf("\n %d %s \n", fleche1, fleche.nomObjet);
    	printf("\n %d %s \n", potionS1, potionS.nomObjet);
    	printf("\n %d %s \n", potionM1, potionM.nomObjet);
        printf("\n %d %s \n", casque1, casque.nomObjet);
        printf("\n %d %s \n", plastron1, plastron.nomObjet);
        printf("\n %d %s \n", pantalon1, pantalon.nomObjet);
        printf("\n %d %s \n", botte1, botte.nomObjet);
	}

		}

		if (argentDuJoueur <= 0){
			printf("vous n'avz plus de gold mon brave\n");
            printf(" Adieu \n");
            }

    return 0;
}