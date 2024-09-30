#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 30

void ArrangementArray(int Array[], int size);
int BinarySearch(int List[], int n, int key);

int main() {

	int i;
	int key;
	int grade[] = { 30,29,28,27,26,25,24,23,22,21,1,2,3,4,5,6,7,8,9,10,20,19,18,17,16,15,14,13,12,11 };

	printf("정렬중입니다.\n");
	ArrangementArray(grade, SIZE);
	
	for(i=0;i<SIZE;i++)
	printf(" %d ", grade[i]);
	printf("\n");
	printf("찾고싶은 값을 입력하세요 : ");
	scanf_s("%d", &key);
	printf("찾으시는 값의 인덱스는 %d입니다.", BinarySearch(grade, SIZE, key));

	return 0;

}

void ArrangementArray(int Array[], int size) {

	int i, j, temp, least;


	for (int i = 0; i <= (size - 1); i++) {
		
		least = i;

		for (j = i + 1; j < size; j++)
			if (Array[least] > Array[j]) 
				least = j;

				temp = Array[i];
				Array[i] = Array[least];
				Array[least] = temp;
			


		
	}

	return 0;
}




int BinarySearch(int List[], int n, int key) {

	int middle;
	int high, low;
	low = 0;
	high = n - 1;
	
	while (low <= high) {
		printf("[%d %d]\n", low ,high);
		middle = (low + high) / 2;

		if (key == List[middle])
		{
			key = middle;
			return key;
		}
		else if (key < List[middle]) {

			high = middle - 1;
		}
		else
			low = middle + 1;

	}
	return -1;
}