/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 *
 * https://leetcode.com/problems/palindrome-number/description/
 *
 * algorithms
 * Easy (59.99%)
 * Likes:    15256
 * Dislikes: 2895
 * Total Accepted:    7.4M
 * Total Submissions: 12.4M
 * Testcase Example:  '121'
 *
 * Given an integer x, return true if x is a palindrome, and false
 * otherwise.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: x = 121
 * Output: true
 * Explanation: 121 reads as 121 from left to right and from right to left.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: x = -121
 * Output: false
 * Explanation: From left to right, it reads -121. From right to left, it
 * becomes 121-. Therefore it is not a palindrome.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: x = 10
 * Output: false
 * Explanation: Reads 01 from right to left. Therefore it is not a
 * palindrome.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * -2^31 <= x <= 2^31 - 1
 * 
 * 
 * 
 * Follow up: Could you solve it without converting the integer to a string?
 */

// @lc code=start
#include <stdio.h>

#define BUFFER_SIZE 40

bool isPalindrome(int x) {

    if(x < 0)
    {
        return false;
    }

    char buffer[BUFFER_SIZE];

    int dim = sprintf(buffer, "%d", x);

    for(int i = 0; i < dim / 2; i++)
    {
        if(buffer[i] != buffer[dim - 1 - i])
        {
            return false;
        }
    }

    return true;
}
// @lc code=end

