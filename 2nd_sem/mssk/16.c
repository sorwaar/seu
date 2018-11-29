#include <stdio.h>

int main() {
    int first, second, third;

    scanf("%d %d %d", &first,&second,&third);

    if (first + second > third || first + third > second || second + third > first) {
        if (first == second && second == third && third == first) {
            printf("Equilateral.\n");
        } else if (first == second || second == third || third == first) {
            printf("Isosceles.\n");
        } else {
            printf("Scalene.\n");
        }
    } else {
        printf("Invalid Triangle.\n");
    }

    return 0;
}