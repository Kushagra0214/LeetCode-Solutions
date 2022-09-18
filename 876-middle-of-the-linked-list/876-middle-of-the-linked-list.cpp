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
        ListNode* temp = head;
        int length = 0;
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }
        ListNode* temp2 = head;
        int middle = (length+1)/2;
        if(length%2==0){
            middle++;
        }
        while(temp2!=NULL){
            if(middle==1){
                break;
            }
            else{
                middle--;
            }
            temp2 = temp2->next;
        }
        return temp2;
    }
};