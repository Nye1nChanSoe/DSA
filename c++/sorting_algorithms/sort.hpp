#ifndef SORT_HPP
#define SORT_HPP

#include <vector>

/**
 * @brief Bubble sort compares two adjacent elements and swaps them.
 *        Sort elements from the vector in ascending order.
 *
 * Stable: Yes
 *
 * Time Complexity: O(n) -> best
 *                  O(n^2) -> Average
 *                  O(n^2) -> Worst
 *
 * Space Complexity: O(1)
 *
 * @param vec std::vector
 */
void bubble_sort(std::vector<int>& vec);

#endif