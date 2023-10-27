#include <stdio.h>

int main() {
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++) {
        if (letter != 'h' && letter != 'l') {
            putchar(letter);
        }
    }

    putchar('\n');
    return 0;
}