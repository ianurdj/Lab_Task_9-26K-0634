#include <stdio.h>
#include <string.h>

int main() {

    char names[10][50];
    char temp[50];

    for (int i = 0; i < 10; i++) {

        printf("Enter name %d: ", i + 1);
        scanf("%s[^\n]", names[i]);

    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {

            if (strcmp(names[j], names[j + 1]) > 0) {

                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);

     }
 }
    }

    printf("Names in alphabetical order:\n");

    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}