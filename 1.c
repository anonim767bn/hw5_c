#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arrayFirst[n/2], arraySecond[n/2];

	for(int i = 0; i < n/2; i++ ){
		scanf("%d", (arrayFirst+i));
	}
	for(int i = 0; i < n/2; i++ ){
        scanf("%d", (arraySecond+i));
    }
	for(int i = 0; i < n/2; i++){
		printf("%d ", arraySecond[i]);
	}
	for (int i = 0; i < n/2; i++){
		printf("%d ", arrayFirst[i]);
	}
	printf("\n");
}
