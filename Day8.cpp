/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        size_t size = 0;
        
        ListNode* fFirst = head;
        // count number of elements 
        while(fFirst->next != nullptr) {
            fFirst = fFirst->next;
            ++size;
        }
        
        // errors
        if(size != 0) {
            
        int p = (size + 1)/ 2;
        
        for(int i = 1; i < p+1; ++i)
            head = head->next;
        
        }
        
        return head;
    }
};
