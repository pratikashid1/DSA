#include <iostream>
#include <vector>

using namespace std;

int search (vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int x = 30;

    int res = search(arr, x);
    if (res == -1) {
        cout << "Element din't exits";
    } else {
        cout << "Element present at: " << res;
    }

    return 0;
}