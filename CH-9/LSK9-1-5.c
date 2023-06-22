#include <stdio.h>

int main() {
    char input[100];
    int i, flag = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("The string follows the camel case convention.\n");
    else
        printf("The string does not follow the camel case convention.\n");

    return 0;
}
