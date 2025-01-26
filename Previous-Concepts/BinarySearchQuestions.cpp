#include <iostream>
using namespace std;

int main() {
    int nums[] = {-1, 2, 3, 4, 5, 6, 7, 8, 10, 13,13,13}; // Sorted array
    int target = 13; // Target element to search for
    int n = sizeof(nums) / sizeof(nums[0]); // Number of elements in array
    int st = 0, end = n - 1; // Start and end pointers
    int index = -1; // Variable to store the first occurrence of the target

    // Binary search loop
    while (st <= end) {
        int mid = st + (end - st) / 2; // Avoid overflow in (st + end) / 2
        if (target > nums[mid]) {
            st = mid + 1; // Move to the right half
        } else if (target < nums[mid]) {
            end = mid - 1; // Move to the left half
        } else { 
            // If nums[mid] == target, store the index and continue searching left
            index = mid;
            st = mid + 1; // Move to the left half to find the first occurrence
        }
    }

    // Output the result
    if (index != -1) {
        cout << "Target found at index: " << index << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}