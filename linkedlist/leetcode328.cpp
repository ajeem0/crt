#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};




class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)   return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* even_head = even;
        while(even!= nullptr&& even->next != nullptr){
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
            
        }

        odd->next = even_head;

        return head;
    }
};


int main(){
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
     ListNode* temp1 = head;
    while(temp1 != nullptr){
        cout<<temp1->val<<" ";
        temp1 = temp1->next;
    }
    cout<<endl;
    head = s.oddEvenList(head);
    ListNode* temp = head;
    while(temp != nullptr){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
