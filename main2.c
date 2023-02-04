#include <iostream>
#include <time.h>

int searchMaxEl(int* ar, int size){
    static int i = 0;
    static int count = 0;
    count++;
    static int maxEl = ar[0];
    if(i < size){
        if(ar[i] > maxEl) {
            maxEl = ar[i];
        }
        i++;
        return searchMaxEl(ar, size);
    }
    std::cout << "глубина рекурсии = " << count << std::endl;
    std::cout << maxEl << std::endl;
}

int searchMinEl(int* ar, int size){
    static int i = 0;
    static int count = 0;
    count++;
    static int minEl = ar[0];
    if(i < size) {
        if(ar[i] < minEl) {
            minEl = ar[i];
        }
        i++;
        return searchMinEl(ar, size);
    }
    std::cout << "глубина рекурсии = " << count << std::endl;
    std::cout << minEl << std::endl;
}

void showEl(int* ar, int size){
    for(int i = 0; i < size; i++){
        std::cout << ar[i] << "\t";
    }
    std::cout << '\n' << std::endl;
}

void randomFill(int* ar, int size){
        srand(time(nullptr));
        for (int i = 0; i < size; i++){
                ar[i] = random() % 100;
        }
}

int main(){
    int size = 50;
    int ar[size] = {};
    randomFill(ar, size);
    showEl(ar, size);
    searchMaxEl(ar, size);
    searchMinEl(ar, size);
    return 0;
}
