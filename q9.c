#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Z");
    }
    printf("\n");

    for (i = 1; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        printf("Z\n");
    }

    for (i = 0; i < n; i++) {
        printf("Z");
    }
    printf("\n");

}
