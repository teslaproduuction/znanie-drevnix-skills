#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T* arr, int size) {
    for (size_t i = 0; i < size; ++i)
        for (size_t j = i; j < size; ++j)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
}

int main() {
    cout << "Start" << endl;
    int n = 100000;
    int* village = new int[n];
    for (int i = n - 1; i >= 0; --i)
        village[i] = i + 1;
    bubbleSort(village, n);
    cout << "Done" << endl;
    delete[] village;
    return 0;
}
