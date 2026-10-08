//===========================
//===RPG CHARACTER PROFILE===
//===========================

#include <stdio.h>

int main() {
    char hero_name[50];
    int level;
    int lucky_number;

    // 1. ask for the hero's name
    printf("Enter your hero's name: ");
    scanf("%[^\n]", hero_name);

    // 2. ask for the hero's starting level
    printf("Enter starting level: ");
    scanf("%d", &level);

    // 3. ask for the hero's lucky number
    printf("Enter Lucky number: ");
    scanf("%d", &lucky_number);

    // 4. print out the hero's profile
    printf("\n=== HERO PROFILE ===\n");
    printf("Name: %s\n", hero_name);
    printf("Level: %d\n", level);
    printf("Lucky Number: %d\n", lucky_number);
    printf("====================\n");
    return 0;
}