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
            // Step 1: Count the number of nodes
    int count = 0;
    ListNode* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    // Step 2: Find middle position
    int middle = count / 2;

    // Step 3: Move to middle node
    temp = head;

    for (int i = 0; i < middle; i++) {
        temp = temp->next;
    }

    return temp;
    }
};