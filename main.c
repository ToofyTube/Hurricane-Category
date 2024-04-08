#include <stdio.h>

int isPerfect(int num) {
    printf("Enter hurricane speed: ");
    scanf("%d", &num);

    if (num >= 157) {
        printf("Category 5");
    } else if (num >= 130) {
        printf("Category 4");
    } else if (num >= 111) {
        printf("Category 3");
    } else if (num >= 96) {
        printf("Category 2");
    } else if (num >= 74) {
        printf("Category 1");
    } else {
        printf("Not a hurricane");
    }

    return 0;
}

int main() {
    isPerfect(0); // Call isPerfect function with initial value 0
    return 0;
}

