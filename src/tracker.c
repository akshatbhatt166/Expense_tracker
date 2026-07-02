#include <stdio.h>
#include "tracker.h"

void addExpense(Expense *expenses, int *count) {
    if (*count >= 100) {
        printf("\n[!] Tracker full!\n");
        return;
    }
    printf("\nEnter description (e.g., Food): ");
    scanf(" %[^\n]s", expenses[*count].description); 
    printf("Enter amount (INR): ");
    scanf("%f", &expenses[*count].amount);
    printf("Enter category: ");
    scanf("%s", expenses[*count].category);
    (*count)++; 
    printf("[+] Expense added!\n");
}

void viewExpenses(const Expense *expenses, int count) {
    if (count == 0) {
        printf("\n[-] No expenses recorded yet.\n");
        return;
    }
    printf("\n--- Expenses ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - Rs%.2f [%s]\n", i+1, expenses[i].description, expenses[i].amount, expenses[i].category);
    }
}

void viewTotal(const Expense *expenses, int count) {
    float total = 0;
    for (int i = 0; i < count; i++) {
        total += expenses[i].amount;
    }
    printf("\nTotal Spent: Rs%.2f\n", total);
}