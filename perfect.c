// perfect number or not perfect
#include <stdio.h>
int isPerfectNumber(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum = sum+ i;
        }
    }
    // Check if sum of divisors equals the number
    return sum == number;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPerfectNumber(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}
