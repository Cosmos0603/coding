#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
void bubbleSort(T arr[], int n){
    bool swapped = true;
    for(int i=0; i<n&&swapped; i++){
        swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
    }
}

#endif
