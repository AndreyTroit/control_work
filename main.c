#include <iostream>
#include <time.h>

int showEl(const int* ar, int size, int N = 10, int M = 10){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
				std::cout << ar[i*10 + j] << '\t';	
			}
		std::cout << '\n' << std::endl;
	}
	return 0;
}

int getMaxEl(int* ar, int size){
	int res = ar[0];
	int ind = 0;
	for(int i = 0; i < size; i++){
		if(ar[i] > res){
			res = ar[i];
			ind = i;
		}
	}
	return res;
}

void selectionSort(int* ar, int size){
	for(int i = 0; i < size; i++) {
		std::cout << getMaxEl(ar, size - i) << " ";
    	}
	std::cout << std::endl;
}



int main(){ 
	int ar[1000] = {};
	int size = 1000;
	srand(time(nullptr));
	for (int i = 0; i < size; i++){
		ar[i] = rand() % 200;
		std::cout << i << '\t' << ar[i] << '\n' << std::endl;
	}

	int arr[100] = {};
	size = 100;
	srand(time(nullptr));
	for (int i = 0; i < size; i++){
		arr[i] = rand() % 51 + 100;
	}
	showEl(arr, size);
	return 0;
}
