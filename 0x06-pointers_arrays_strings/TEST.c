#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char* sentence) {
    int i = 0;
    int capitalizeNext = 1;

    while (sentence[i] != '\0') {
        if (isalpha(sentence[i])) {  // Check if the character is an alphabet character
            if (capitalizeNext) {
                sentence[i] = toupper(sentence[i]);  // Convert the character to uppercase
            }
            capitalizeNext = 0;
        } else {
            capitalizeNext = 1;
        }

        i++;
    }
}

int main() {
    char sentence[] = "hello, world! how are you today?";
    
    printf("Original sentence: %s\n", sentence);
    
    capitalizeWords(sentence);
    
    printf("Capitalized sentence: %s\n", sentence);
    
    return 0;
}