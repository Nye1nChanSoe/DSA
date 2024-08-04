#ifndef SORT_HPP
#define SORT_HPP

#include <vector>

/**
 * @brief Bubble sort compares two adjacent elements and swaps them.
 *
 * - Stable: Yes
 *
 * - In-place: Yes
 *
 * Time Complexity: O(n) -> best
 *                  O(n^2) -> Average
 *                  O(n^2) -> Worst
 *
 * Space Complexity: O(1)
 *
 * @note Simple and intuitive, used for small datasets or educational purposes to
 *       illustrate the concept of sorting. Rarely used in production due to inefficiency.
 *
 * @param vec std::vector
 */
void bubble_sort(std::vector<int>& vec);

/**
 * @brief Selection sort finds the smallest or largest element in the array
 *        and move them to the sorted part repeatedly.
 *
 * - Stable: No
 *
 * - In-place: Yes
 *
 * Time Complexity: O(n^2) -> best
 *                  O(n^2) -> Average
 *                  O(n^2) -> Worst
 *
 * Space Complexity: O(1)
 *
 * @note Good for small datasets. Easy to implement but generally 
 *       outperformed by more efficient algorithms
 *
 * @param vec std::vector
 */
void selection_sort(std::vector<int>& vec);

/**
 * @brief Insertion sort works by building a sorted array
 *        comparing one element at a time with unsorted array
 *
 * - Stable: Yes
 *
 * - In-place: Yes
 *
 * Time Complexity: O(n) -> best
 *                  O(n^2) -> Average
 *                  O(n^2) -> Worst
 *
 * Space Complexity: O(1)
 * 
 * @note Efficient for small datasets and nearly sorted data.
 *       Often used in practice for small parts of more complex algorithms
 *       (like hybrid sorting algorithms).
 *
 * @param vec std::vector
 */
void insertion_sort(std::vector<int>& vec);

/**
 * @brief Merge sort works by following the divide and conquer algorithm
 *        Divides the array into halves recursively, and merged the sorted halves
 *        recursively back and form the sorted array
 *
 * - Stable: Yes
 *
 * - In-place: No
 *
 * Time Complexity: O(n log n) -> best
 *                  O(n log n) -> Average
 *                  O(n log n) -> Worst
 *
 * Space Complexity: O(n)
 * 
 * @note Stable sorting algorithm, useful for large datasets and external sorting
 *
 * @param vec std::vector
 */
void merge_sort(std::vector<int>& vec);

/**
 * @brief Quick sort works by following the divide and conquer algorithm
 *        Selects a pivot element, partitions the array into left and right
 *        left side elements smaller than or equal to the pivot and right side elements larger
 *        than the pivot element. And recursively sorts the subarrays in-place.
 *
 * - Stable: No
 *
 * - In-place: Yes
 *
 * Time Complexity: O(n log n) -> best
 *                  O(n log n) -> Average
 *                  O(n^2) -> Worst
 *
 * Space Complexity: O(log n)
 *
 * @note Very efficient for large datasets. Commonly used in practice
 *       despite its worst-case scenario due to its average-case performance.
 *       The choice of pivot and partitioning scheme can mitigate the worst-case.
 *
 * @param vec std::vector
 * @param start starting index
 * @param end ending index
 */
void quick_sort(std::vector<int>& vec, int start, int end);

/**
 * @brief Counting sort creates a count array to count the occurrences of each element
 *        to determine their position in the sorted output. The original array is
 *        traversed in reverse to maintain the stability of the order of elements.
 *
 * - Stable: Yes
 *
 * - In-place: No
 *
 * Time Complexity: O(n + k) -> best
 *                  O(n + k) -> Average
 *                  O(n + k) -> Worst
 *
 * Space Complexity: O(n + k)
 *
 * @note The range of the input values (k) is not significantly larger than the number of
 *       elements (n). Specifically, counting sort is most efficient when k = O(n)
 *       Input values should be non-negative integers. If the values are in a narrow range,
 *       counting sort is highly efficient.
 *       The distribution can be arbitrary as long as the range is not excessively large 
 *       relative to the number of elements.

 *
 * @param vec std::vector
 */
void counting_sort(std::vector<int>& vec);

/**
 * @brief Radix sort also known as base sort, processes the digits of numbers
 *        starting from the least significant digit (LSD) to most significant digit (MSD)
 *        Sorts the numbers by each digit, using a stable sorting algorithm like counting sort
 *
 * - Stable: Yes
 *
 * - In-place: No
 *
 * Time Complexity: O(d⋅(n+b)) -> best
 *                  O(d⋅(n+b)) -> Average
 *                  O(d⋅(n+b)) -> Worst
 *
 * Space Complexity: O(n + b)
 *
 * @note Best for the number of digits (d) in the largest number is small
 *       compared to the number of elements (n). (b) is the base of the number system.
 *       Input values can be positive or negative integers, strings,
 *       or any keys that can be broken down into a series of digits.
 *
 * @param vec std::vector
 * @param base base of the number system eg: 10 for decimal
 */
void radix_sort(std::vector<int>& vec, unsigned int base);

#endif