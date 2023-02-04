#include <iostream>
#include <time.h>

int showEl(const int* ar, int size, int N = 10, int M = 10){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
				std::cout << ar[i*10 + j] << '\t';
			}
		std::cout << '\n' << std::endl;
	}
	std::cout << '\n' << std::endl;
	return 0;
}

void Swap(int& a, int& b){
    int s = a;
    a = b;
    b = s;
}

void bubbleSort(int* ar, int size){
    	for(int i = 0; i < size; i++){
        	for(int j = 0; j < size - 1 - i; j++){
            		if (ar[j] > ar[j+1]){
                		Swap(ar[j], ar[j+1]);
            		}
        	}
    	}
}

void randomFill(int* ar, int size, int minel, int maxel){
	srand(time(nullptr));
	for (int i = 0; i < size; i++){
		ar[i] = random() % (maxel - minel) + minel;
	}
}

int main(){
	int size = 100;
	int ar[size] = {};
	randomFill(ar, size, 100, 150);
	showEl(ar, size);
	bubbleSort(ar, size);
	showEl(ar, size);
	return 0;
}
