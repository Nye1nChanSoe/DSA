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

#endif