#include <stdio.h>
#include <string.h>

int main() {

    char email[100];
    char domain[100];

    printf("Enter employee email: ");
    scanf("%s", email);

    char *ptr = strchr(email, '@');

    if (ptr != NULL) {

        strcpy(domain, ptr + 1);

        printf("Email Address: %s\n", email);
        printf("Domain Name: %s\n", domain);

    }
    else {
        printf("Invalid email address!\n");
    }

    return 0;
}