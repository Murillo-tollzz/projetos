#include <stdio.h>

int main() {
    // declare variables
    int user_value;
    int min_value = 50;
    int max_value = 500;

    // get user input
    get_value(user_value, min_value, max_value);
}

int get_value(int user_value, int min_value, int max_value) {
    printf("Enter your value (type a negative value to exit): ");
    getchar(); // clear the input buffer
    scanf("%d", &user_value);

    if (user_value < 0) {
        printf("Exiting program...\n\n");
        return 0;
    }
    else compare_values(user_value, min_value, max_value);
}

int compare_values(int user_value, int min_value, int max_value) {
    // compare values
    if (user_value < min_value) {
        printf("your value is less than minimum value\n");
    } else if (user_value > max_value) {
        printf("your value is greater than maximum value\n");
    } else {
        printf("your value is ok\n");
    }
    get_value(user_value, min_value, max_value);
}