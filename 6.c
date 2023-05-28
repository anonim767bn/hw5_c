#include <stdio.h>


void abs_array(int array[], int n){
    int count=0;
    for (size_t i = 0; i < n; i++)
    {
        if (*(array+i) < 0) {
            *(array+i) *= -1;
            count++;
        }
    }
    printf("%d ", count);
}



int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    int input;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (array+i));
    }
    abs_array(array, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(array+i));
    }
    

    
}