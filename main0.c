#include <iostream>
#include <time.h>

void randomFill(int* ar, int size, int maxel){
	srand(time(nullptr));
	for (int i = 0; i < size; i++){
		ar[i] = rand() % maxel;
	}
}

void showEl(int* ar, int size){
	for (int i = 0; i < size; i++){
		std::cout << i << '\t' << ar[i] << '\n' << std::endl;
	}
	std::cout << std::endl;
}
int main(){
	int size = 1000;
	int ar[size] = {};
	int maxel = 200;
	randomFill(ar, size, maxel);
	showEl(ar, size);
	return 0;
}
