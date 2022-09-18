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
        ListNode* temp = head;
        int len = 1;
        while(temp->next!=NULL){
            len++;
            temp = temp->next;
        }
        int req = len - n + 1;
        if(req==1){
            head = head->next;
        } else {
            int i = 2;
            temp = head;
            while(i<req){
                i++;
                temp = temp->next;
            }
            temp->next = temp->next->next;
        }
        return head;
    }
};