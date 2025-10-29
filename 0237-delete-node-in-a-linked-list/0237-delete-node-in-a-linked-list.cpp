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
    void deleteNode(ListNode* node) {
         node->val = node->next->val;         
        node->next = node->next->next; 
        // if (head= NULL || head->next=NULL)
        // return NULL;

        // Node *temp=head;
        // while(temp->next->next=node)
        // temp=temp->next;
        // temp->next=nullptr;
        // return head;
    }
};