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
    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=nullptr;
        while(curr!=nullptr){
            Node* front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
            
        }
        return prev;
    }
    Node* addOne(Node* head) {
        Node* temp=head;
        Node* res=reverse(temp);
        int carry=0;
        Node* dummy=new Node(0);
        Node* tail=dummy;
        Node* t1=res;
        bool b=true;
        while(t1!=nullptr){
            int sum=carry;
            if(t1){
                sum+=t1->data;
            }
            if(b==true){
                sum+=1;
                b=false;
            }
            Node* newnode=new Node(sum%10);
            carry=sum/10;
            tail->next=newnode;
            tail=tail->next;
            if(t1){
                t1=t1->next;
            }
        }
        if(carry){
            Node* newnode=new Node(carry);
            tail->next=newnode;
        }
        Node* res1=reverse(dummy->next);
        return res1;
    }
};