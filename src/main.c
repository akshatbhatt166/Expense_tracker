#include <stdio.h>
#include "tracker.h"

int main() {
    Expense myExpenses[100]; 
    int expenseCount = 0;    
    int choice;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. View Total\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addExpense(myExpenses, &expenseCount);
                break;
            case 2:
                viewExpenses(myExpenses, expenseCount);
                break;
            case 3:
                viewTotal(myExpenses, expenseCount);
                break;
            case 4:
                printf("\nGoodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice.\n");
        }
    }
    return 0;
}