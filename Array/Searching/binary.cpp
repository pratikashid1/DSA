#include <iostream>
#include <vector>
using namespace std;

int binarySearch (vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] < x) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main () {
    vector<int> arr = {10, 20, 30, 40, 50};
    int x = 40;

    int result = binarySearch(arr, x);

    if (result == -1) {
        cout << "Element not found";
    } else {
        cout << "Element found at: " << result;
    }

    return 0;
}