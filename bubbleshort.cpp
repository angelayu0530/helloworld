#include <bits/stdc++.h>
using namespace std;

// An optimized version of Bubble Sort 
void bubbleSort(vector<int>& arr) {
//Best Case O(n) if array is in order
//Worst case: o(n^2) Average:O (n^2)
    int n = arr.size();
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) { // loops throughout every number
        swapped = false; // sets to false automically for every number
        for (int j = 0; j < n - i - 1; j++) { // - the postion
            if (arr[j] > arr[j + 1]) { // if the number first is greater than 2nd, swap it
                swap(arr[j], arr[j + 1]);
                swapped = true; // makes it true so it doesnt break outta the first loop
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }
}

// Function to print a vector
void printVector(const vector<int>& arr) {
    for (int num : arr)
        cout << " " << num;
}

int main() {
    vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
    cout << endl;
    bubbleSort(arr);
    cout << "Sorted array: \n";
    printVector(arr);
    return 0;
}