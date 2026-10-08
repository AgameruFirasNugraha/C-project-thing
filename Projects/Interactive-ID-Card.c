//===============================
//======INTERACTIVE ID CARD======
//===============================

#include <stdio.h>

int main() {
    int fav_num;
    char name[50];

    // 1. ask the user to type their first name
    printf("Please enter your first name: ");

    //2. write the scanf to read the printf input
    scanf("%s", name);

    // 3. ask the user to type their favorite number
    printf("Please enter your favorite number:");

    // 4. write the scanf to read the printf input
    scanf("%d", &fav_num);

    // 5. print what needed to be shown to the users
    printf("======================== ID CARD ========================\n");
    printf("Hello %s, your favorite number is %d\n", name, fav_num);
    printf("=========================================================\n");
    return 0;
}