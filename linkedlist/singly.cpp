#include<iostream>
using namespace std;

class Node{
    public:
    int data;//Store the value of the node
    Node* next;//Store the address of the next node

    Node(int val){
        data = val;
        next = nullptr;
    }
};

// void insertAtTail(Node* &head, int val){
//     Node* n = new Node(val);
//     if(head == NULL){
//         head = n;
//         return;
//     }

//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

int main(){
    Node* head  = new Node(1);//address return karta hai
    head->next = new Node(2);
    head->next->next = new Node(3);
    cout<<head->data<<"->"<<head->next->data<<"->"<<head->next->next->data<<endl;//1->2->3
    // cout<<head->next<<endl;
    // cout<<head->next->data<<endl;
    // cout<<head->next->next<<endl;
    // cout<<head->next->next->data<<endl;
    // cout<<head->next->next->next<<endl;

    // insertAtTail(head,1);
    // insertAtTail(head,2);
    // insertAtTail(head,3);
    // insertAtTail(head,4);
    // display(head);
    return 0;
}