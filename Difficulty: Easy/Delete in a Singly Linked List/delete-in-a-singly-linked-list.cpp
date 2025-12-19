/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if(x==1){
            head=head->next;
            return head;
        }
        if(head==nullptr){
            return nullptr;
        }
        int c=1;
        Node* temp=head;
        while(temp->next!=nullptr && c<x-1){
            c++;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
        
        
    }
};