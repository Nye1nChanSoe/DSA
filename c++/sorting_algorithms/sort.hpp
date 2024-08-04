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

#endif