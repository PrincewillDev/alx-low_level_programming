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
