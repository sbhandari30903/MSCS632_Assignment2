// C++: Calculate the sum of an array
#include <iostream>
using namespace std;
 
int calculateSum(int arr[], int size) {
    int total = 0;  // Error: 'o' instead of '0'
    for (int i = 0; i < size; i++) {  // Error: 'o' instead of '0'
        total += arr[i];
    }
    return total;
}
 
int main() {
    int numbers[] = {1, 2, 3, 4, 5}; //Error missing ';'
    int size = sizeof(numbers) / sizeof(numbers[0]);  // Error: 'o' instead of '0'
    int result = calculateSum(numbers, size);
    cout << "Sum in C++ " << result << endl;  // Error: Missing '+' for string concatenation
    return 0;  // Error: 'o' instead of '0'
}