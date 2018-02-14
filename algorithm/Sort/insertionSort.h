#include <iostream>
#include <algorithm>
#include "helper.h"

using namespace std;

template<typename T>
void insertionSort(T arr[], int size){
    for(int i = 1; i < size; i++){
        int pos = i;
        T temp = arr[i];
        while(temp < arr[pos-1] && pos>0){
            arr[pos] = arr[pos-1];
            pos--;
        }
        arr[pos] = temp;
    }
}

//int main(){
    //int n = 100000;
    //int *arr = helper::generateRandomArray(n, 0, n);
    //selectionSort(arr, n);
    //helper::printArray(arr, n);
    //helper::testSort("insertion Sort", insertionSort, arr, n);
    //delete[] arr;

    //return 0;
//}
