#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>

//Borden - Roman Number Assignment
//10.26.24

void romanNumeral(int num) {
    const char* roman_numerals[] = {
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
    };
    const int values[] = {
        1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };

    printf("Roman numeral: ");
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            printf("%s", roman_numerals[i]);
            num -= values[i];
        }
    }
    printf("\n");
}// function for user to enter integer to print roman numeral number

int main() {
    int number;
    char choice;

    do {
        printf("Enter a number between 1 and 1000: ");
        scanf_s("%d", &number);

        if (number < 1 || number > 1000) {
            printf("Please enter a valid number between 1 and 1000.\n");
        }
        else {
            romanNumeral(number);
        }

        printf("Type y or n to enter another number: ");
        scanf_s(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}// main function of loop that calls romanNumeral function. Number 1 - 10000
