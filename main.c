#include <stdio.h>

int main() {
    printf("Co policzyc?\n");
    printf("1. Pole kwadratu\n");
    printf("2. Objetosc szescianu\n");
    char choice;
    scanf("%c", &choice);

    switch (choice) {
        case '1':
            kwadrat();
            break;
        case '2':
            szescian();
            break;
    }
}
