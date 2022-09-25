/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 /*先反转链表，再从头到尾打印链表*/
class Solution {
public:
    vector<int> printListReversingly(ListNode* head) {
       //反转链表
        vector<int> res;
        if(head==nullptr) return res;//特判
        ListNode* a=head;
        ListNode* b=a->next;
        while(b!=nullptr){
            ListNode* t=b->next;
            b->next=a;
            a=b;
            b=t;
        }
        head->next=nullptr;
        for(auto t=a;t!=nullptr;t=t->next) res.push_back(t->val);
        return res;
    }
};