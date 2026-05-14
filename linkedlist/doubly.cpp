#include<iostream>
using namespace std;

class Node{
    public:
    int data;//Store the value of the node
    Node* next;//Store the address of the next node
    Node* prev;//Store the address of the previous node

    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }   
};



int main(){
    Node* head  = new Node(1);//address return karta hai
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    cout<<head->data<<"<->"<<head->next->data<<"<->"<<head->next->next->data<<endl;//1<->2<->3
    return 0;
}