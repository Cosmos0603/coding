#include <iostream>
#include "selectionSort.h"
#include "insertionSort.h"
#include "bubbleSort.h"
#include "shellSort.h"
#include "helper.h"

using namespace std;

int main(){
    int n = 10000;
    int *arr1 = helper::generateRandomArray(n, 0, n);
    int *arr2 = helper::copyArray(arr1, n);
    int *arr3 = helper::copyArray(arr1, n);
    int *arr4 = helper::copyArray(arr1, n);
    helper::testSort("Selection Sort", selectionSort, arr1, n);
    helper::testSort("Insertion Sort", insertionSort, arr2, n);
    helper::testSort("Bubble Sort", bubbleSort, arr3, n);
    helper::testSort("shell Sort", shellSort, arr4, n);
    
    delete[] arr1, arr2, arr3, arr4;

    return 0;
}
