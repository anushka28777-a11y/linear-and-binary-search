# Linear and Binary Search in C

A beginner-friendly C project demonstrating two searching algorithms: **Linear Search** and **Binary Search**.

## Project objectives
- Understand how searching works in an array.
- Implement and compare linear and binary search.
- Show the position of a found element, or report when it is absent.
- Understand the time and space complexity of each algorithm.

## Project structure
```text
linear-and-binary-search/
├── README.md
├── ContributionLog.md
├── Makefile
├── .gitignore
├── include/
│   └── search.h
├── src/
│   ├── main.c
│   ├── linear_search.c
│   └── binary_search.c
└── tests/
    └── test_cases.md
```

## Requirements
- A C compiler such as GCC
- Make (optional, for using the Makefile)

## Compile and run

From the repository root, run:

```bash
make
./search_demo
```

On Windows, if you are using GCC through MinGW, run:

```bash
gcc -Wall -Wextra -std=c11 -Iinclude src/main.c src/linear_search.c src/binary_search.c -o search_demo.exe
search_demo.exe
```

You can also compile without Make on Linux/macOS:

```bash
gcc -Wall -Wextra -std=c11 -Iinclude src/main.c src/linear_search.c src/binary_search.c -o search_demo
./search_demo
```

## Algorithms

### 1. Linear Search
Checks array elements one by one from the beginning. It works with sorted and unsorted arrays.

- Best time: **O(1)**
- Average time: **O(n)**
- Worst time: **O(n)**
- Extra space: **O(1)**

### 2. Binary Search
Repeatedly halves the search range by checking the middle element. **The array must be sorted in ascending order.**

- Best time: **O(1)**
- Average time: **O(log n)**
- Worst time: **O(log n)**
- Extra space: **O(1)** for this iterative implementation

## Example
For the array `{10, 20, 30, 40, 50}` and target `40`, both algorithms return index `3`, which is position `4` when counted from 1.

## Important note
The program uses **zero-based indexing** internally. Binary search is run on a sorted array. If you change the array, keep it sorted before using binary search.

## Testing
See [tests/test_cases.md](tests/test_cases.md) for suggested cases.

## Learning outcomes
After completing this project, you should be able to explain each algorithm, write its steps, compare complexity, and identify when binary search can be used.
