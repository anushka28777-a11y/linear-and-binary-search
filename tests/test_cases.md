# Test Cases

Run the program and test both algorithms.

| Case | Sorted input array | Target | Expected result |
|---|---|---:|---|
| 1 | 10, 20, 30, 40, 50 | 30 | Found at index 2, position 3 |
| 2 | 10, 20, 30, 40, 50 | 10 | Found at index 0, position 1 |
| 3 | 10, 20, 30, 40, 50 | 50 | Found at index 4, position 5 |
| 4 | 10, 20, 30, 40, 50 | 25 | Not found |
| 5 | 7 | 7 | Found at index 0, position 1 |
| 6 | 7 | 9 | Not found |

## Complexity checks
- Linear search may inspect every element when the target is last or absent.
- Binary search reduces the remaining search interval by about half each iteration.
- Binary search must only be used with data sorted in ascending order for this implementation.
