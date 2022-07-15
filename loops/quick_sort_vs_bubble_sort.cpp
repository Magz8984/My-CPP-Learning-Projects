#include <iostream>

using namespace std;

int partition (int arr[], int beg, int end);
int * quickSort(int arr[], int beg, int end);
int * bubbleSort(int arr[], int size);

int main() {
    int array[5] = {3, 1, 4, 5, 2};

    // Quick sort
    int * sorted  =  quickSort(array, 0, 4);


    for(int i = 0; i < 5; i++) {
        cout << sorted[i];
    }

    cout << endl;


    // Bubble Sort

    int * sorted2  = bubbleSort(array, 4);

    for(int i = 0; i < 5; i++) {
        cout << sorted2[i];
    }

    cout << endl;

    return 0;
}

int * bubbleSort(int arr[], int size) { // O(n)
    for(int i = 0; i < size; i++) {
        if(arr[i] > arr[i + 1]) {
            swap( arr[i],arr[i + 1]);
            i= -1;
        }
    }
    return arr;
}

int partition(int arr[], int beg, int end) {
    int pivot = arr[end];
    int pIndex = beg - 1;

    for(int i =  beg; i < end; i++) {
        if(arr[i] < pivot) {
            pIndex++;
            swap(arr[i], arr[pIndex]);
        }
    } 
    
    swap(arr[end], arr[pIndex + 1]);

    // for(int i = 0; i < end; i++) {
    //     cout << arr[i] << endl;
    // }

    return pIndex + 1;
}

int *quickSort(int arr[], int beg, int end) { //  O(nlogn)
    if(beg < end) {
        int pivotIndex = partition(arr, beg, end);
        quickSort(arr, beg, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }
    return arr;
}