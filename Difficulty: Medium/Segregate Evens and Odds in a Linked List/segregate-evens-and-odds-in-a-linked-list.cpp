// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head) {
        Node* evenhead=nullptr;
        Node* eventail=nullptr;
        Node* oddhead=nullptr;
        Node* oddtail=nullptr;
        Node* temp=head;
        while(temp!=nullptr){
            if(temp->data%2==0){
                if(evenhead==nullptr){
                    evenhead=temp;
                    eventail=temp;
                }
                else{
                    eventail->next=temp;
                    eventail=eventail->next;
                }
            }
            else{
                if(oddhead==nullptr){
                    oddhead=temp;
                    oddtail=temp;
                }
                else{
                    oddtail->next=temp;
                    oddtail=oddtail->next;
                }
            }
            temp=temp->next;
        }
        eventail->next=oddhead;
        oddtail->next=nullptr;
        return evenhead;
    }
};