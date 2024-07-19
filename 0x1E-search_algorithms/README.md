# C - Search Algorithms

## Linear search

**Mandatory**

Write a function that searches for a value in an array of integers using the Linear search algorithm.

**Prototype:** `int linear_search(int *array, size_t size, int value);`

- `array` is a pointer to the first element of the array to search in.
- `size` is the number of elements in the array.
- `value` is the value to search for.

Your function must return the first index where the value is located. If the value is not present in the array or if the array is NULL, your function must return -1.

Every time you compare a value in the array to the value you are searching, you have to print this value (see example below).

## Binary Search Function

**Prototype:** `int binary_search(int *array, size_t size, int value);`

**Parameters:**
- `array`: Pointer to the first element of the array.
- `size`: Number of elements in the array.
- `value`: Value to search for.

**Return Value:**
- Index where the value is located. Returns -1 if not found or if array is NULL.

**Assumptions:**
- Array is sorted in ascending order.
- Value appears only once in the array.

**Print Statements:**
- Prints the array being searched at the beginning and when searching a subarray.
