#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end) {

    vector<int> temp;

    int left = start;
    int right = mid + 1;

    // Merge two sorted halves
    while(left <= mid && right <= end) {

        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Remaining left part
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Remaining right part
    while(right <= end) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for(int i = 0; i < temp.size(); i++) {
        arr[start + i] = temp[i];
    }
}

void mergeSort(int arr[], int start, int end) {

    if(start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main() {

    int arr[] = {1,9,2,10,6,7,8,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}