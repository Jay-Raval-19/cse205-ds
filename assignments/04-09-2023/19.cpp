class Solution {
public:
int remove(ListNode* head, int n)
{
    if(head==NULL)
        return 0;
    
    int steps = remove(head->next, n);
        
    if(steps == n)   
        head->next = head->next->next;
    
    return steps+1;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    
    if(remove(head, n) == n)
        head = head->next;     
    
    return head;
}
};