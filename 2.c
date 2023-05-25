#include <stdio.h>
struct Person
{
    int age;
    char name[30];
};

float averageAge (struct Person array[], int n){
    int summ = 0;
    for (int i = 0; i < n; i++){
    summ+=*(array+i)->age;
    }
    return summ/n;
}

int main() {
    struct Person array[] = {
        {45, "alex"},
        {60, "anonim"}
    };
    printf("%f\n", averageAge(array, 2));

}