#include <stdio.h>
void scan2dArray(int row, int col, int arr[row][col]){
    for (int i = 0; i < row; i++){
        for (int j = 0; i < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}
void print2dArray(int row, int col, int arr[row][col]){
    for (int i = 0; i < row * col; i++){
        printf("%d ", *(*(arr + i / col) + i % col));
        if ((i+1)%col==0 && i > 0 && i+1!=row*col){printf("\n");}
    }
    printf("\n");
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    scan2dArray(a, b, arr);
    print2dArray(a, b, arr);
}