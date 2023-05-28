#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	//считываем длинну массива
	int arrayFirst[n/2], arraySecond[n/2];
	//объявляем 2 массива размером в половину n

	for(int i = 0; i < n/2; i++ ){
		scanf("%d", (arrayFirst+i));
	}
	//считываем первую половину ввода с консоли
	for(int i = 0; i < n/2; i++ ){
        scanf("%d", (arraySecond+i));
    }
	//считываем 2 половину ввода с консоли
	for(int i = 0; i < n/2; i++){
		printf("%d ", arraySecond[i]);
	}
	for (int i = 0; i < n/2; i++){
		printf("%d ", arrayFirst[i]);
	}
	//выводим наоборот, сначала вторую затем первую
	printf("\n");
}