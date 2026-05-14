/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        Node* temp=head;
        int c=0;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        if(c<k){
            return -1;
        }
        int rem=c-k;
        temp=head;
        while(rem>0 && temp!=nullptr){
            temp=temp->next;
            rem--;
        }
        return temp->data;
        
        
    }
};