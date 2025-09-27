#include <stdio.h>
int main() {
    int choice, subchoices;

    printf("Food Ordering System\n");
    printf("1. Manage Fast Food\n");
    printf("2. Manage Drinks\n");
    // printf("3. Manage Both\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("1. Burger\n");
            printf("2. Pizza\n");
            printf("3. Sandwich\n");
            printf("4. Cheese Sticks\n");
            printf("5. Gyro\n");
            scanf("%d", &subchoices);

            switch (subchoices) {
                case 1:
                    printf("burger delivered successfully.\n");
                    break;
                case 2:
                    printf("pizza delivered successfully.\n");
                    break;
                case 3:
                    printf("sandwich delivered successfully.\n");
                    break;
                case 4:
                    printf("cheese stick delivered successfully.\n");
                    break;
                case 5:
                    printf("gyro delivered successfully.\n");
                    break;
                default:
                    printf("Invalid option.\n");
                    break;
            }
            break; 

        case 2: 
          printf("1. 7up\n");
          printf("2. Marinda\n");
          printf("3. Dew\n");
          printf("4. Sting \n");
          printf("5. Coke\n");
          scanf("%d",&subchoices);

           

            switch (subchoices) {
                case 1:
                    printf(" 7up delivered successfully.\n");
                    break;
                case 2:
                    printf(" marinda delivered successfully.\n");
                    break;
                case 3:
                    printf(" dew delivered successfully.\n");
                    break;
                case 4:
                    printf(" sting delivered successfully.\n");
                    break;
                case 5:
                    printf(" coke delivered successfully.\n");
                    break;

                default:
                    printf("Invalid option.\n");
                    break;
            }
            break;
              

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
