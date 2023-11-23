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

void Myfunction(void);

int main(void){
    char playerName[50];
    printf("Bienvenue dans le monde des pokemon quel est ton nom ? ");
    scanf(" %s", &playerName);
    struct Dresseur Player = { playerName };
    printf("\n%s. Quel nom interessant...\n", playerName);
    Sleep(1000);
    printf("Allez c'est partir pour l'aventure !\n");
    Sleep(1000);
    printf("hmm...\n");
    Sleep(2000);
    printf("Tu n'as pas de pokemon voila qui es bien facheux\n");

    struct Pokemon Salameche = {"Salameche", 30, 10, 10};
    struct Pokemon Bulbizarre = {"Bulbizarre", 30, 10, 10};
    struct Pokemon Carapuce = {"Carapuce", 30, 10, 10};

	return 0;
}

void Myfunction(void) {
    return 0;
}