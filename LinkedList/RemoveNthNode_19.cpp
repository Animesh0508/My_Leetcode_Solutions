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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*curr = head; int c =0;
        ListNode*loop = head;
        while(curr!=nullptr)
        {
          curr = curr->next;
          c++;
        }
        
        for(int i =1;i<c-n;i++)
        {
           loop = loop->next;
        }
        if(c == 1 && n ==1)
        {
          return nullptr;
        }
        if(c-n ==0)
        {
            ListNode*temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
        ListNode*temp = loop->next;
        loop->next=loop->next->next;
        delete temp;
        }

        return head;
    }
};
