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
    bool hasCycle(ListNode* head) {
        vector<ListNode *> pointersArray;

        while(head != NULL)
        {
            if(std::find(pointersArray.begin(), pointersArray.end(), head) != pointersArray.end())
            {
                return true;
            }
            pointersArray.push_back(head);
            head = head->next;
        }

        return false;
    }
};
