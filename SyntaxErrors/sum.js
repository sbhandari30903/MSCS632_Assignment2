// JavaScript : Calculate the sum of an array
function calculateSum(arr) {
    let total = 0;  // Error: 'o' instead of '0'
    for (let num of arr){  // Error: Missing curly brace '{'
        total += num;
    }
    return total;
}
 
let numbers = [1, 2, 3, 4, 5];
let result = calculateSum(numbers);  // Error: Space in function name
console.log("Sum in JavaScript:", result);