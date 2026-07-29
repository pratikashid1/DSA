#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int pos = 1;

    cout << "Array before deletions\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    arr.erase(arr.begin() + pos - 1);

    cout << "\nArray After Deletion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}