#include <stdio.h>
#include <string.h>
#define INPUTBUFF 2
#define TEXTBUFF 80

int main () {
    char input[INPUTBUFF];
    char text[TEXTBUFF] = {0};
    do {
        printf("Input '1' to get list of ascii characters\nInput '2' to get your string processed\nInput '0' to exit the program\n");
        fgets(input, sizeof(input), stdin);
        fflush(stdin);

        if (input[0] == '1')
            for (int i = 32; i <= 255; i++) {
                // This block of code removes not existing values
                // if (i > 126)
                //     goto skip;

                printf("ASCII number %d stands for letter '%c'\n", i, i);
                // skip:
            }
        else if (input[0] == '2') {
            printf("Input your string (max 80 chars): ");
            fgets(text, sizeof(text), stdin);
            fflush(stdin);

            printf("Your processed string is\n");
            for (int i = 0; i < sizeof(text); i++)
                if (text[i] >= 32 && text[i] <= 255)
                    printf("%c", text[i]);
            printf("\n");
        }
    } while (input[0] != '0');
    printf("Exiting the program");

    return 0;
}