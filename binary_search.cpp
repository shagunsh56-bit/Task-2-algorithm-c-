#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}


int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    int result = binarySearch(arr, target);
    cout << "Array: ";
    for(int x : arr) cout << x << " ";
    cout << "\nSearching for: " << target << endl;
    if(result!= -1) cout << "Found at index: " << result << endl;
    else cout << "Not found" << endl;
    return 0;
}
