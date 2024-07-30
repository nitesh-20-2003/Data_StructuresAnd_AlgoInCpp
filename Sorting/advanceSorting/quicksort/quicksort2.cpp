#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int partition(vector<int>& arr, int si, int ei) {
    int count = 0;
    int pivotelement = arr[si];
    for(int i = si; i <= ei; i++) {
        if(i == si) continue;
        if(arr[i] <= pivotelement) count++;
    }
    int pivot = count + si;
    swap(arr[si], arr[pivot]);
    int i = si;
    int j = ei;
    while((i < pivot) && (j > pivot)) {
        if(arr[i] <= arr[pivot]) i++;
        if(arr[j] > arr[pivot]) j--;
        else if(arr[i] > arr[pivot] && arr[j] <= arr[pivot]) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivot;
}

void quicksort(vector<int>& arr, int si, int ei) {
    if(si >= ei) return;
    int piv = partition(arr, si, ei);
    quicksort(arr, si, piv - 1);
    quicksort(arr, piv + 1, ei);
}

int main() {
    ofstream quicki("quiki2.csv");
    quicki << "n,average_time" << endl;
    for(int i = 1; i <= 100; i++) {
        int n = i * 100;
        vector<int> arr(n);
        srand(time(0));
        double total_duration = 0;
        int numTrials = 2000; // Number of trials for averaging
        for(int t = 0; t < numTrials; ++t) {
            for(int j = 0; j < n; j++) {
                arr[j] = rand() % (20 * n);
            }
            clock_t start_time = clock();
            quicksort(arr, 0, n - 1);
            clock_t end_time = clock();
            double duration = double(end_time - start_time) * 1000 / double(CLOCKS_PER_SEC);
            total_duration += duration;
        }
        double average_duration = total_duration / numTrials;
        quicki << n << "," << average_duration << endl;
    }
    quicki.close();
    return 0;
}
