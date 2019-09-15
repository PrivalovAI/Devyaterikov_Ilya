#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int *m = (int*)malloc(10 * sizeof(int));
       	int i = 0, j = 0;
	int max = -1, min = 101, sum = 0, smin = 0;
						//Заполнение массива числами
	while(scanf("%d", &m[i++]) == 1)
	{
		if (i % 9 == 0){
		m= realloc(m, (i + 10) * sizeof(int));
		}
	}

	--i;

	for(j = 1; j < i; ++j){			//Перебор всех элементов
		if  (m[0] > 3 || m[j] > 100){	//Проверка на ошибку в вводе
			m[0]=4;
			break;
		}
		if (m[j] > max){
			max = m[j];		//Сохранение макс числа
		}
		if (m[j] < min){
			min = m[j];		//Сохранение мин числа
			smin = sum;
		}
		sum += m[j];			//Сумма всех чисел до текущего
	}
	
	switch(m[0]){				//Вывод в терминал ответа
		case 0:
			printf("%d", max);
			break;
		case 1:
			printf("%d", min);
			break;
		case 2:
			printf("%d", max-min);
			break;
		case 3:
			printf("%d", smin);
			break;
		case 4: 
			printf("Данные некорректны");
			break;
	}
	free(m);
	return 0;
}
