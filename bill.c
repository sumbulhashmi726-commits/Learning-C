#include <stdio.h>
enum Meal { BREAKFAST = 1, LUNCH, DINNER };
int main() {
    int choice, qty;
    int price = 0;
    int total = 0;
    printf("1. Breakfast (Rs 50)\n");
    printf("2. Lunch     (Rs 120)\n");
    printf("3. Dinner    (Rs 200)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    if (choice == BREAKFAST) {
        price = 50;
    }
    else if (choice == LUNCH) {
        price = 120;
    }
    else if (choice == DINNER) {
        price = 200;
    }
    else {
        printf("Invalid choice!\n");
        return 0;
    }
    printf("Enter quantity: ");
    scanf("%d", &qty);

    if (qty <= 0) {
        printf("Invalid quantity!\n");
        return 0;
    }
    total = price * qty;

    printf("Total Bill = Rs %d\n", total);

    return 0;
}