#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

struct Dresseur {
    char Name[50];
};

struct Pokemon {
    char Name[50];
    int Health;
    int Attack;
    int defense;
};

void creerplayer(void);

int choixpokemon(void);

int main(void){

    creerplayer();

    int choix = choixpokemon();
    if (choix == 1) {
        struct Pokemon Monpokemon = { "Bulbizarre", 30, 10, 10 };
    }
    else if (choix == 2) {
        struct Pokemon Monpokemon = { "Carapuce", 30, 10, 10 };
    }
    else if (choix == 3) {
        struct Pokemon Monpokemon = { "Salameche", 30, 10, 10 };
    }

	return 0;
}

void creerplayer(void) {
    char playerName[50];
    printf("Bienvenue dans le monde des pokemons, quel est ton nom ? ");
    scanf("%s", &playerName);
    printf("\n%s. Quel nom interessant...\n", playerName);
    Sleep(1000);
    printf("Allez c'est partir pour l'aventure !\n");
    Sleep(1000);
    printf("hmm...\n");
    Sleep(2000);
    printf("Tu n'as pas de pokemon voila qui es bien facheux\n");
}

int choixpokemon(void) {
    int bool = 1;
    int choix;

    while (bool) {
        printf("\nChoisie un pokemon entre Bulbizarre(1) Carapuce(2) et Salameche(3) : ");
        scanf(" %d", &choix);
        if (choix == 1 || choix == 2 || choix == 3) {
            bool = 0;
        }
        else {
            printf("depeche toi de choisir ton pokemon\n");
        }
    }

    printf("Bien. Bonne chance !\n");
    return choix;
}