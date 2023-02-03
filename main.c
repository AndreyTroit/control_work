#include <iostream>
#include <time.h>


int main(){
	int ar[1000] = {};
	int size = 1000;
	srand(time(nullptr));
	for (int i = 0; i < size; i++){
		ar[i] = rand() % 200;
		std::cout << i << '\t' << ar[i] << '\n' << std::endl;
	}
	return 0;
}


