#include <stdio.h>

int main() {
    int choice;
    float total_cost = 0;
    char continue_order;

    do {

        printf("****************************************\n");
        printf("*           JOWA FOR RENT MENU         *\n");
        printf("****************************************\n");
        printf("* 1.  Hatid pauwi          - Php 25.00 *\n");
        printf("* 2.  Kiss                 - Php 50.00 *\n");
        printf("* 3.  Hug                  - Php 75.00 *\n");
        printf("* 4.  Date                 - Php 100.00*\n");
        printf("****************************************\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                total_cost += 25.00;
                printf("You have ordered Hatid pauwi.\n");
                break;
            case 2:
                total_cost += 50.00;
                printf("You have ordered Kiss.\n");
                break;
            case 3:
                total_cost += 75.00;
                printf("You have ordered Hug.\n");
                break;
            case 4:
                total_cost += 100.00;
                printf("You have ordered Date.\n");
                break;
            default: 
                printf("Invalid choice. Please select a valid option.\n");
                break;
        }

        printf("Do you want to order another item? (y/n): ");
        scanf(" %c", &continue_order);
    } while(continue_order == 'y' || continue_order == 'Y');

    printf("***************************************\n");
    printf("       Your total_cost is: Php%.2f\n", total_cost);
    printf("***************************************\n");
    printf("***************************************\n");
    printf("Joke, syempre libre lang lahat for you\n");
    printf("I miss you my pretty princess        \n");
    printf("Take care as always\n");
    printf("And\n");
    printf("Do your best po sa school\n");
    printf("Don't pressure yourself too much po!\n");
    printf("It's bad for your mental health po\n");
  
    printf("***************************************\n");

    return 0;
}   