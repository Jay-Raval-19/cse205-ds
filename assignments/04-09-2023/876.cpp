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
    ListNode* middleNode(ListNode* head) {
        ListNode* current= head;
        int count=0;
        while(current!=NULL)
        {
            count++;
            current = current->next;
        }
        int a=count/2;
        ListNode* temp = head;
        count=0;
        while(count!=a)
        {
            temp=temp->next;
            count++;
        }
        return temp;
    }
};