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
    ListNode* reverseList(ListNode* head) {

        if (head == nullptr) return nullptr;
        else if(head->next == nullptr) return head;

        ListNode*currentNode;
        currentNode = head;

        ListNode *nextNode = currentNode->next;
        ListNode *tempNode = currentNode;
        currentNode->next = nullptr;
        currentNode = nextNode;

        while(currentNode->next != nullptr)
        {
            nextNode = currentNode->next;
            currentNode->next = tempNode;
            tempNode = currentNode;
            currentNode = nextNode;
        }

        currentNode->next = tempNode;

        return currentNode;
        
    }
};
