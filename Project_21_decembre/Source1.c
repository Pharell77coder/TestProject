#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

struct entity {
    char* name;
    int* health;
    int* attack;
};

int je_attack() {}

int combat(char* player_name, int* player_health, int player_attack, char* ennemy_name, int ennemy_health, int ennemy_attack){
    int loop = 1;
    while(loop){
        enum action { attack = 1, health, run } current_action;
        printf("Status de %s\nPoints de vies: %d\nPoints d'attaques: %d\n", player_name, player_health, player_attack);
        printf("%s : Est que j'attaque (1) je me soigne (2) ou je me vais tel un lache (3) : ", player_name);
        scanf(" %d", &current_action);
        switch (current_action) {
            case attack:
                printf("J'attaque je vais lui infilger %d de degats!\n", player_attack);
                ennemy_health = ennemy_health - player_attack;
                break;
            case health:
                printf("Je me soigne!\n");
                player_health = player_health + player_attack;
                break;
            case run:
                printf("French surrender no jutsu!\n");
                loop = 0;
                break;
            default:
                printf("Error!");
        }
        if (ennemy_health <= 0) {
            loop = 0;
        } 
        printf("%s tente un attaque !\n", ennemy_name);
        player_health = player_health - ennemy_attack;
        if (player_health <= 0) {
            printf("% : Merde !\n", player_name);
            loop = 0;
        }
        if (loop == 0) { break; }

    }
    return player_health;
}

int main() {
    struct entity hero;
    hero.name = "Clovis the hero";
    hero.health = 350;
    hero.attack = 130;

    struct entity worker;
    worker.name = "Robert the worker";  
    worker.health = 400;
    worker.attack = 110;
  

    combat(hero.name, hero.health, hero.attack, worker.name, worker.health, worker.attack);
    printf("%d", hero.health);
    return (0);
}