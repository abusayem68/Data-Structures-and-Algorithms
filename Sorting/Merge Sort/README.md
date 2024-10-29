Merge Sort Algorithm
====================

Merge Sort is a classic divide-and-conquer algorithm used for sorting an array or list of elements. It divides the data into smaller sub-arrays, sorts each, and then merges them back together in sorted order. This algorithm has a time complexity of O(nlog⁡n)O(n \log n)O(nlogn) and is well-suited for handling large datasets.

Table of Contents
-----------------

-   [Introduction](#introduction)
-   [Algorithm Steps](#algorithm-steps)
-   [Complexity Analysis](#complexity-analysis)
-   [Advantages and Disadvantages](#advantages-and-disadvantages)
-   [Examples](#examples)
-   [References](#references)

Introduction
------------

Merge Sort works by recursively splitting an array into halves until each sub-array contains only one element. Then, it merges each pair of sub-arrays in sorted order until the entire array is sorted. This algorithm is stable and particularly efficient for large datasets.

Algorithm Steps
---------------

1.  **Divide** the array into two halves.
2.  **Recursively sort** each half.
3.  **Merge** the sorted halves into a single sorted array.

The merge step involves comparing the smallest elements from each half, appending the smaller to the result array, and repeating until one half is empty, after which any remaining elements from the other half are appended.

Complexity Analysis
-------------------

| Type | Complexity |
| --- | --- |
| **Time Complexity** | O(nlog⁡n)O(n \log n)O(nlogn) |
| **Space Complexity** | O(n)O(n)O(n) |
| **Stable** | Yes |

-   **Time Complexity:** Each split of the array requires log⁡n\log nlogn splits, and each level requires O(n)O(n)O(n) time to merge, yielding O(nlog⁡n)O(n \log n)O(nlogn).
-   **Space Complexity:** Additional space is required to store temporary sub-arrays, making the space complexity O(n)O(n)O(n).

Advantages and Disadvantages
----------------------------

### Advantages

-   **Stable Sorting**: Maintains relative order of equal elements.
-   **Predictable Time Complexity**: Performs consistently with O(nlog⁡n)O(n \log n)O(nlogn) in all cases.
-   **Suitable for Large Data Sets**: Effective for sorting linked lists and large datasets.

### Disadvantages

-   **Space-Intensive**: Requires additional O(n)O(n)O(n) space for temporary arrays.
-   **Not In-Place**: Needs extra memory, making it less ideal for systems with limited memory.



Examples
--------

### Example 1

Given an array `[38, 27, 43, 3, 9, 82, 10]`, Merge Sort will produce `[3, 9, 10, 27, 38, 43, 82]`.

### Example 2

Input: `[1, 4, 2, 8, 5, 7]`\
Output: `[1, 2, 4, 5, 7, 8]`

References
----------

-   Merge Sort - GeeksforGeeks
-   Introduction to Algorithms by Cormen et al.
