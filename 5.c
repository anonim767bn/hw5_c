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

//для более удобной работы создадим функции для считывания и вывода двумерного массива

void swap2dArray(int row, int col, int swapCol1, int swapCol2, int arr[row][col]){
    int tempArray[row];
    //создаем временный массив, размер которого равен количеству строк в столбце
    for(int i = 0; i < row; i++){
        tempArray[i]=arr[i][swapCol1];
    }
    // с помощью цикла помещаем во временный массив значения одного из столбцов
    for(int i = 0; i < row; i++){
        arr[i][swapCol1]=arr[i][swapCol2];
        //перезаписываем значения i-той строчки первого столбца i - той строчкой второго столбца
        arr[i][swapCol2]=tempArray[i];
        //а второй столбец мы перезаписываем значениями из временного массива, куда мы до этого поместили элементы первого столбца
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    //объявляем и считываем 2 переменные которые будут отвечать за количество строк(а) и столбцов(b)
    int arr[a][b];
    //объявляем 2 мерный массив из a строк и b столбцов
    scan2dArray(a, b, arr);
    //передаем функции scan2dArray размер считымоего с консоли 2мерного массива и указатель на первый элемент массива arr

    int summ = 0;
    int maxSumm = 0, minSumm = 0, indexMin = 0, indexMax = 0;

    for (int col = 0; col < b; col++){
        for (int row = 0; row < a; row++){
            //при помощи вложенного цикла пробегаемся по строчкам в каждом стоблце и считаем сумму элементов столбцов
            //находим индексы столбцов с максимальной и минимальной суммой
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
    //передаем функции размер массива, индексы столбцов с максимальными и минимальными элементами, а также указатель на первый элемент массива
    printf("\n");
    print2dArray(a, b, arr);
    //выводим получившийся массив
}