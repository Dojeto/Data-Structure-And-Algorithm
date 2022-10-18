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
    int getDecimalValue(ListNode* head) {
       auto temp = head;
       int count=-1,ans=0;
       while(temp!=NULL)
       {
            count ++;
            temp = temp->next;
       }
       temp = head;
       while(temp!=NULL)
       {
            ans += pow(2,count--) * temp->val;
            temp = temp->next;
       }
        return ans;
    }
};
