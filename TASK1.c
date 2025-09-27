#include <stdio.h>
int main() {
    int choice, subchoices;

    printf("Library Management System\n");
    printf("1. Manage Magazines\n");
    printf("2. Manage Books\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("1. Issue Magazine\n");
            printf("2. Return Magazine\n");
            scanf("%d", &subchoices);

            switch (subchoices) {
                case 1:
                    printf("Magazine issued successfully.\n");
                    break;
                case 2:
                    printf("Magazine returned successfully.\n");
                    break;
                default:
                    printf("Invalid magazine option.\n");
                    break;
            }
            break; 

        case 2: 
            printf("1. Issue Book\n");
            printf("2. Return Book\n");
            scanf("%d", &subchoices);

            switch (subchoices) {
                case 1:
                    printf("Book issued successfully.\n");
                    break;
                case 2:
                    printf("Book returned successfully.\n");
                    break;
                default:
                    printf("Invalid book option.\n");
                    break;
            }
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}


