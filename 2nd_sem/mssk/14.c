    #include <stdio.h>

int main() {

    int first, second, third, total = 0;

    scanf("%d %d %d", &first,&second,&third);

    total = first + second + third;

    if (total == 180) {
        printf("valid Triangle.\n");
    } else {
        printf("invalid Triangle.\n");
    }

    return 0;
}