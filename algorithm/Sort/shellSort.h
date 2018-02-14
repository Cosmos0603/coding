#ifndef SHELLSORT_H
#define SHELLSORT_H

#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
void shellSort(T arr[], int n){
    int gap = 1;
    while(gap<n/3){
        gap = gap*3+1;
    }

    while(gap>=1){
        for(int i=gap; i<n; i++){
            T temp = arr[i];
            int pos = i;
            int j;
            for(j=i; j>=gap&&temp<arr[j-gap]; j-=gap){
                arr[j] = arr[j-gap];
            }
            arr[j] = temp;
        }
        gap /= 3;
    }
}

#endif
