#include <stdio.h>
#include <stdlib.h>

int main(void){

	int x = 4;
	int y = 10;
	printf("x=%d\n", x);
	printf("x+y=%d\n", x+y);
	
	for(int i=0; i<10;i+=2){
		printf("i:%d\n", i);
	}

// Динамические массивы поддерживаются только в C++, статические массивы создаются так:
	int values[40] = {1, 2, 35, 4}, cnt = 4;

	for(int i=0;i<cnt;i++){
		printf("%d\n", values[i]);
	}
	values[cnt] = 7;
	cnt++;	
	printf("-----------------------------");
	for(int i=0;i<40;i++){
		printf("%d\n", values[i]);
	}

// Динамическое распределение памяти
	int *valuesArray = (int*)malloc(10*sizeof(int));
	valuesArray[0] = 1;
	valuesArray[1] = 3;
	valuesArray[2] = 15;
	valuesArray = (int *) realloc (valuesArray, 25*sizeof(int));
	valuesArray[20] = 555;
	valuesArray[21] = 777;
	
	for(int i=0; i<25; i++) {
		printf("%d\n", valuesArray[i]);
	}
	
	free(valuesArray);

	return 0;
}
