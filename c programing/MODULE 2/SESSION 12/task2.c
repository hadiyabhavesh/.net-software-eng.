#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
	int i;
    struct FoodItem menu[3] = {
        {"Paneer Pizza", 299.00, 4.5},
        {"Veg Biryani", 180.00, 4.3},
        {"Masala Dosa", 120.00, 4.6}
    };

    for (i = 0; i < 3; i++) {
        printf("Item: %s\n", menu[i].itemName);
        printf("Price: %.2f\n", menu[i].price);
        printf("Rating: %.1f\n", menu[i].rating);
        printf("-------------------\n");
    }

    return 0;
}
