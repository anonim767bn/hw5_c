#include <stdio.h>
struct Move
{
    int x;
    int y;
} ;
//объявляем структуру в которой хранятся 2 переменные х и у

struct Move getFinishPoint(struct Move array[], int n){
    struct Move result = {0, 0};
    //создаем структуру типа Move со значениями 0 0 - начальная координата чертежника
    for (int i = 0; i < n; i++){
        result.x += array[i].x;
        result.y += array[i].y;
    }
    //вычисляем координаты суммируя значения из массива
    return result;
    //возвращаем структуру, которая хранит конечную точку чертежника
}

int main() {
    struct Move finishPoint;
    struct Move array[] = {
        {1, 6},
        {-145, 4}
    };
    int n=2;
    
    finishPoint = getFinishPoint(array, n);
    //вызвал функцию getFinishPoint с аргументами: указатель на первый элемент массива структур, длини массива. Ее возврат передал переменной структуре finishPoint
    printf("%d %d\n", finishPoint.x, finishPoint.y);
    //вывел значения в консоль
}
