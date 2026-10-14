//============================
//=== Pizza Place Register ===
//============================

#include <stdio.h>

int main() {

    // Declaring needed variables
    int Cart = 0;
    int choice;
    int add_more;
    int Extra;
    int count_cheese = 0;
    int count_pepperoni = 0;
    int count_pinapple = 0;

    // 1. Display Welcome to the shop
    printf("==== WELCOME TO LEBRON'S PIZZA PLACE ====\n");
    
    // 2. This part is to make sure the customer can choose more than 1 item on the menu
    do {
        printf("LEBRON'S PIZZA PLACE MENU\n");
        printf("1. Cheese Pizza (8$)\n");
        printf("2. Pepperoni Pizza (12$)\n");
        printf("3. Pineapple Pizza (15$)\n");
        printf("Choose the pizza (1-3): ");
        scanf("%d", &choice);
       
       // this short part is to make sure the selected item is added to the cart and calculated for the price
        
       if (choice == 1) {
            Cart = Cart + 8; 
            count_cheese++;
            printf("\n=== Add Extra Topping ===\n");
            printf("1. Extra cheese ($2)\n");
            printf("2. Extra sauce ($2)\n");
            printf("0. No Extra topping\n");
            printf("Choose extra topping : ");
            scanf("%d", &Extra);
            if (Extra == 1) {
                Cart = Cart + 2;
            }
            else if (Extra == 2) {
                Cart = Cart +2;
            }
             else if (Extra == 0) {
                Cart = Cart + 0;
            }
            else {
                printf("Invalid Options!\n");
            }
            
        }

        else if (choice == 2) {
             Cart = Cart + 12; 
             count_pepperoni++;
             printf("\n=== Add Extra Topping ===\n");
             printf("1. Extra cheese ($2)\n");
             printf("2. Extra sauce ($2)\n");
             printf("3. Extra Pepperoni ($3)\n");
             printf("0. No Extra topping\n");
             printf("Choose extra topping : ");
             scanf("%d", &Extra); 
             if (Extra == 1) {
                Cart = Cart + 2;
            }
            else if (Extra == 2) {
                Cart = Cart +2;
            }
            else if (Extra == 3) {
                Cart = Cart + 3;
            }
            else if (Extra == 0) {
                Cart = Cart + 0;
            }
            else {
                printf("Invalid Options!\n");
            }
        }

        else if (choice == 3) {
            Cart = Cart + 15;   
            count_pinapple++;
             printf("\n=== Add Extra Topping ===\n");
             printf("1. Extra cheese ($2)\n");
             printf("2. Extra sauce ($2)\n");
             printf("3. Extra Pineapple ($3)\n");
             printf("0. No Extra topping\n");
             printf("Choose extra topping : ");
             scanf("%d", &Extra); 
             if (Extra == 1) {
                Cart = Cart + 2;
             }
             else if (Extra == 2) {
                Cart = Cart + 2;
             }
             else if (Extra == 3) {
                Cart = Cart + 3;
             }
              else if (Extra == 0) {
                Cart = Cart + 0;
            }
             else {
                printf("Invalid Option!\n");
             }
        }

        else {
            printf("Invalid Option!\n");
        }
        
        printf("Add another pizza? (1 = yes, 0 = done): ");
        scanf("%d", &add_more);

    }  while (add_more == 1);

    // 2. print the customers receipt
    printf("\n==================================================\n");
    printf("\n========== LEBRON'S PIZZA PLACE RECEIPT ==========\n");
    printf("\n==================================================\n\n");

    if (count_cheese > 0) {
        printf("Cheese Pizza x%d : $%d\n", count_cheese, count_cheese * 8);
    }
    if (count_pepperoni > 0) {
        printf("Pepperoni Pizza x%d : $%d\n", count_pepperoni, count_pepperoni * 12);
    }
    if (count_pinapple > 0) {
        printf("Pinapple Pizza x%d : $%d\n", count_pinapple, count_pinapple * 15);
    }

    printf("\n--------------------------------------------------\n");
    printf("Total Ammount: $%d\n", Cart);
    printf("Thank you for choosing LEBRON'S PIZZA PLACE!!!\n");
    printf("--------------------------------------------------\n");
}