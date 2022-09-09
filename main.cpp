#include <iostream>
#include <vector>
using namespace std;

// AVERAGE: O(n^2) time | O(1) space
// BEST: O(n^2) time | O(1) space
// WORST: O(n^2) time | O(1) space
vector<int> selectionSort(vector<int> array) {
    if(array.empty()) {
        return array;
    }
    int startIndex = 0;
    while(startIndex < array.size() - 1) {// O(n) time
        int smallestIndex = startIndex;
        for(int i = startIndex + 1; i < array.size(); i++) {// O(n) time NESTED
            if(array[smallestIndex] > array[i]) {
                smallestIndex = i;
            }
        }
        swap(array[startIndex], array[smallestIndex]);// O(1) time | O(1) space
        startIndex++;
    }
    return array;
}

int main() {
    vector<int> input = {8, 5, 2, 9, 5, 6, 3};
    for(int element : input) {
        cout << element << " ";
    }
    cout << endl;
    vector<int> sorted = selectionSort(input);
    for(int element : sorted) {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}
