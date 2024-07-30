#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int random_partition(int arr[], int si, int ei) {
    srand(time(NULL)); // Seed for random number generator
    int randomIndex = rand() % (ei - si + 1) + si; // Generate random index within the range [si, ei]
    swap(arr[randomIndex], arr[ei]); // Swap the randomly chosen element with the last element
    int pivot = arr[ei];
    int i = si - 1;
    for (int j = si; j < ei; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[ei]);
    return i + 1;
}

void quicksort(int arr[], int si, int ei) {
    if (si < ei) {
        int piv = random_partition(arr, si, ei);
        quicksort(arr, si, piv - 1);
        quicksort(arr, piv + 1, ei);
    }
}

int main() {
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    quicksort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
