#include <stdio.h>

void reduce_fraction(int * a, int * b){
    int max_del = 1;
    int min = *a < *b ? *a : *b;
    for (int i = min; i > 1; i--){
        if (*a%i==0 && *b%i==0){
            max_del = i;
            break;
        }
    }
    *a = *a/max_del;
    *b = *b/max_del;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    reduce_fraction(&a, &b);
    printf("%d %d\n", a, b);
}