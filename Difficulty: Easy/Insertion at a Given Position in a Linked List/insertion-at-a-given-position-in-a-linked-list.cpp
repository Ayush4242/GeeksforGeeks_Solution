/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        Node* newdata=new Node(val);
        if(pos==1){
            newdata->next=head;
            head=newdata;
            return head;
        }
        Node* temp=head;
        int c=1;
        while(temp->next!=nullptr && c<pos-1){
            c++;
            temp=temp->next;
        }
        newdata->next=temp->next;
        temp->next=newdata;
        return head;
        
    }
};