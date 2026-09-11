/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* t1 = l1;
       ListNode* t2 = l2;
       ListNode* dummyHead = new ListNode(-1);
       ListNode* curr = dummyHead;
       int num1,num2,sum=0,carry=0;
       while(t1!=NULL || t2!=NULL){
            sum = 0;
            if(t1 != NULL)
            {
                num1 = t1->val;
                sum+=num1;
                t1 = t1->next;
            } 
            if(t2 != NULL) {
                num2 = t2->val;
                sum+=num2;
                t2 = t2->next;
            }
            sum+=carry;
            carry = sum/10;
            ListNode* newNode = new ListNode(sum%10);
            curr->next = newNode;
            curr = newNode;
       }
       if(carry){
            ListNode* newNode = new ListNode(carry);
            curr->next = newNode;
       }
       return dummyHead->next;
    }
        
};