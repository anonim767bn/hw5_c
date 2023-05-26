#include <stdio.h>
struct Move
{
    int x;
    int y;
} ;

struct Move getFinishPoint(struct Move array[], int n){
    struct Move result = {0, 0};
    for (int i = 0; i < n; i++){
        result.x += array[i].x;
        result.y += array[i].y;
    }
    return result;
}

int main() {
    struct Move finishPoint;
    struct Move array[] = {
        {1, 6},
        {-145, 4}
    };
    int n=2;
    
    finishPoint = getFinishPoint(array, n);
    printf("%d %d\n", finishPoint.x, finishPoint.y);
}
