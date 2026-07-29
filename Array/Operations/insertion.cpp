#include <iostream>
#include <vector>
using namespace std;

int main() {
    //default array 
    vector<int> arr = {10, 20, 30, 40};
  	int element = 50;
    cout << "Array before insertion\n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    // Insert element at the given position
    int pos = 2;
    arr.insert(arr.begin() + pos - 1, element);

    cout << "\nArray after insertion\n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}