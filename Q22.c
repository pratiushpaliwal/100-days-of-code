/*
Write a program to find profit or loss percentage given cost price and selling price.
*/
#include <stdio.h>

int main() {
    double costPrice, sellingPrice, profit, loss;
    double profitPercentage, lossPercentage;

    printf("Enter the cost price: ");
    if (scanf("%lf", &costPrice) != 1 || costPrice < 0) {
        printf("Invalid input. Please enter a non-negative number for cost price.\n");
        return 1;
    }

    printf("Enter the selling price: ");
    if (scanf("%lf", &sellingPrice) != 1 || sellingPrice < 0) {
        printf("Invalid input. Please enter a non-negative number for selling price.\n");
        return 1;
    }

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercentage = (profit / costPrice) * 100.0;
        printf("\nProfit Percentage: %.2f%%\n", profitPercentage);
    } else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        lossPercentage = (loss / costPrice) * 100.0;
        printf("\nLoss Percentage: %.2f%%\n", lossPercentage);
    } else {
        printf("\nNo profit, no loss.\n");
    }

    return 0;
}