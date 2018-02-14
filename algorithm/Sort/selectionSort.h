#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <iostream>
#include <algorithm>
#include "helper.h"

using namespace std;

template<typename T>
void selectionSort(T arr[], int size){
    for(int i = 0; i < size; i++){
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

//int main(){
    //int n = 100000;
    //int *arr = helper::generateRandomArray(n, 0, n);
    //selectionSort(arr, n);
    //helper::printArray(arr, n);
    //helper::testSort("Selection Sort", selectionSort, arr, n);
    //delete[] arr;

    //return 0;
//}
#endif
