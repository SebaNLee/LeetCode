/*
 * @lc app=leetcode id=3 lang=c
 *
 * [3] Longest Substring Without Repeating Characters
 *
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
 *
 * algorithms
 * Medium (38.06%)
 * Likes:    43837
 * Dislikes: 2150
 * Total Accepted:    8.6M
 * Total Submissions: 22.7M
 * Testcase Example:  '"abcabcbb"'
 *
 * Given a string s, find the length of the longest substring without duplicate
 * characters.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: s = "abcabcbb"
 * Output: 3
 * Explanation: The answer is "abc", with the length of 3. Note that "bca" and
 * "cab" are also correct answers.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "bbbbb"
 * Output: 1
 * Explanation: The answer is "b", with the length of 1.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: s = "pwwkew"
 * Output: 3
 * Explanation: The answer is "wke", with the length of 3.
 * Notice that the answer must be a substring, "pwke" is a subsequence and not
 * a substring.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 0 <= s.length <= 5 * 10^4
 * s consists of English letters, digits, symbols and spaces.
 * 
 * 
 */

// @lc code=start
int lengthOfLongestSubstring(char * s)
{
    int maxLength = 0;
    int currLength = 0;
    bool charMap[256] = {false};

    char * iter = s;
    char * auxDelete = s;

    while(*iter)
    {
        while(charMap[*iter] == true)
        {
            charMap[*auxDelete] = false;
            auxDelete++;
        }

        charMap[*iter] = true;

        int currLength = iter - auxDelete + 1;

        if(currLength > maxLength)
        {
            maxLength = currLength;
        }
        

        iter++;
    }

    return maxLength;
}
// @lc code=end

