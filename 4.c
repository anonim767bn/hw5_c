#include <stdio.h>

void reduce_fraction(int * a, int * b){
    //функция будет принимать указатели на переменные а и б, но вместо того, чтобы вернуть их новые значения, она запишет их в те же ячейки памяти, где хранились старые значения a и b
    //объявляю переменную, которая будет хранить наибольший общий делитель, со значением 1, потому что все числа делятся на 1
    int min = *a < *b ? *a : *b;
    //вычисляю минибальное число с помощью тернарного оператора, чтобы цикл сделал меньше итераций
    for (int i = min; i > 1; i--){
        if (*a%i==0 && *b%i==0){
            max_del = i;
            break;
            //идем от наименьшего значения переменных a b на уменьшение до 1, и первое найденное число, которой будет делителем обоих чисел, станет нашим наибольшим общим делителем
        }
    }
    *a = *a/max_del;
    *b = *b/max_del;
    //делим обе переменные на их общий максимальный делитель
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    //объявляем и считываем переменные a и b
    reduce_fraction(&a, &b);
    //вызываем функцию и передаем ей указатели на a и b
    printf("%d %d\n", a, b);
    //выводим новые значения переменных a и b
}