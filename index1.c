#include <stdio.h>

int main() {
    char name[50];
    char maritalStatus[10];
    char futurePlan[100];

    // Asking for user's name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Asking for user's marital status
    printf("Are you married? (yes/no): ");
    fgets(maritalStatus, sizeof(maritalStatus), stdin);

    // Asking for user's future plans
    printf("What are your future plans?: ");
    fgets(futurePlan, sizeof(futurePlan), stdin);

    // Printing the collected information
    printf("\n--- Collected Information ---\n");
    printf("Name: %s", name);
    printf("Marital Status: %s", maritalStatus);
    printf("Future Plans: %s", futurePlan);

    return 0;
    printf("thanks guys meet you again");
}
