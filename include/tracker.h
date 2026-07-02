#ifndef TRACKER_H
#define TRACKER_H

typedef struct {
    char description[50];
    float amount;
    char category[20];
} Expense;

void addExpense(Expense *expenses, int *count);
void viewExpenses(const Expense *expenses, int count);
void viewTotal(const Expense *expenses, int count);

#endif