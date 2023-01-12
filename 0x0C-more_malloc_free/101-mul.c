#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void usage() {
    fprintf(stderr, "Usage: mul num1 num2\n");
    exit(98);
}

void error() {
    fprintf(stderr, "Error\n");
    exit(98);
}

int check_digit(char *str) {
    for (int i = 0; str[i]; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        usage();
    }

    if (!check_digit(argv[1]) || !check_digit(argv[2])) {
        error();
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("%d\n", num1 * num2);
    return 0;
}

