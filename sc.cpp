#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Ask user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Assume the first element is the smallest
    int smallest = arr[0];

    // Loop through the array to find the smallest
    for (int i = 1; i < n; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Print the smallest number
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
