Binary Search
=============

Binary Search is an efficient algorithm for finding an element in a sorted array or list by repeatedly dividing the search interval in half. This method significantly reduces the number of comparisons, making it much faster than a linear search for large datasets.

How Binary Search Works
-----------------------

1.  **Define the Search Range:** Start with the left (`l`) and right (`r`) pointers pointing to the beginning and end of the list.
2.  **Find the Midpoint:** Calculate the middle element in the current range. If the target element matches this midpoint, the search is complete.
3.  **Narrow the Range:**
    -   If the target element is less than the midpoint, move the right pointer to `mid - 1`, discarding the upper half of the search range.
    -   If the target element is greater than the midpoint, move the left pointer to `mid + 1`, discarding the lower half of the search range.
4.  **Repeat Until Found or Range is Empty:** Continue adjusting the search range until the target element is found or the range becomes empty (left pointer exceeds the right pointer).

Complexity
----------

-   **Time Complexity:** O(log⁡n)O(\log n)O(logn)
-   **Space Complexity:** O(1)O(1)O(1) for iterative, O(log⁡n)O(\log n)O(logn) for recursive (due to call stack)


Key Points
----------

-   **Sorted List Requirement:** Binary search only works on lists sorted in ascending or descending order.
-   **Efficiency:** Binary search is much faster than linear search, especially for large arrays.
-   **Iterative or Recursive:** Binary search can be implemented iteratively or recursively.

Applications
------------

Binary search is widely used in situations where searching in sorted data is common:

-   **Database Indexing**
-   **Finding elements in sorted arrays**
-   **Efficiently solving mathematical or computational problems where a range can be defined (e.g., root-finding)**

Binary search is foundational in computer science due to its efficiency and is often used in conjunction with other algorithms for optimized solutions.