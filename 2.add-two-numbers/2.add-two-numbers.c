/*
 * @lc app=leetcode id=2 lang=c
 *
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (47.48%)
 * Likes:    35626
 * Dislikes: 7083
 * Total Accepted:    6.5M
 * Total Submissions: 13.7M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order, and each of their nodes
 * contains a single digit. Add the two numbers and return the sum as a linked
 * list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: l1 = [2,4,3], l2 = [5,6,4]
 * Output: [7,0,8]
 * Explanation: 342 + 465 = 807.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: l1 = [0], l2 = [0]
 * Output: [0]
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
 * Output: [8,9,9,9,0,0,0,1]
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * The number of nodes in each linked list is in the range [1, 100].
 * 0 <= Node.val <= 9
 * It is guaranteed that the list represents a number that does not have
 * leading zeros.
 * 
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <math.h>
#include <stddef.h>
#include <stdbool.h>

// struct ListNode {
//     int val;
//     struct ListNode *next;
// };

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    bool carry = false;
    int acum = 0;

    struct ListNode * aux1 = l1;
    struct ListNode * aux2 = l2;

    struct ListNode * answer = NULL;
    struct ListNode ** curr = &answer;

    do
    {
        struct ListNode * new = malloc(sizeof(struct ListNode));
        new->next = NULL;

        if(aux1)
        {
            acum += aux1->val;
            aux1 = aux1->next;
        }
        
        if(aux2)
        {
            acum += aux2->val;
            aux2 = aux2->next;
        }

        if(carry)
        {
            acum += 1;
            carry = false;
        }
        
        if (acum >= 10)
        {
            carry = true;
            acum %= 10;
        }
        
        new->val = acum;
        *curr = new;
        curr = &new->next;

        acum = 0;
    } while(aux1 != NULL || aux2 != NULL || carry);

    return answer;
}
// @lc code=end

