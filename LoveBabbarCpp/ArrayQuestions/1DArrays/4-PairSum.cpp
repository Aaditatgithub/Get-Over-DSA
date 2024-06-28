#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

void printPairs(int arr[], int n, int sum)
{
    // Store counts of all elements in map m
    unordered_map<int, int> m;

    // Traverse through all elements
    for (int i = 0; i < n; i++) {
        // Search if a pair can be formed with arr[i].
        int rem = sum - arr[i];
        if (rem == arr[i])
        {
            // Check if the complement is in the map and occurs only once
            if (m.find(rem) != m.end() && m[rem] == 1)
            {
                cout << "(" << rem << ", " << arr[i] << ")" << endl;
            }
        }
        else if (m.find(rem) != m.end() && m.find(arr[i]) == m.end())
        {
            // Check if the complement is in the map and the current element is not in the map
            cout << "(" << rem << ", " << arr[i] << ")" << endl;
        }
        m[arr[i]]++; // Update the map with the current element's count
    }
}

// Driver function to test the above function
int main()
{
    int arr[] = {1, 5, 7, -1, 5, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    printPairs(arr, n, sum);
    return 0;
}