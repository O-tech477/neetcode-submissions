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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == nullptr) return list2;
        else if(list2 == nullptr) return list1;
        
        
        ListNode* currentNode = (list1->val <= list2->val) ? list1 : list2;

        ListNode* head = currentNode;

        if(currentNode == list1) list1 = list1->next;
        else list2 = list2->next;

        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val <= list2->val)
            {
                currentNode->next = list1;
                currentNode = currentNode->next;
                list1 = list1->next;
            }
            else
            {
                currentNode->next =  list2;
                currentNode = currentNode->next;
                list2 = list2->next;
            }
        }

        if(list1 != NULL) currentNode->next = list1;
        else currentNode->next = list2;


        return head;
        
        
    }
};
