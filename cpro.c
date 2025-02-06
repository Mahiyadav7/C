#include <stdio.h>

int main() {
    int customer_number, units;
    float amount;

    // Read customer number and power consumed
    printf("Enter customer number: ");
    scanf("%d", &customer_number);

    printf("Enter power consumed (in units): ");
    scanf("%d", &units);

    // Calculate amount based on consumption slabs
    if (units <= 200) {
        amount = units * 0.50;
    } 
    else if (units <= 400) {
        amount = 100 + (units - 200) * 0.65;
    } 
    else if (units <= 600) {
        amount = 230 + (units - 400) * 0.80;
    } 
    else {
        amount = 390 + (units - 600) * 1.00;
    }

    // Display the bill
    printf("\nCustomer Number: %d\n", customer_number);
    printf("Power Consumed: %d units\n", units);
    printf("Amount to be Paid: Rs. %.2f\n", amount);

    return 0;
}