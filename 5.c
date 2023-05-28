#include <stdio.h>
void scan2dArray(int row, int col, int arr[row][col]){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}

void print2dArray(int row, int col, int arr[row][col]){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void swap2dArray(int row, int col, int swapCol1, int swapCol2, int arr[row][col]){
    int tempArray[row];
    for(int i = 0; i < row; i++){
        tempArray[i]=arr[i][swapCol1];
    }
    for(int i = 0; i < row; i++){
        arr[i][swapCol1]=arr[i][swapCol2];
        arr[i][swapCol2]=tempArray[i];
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    scan2dArray(a, b, arr);

    int summ = 0;
    int maxSumm = 0, minSumm = 0, indexMin = 0, indexMax = 0;

    for (int col = 0; col < b; col++){
        for (int row = 0; row < a; row++){
            summ += arr[row][col];
        }
        if (col == 0) {
            maxSumm = summ;
            minSumm = summ;
        } else {
            if (summ > maxSumm) {
                maxSumm = summ;
                indexMax = col;
            }
            if (summ < minSumm) {
                minSumm = summ;
                indexMin = col;
            }
        }
        summ = 0;
    }
    swap2dArray(a, b, indexMax, indexMin, arr);
    printf("\n");
    print2dArray(a, b, arr);
}