# Python : Calculate the sum of an array
def calculate_sum(arr):
    total = 0  # Error: 'o' instead of '0'
    for num in arr:  # Error: Missing colon ':'
        total += num
    return total

numbers = [1, 2, 3, 4, 5]
result = calculate_sum(numbers)
print("Sum in Python:", result)