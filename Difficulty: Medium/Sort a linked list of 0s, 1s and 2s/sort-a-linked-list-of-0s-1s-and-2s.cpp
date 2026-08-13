/* Node is defined as
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
    Node* segregate(Node* head) {
        Node* zerodummy=new Node(-1);
        Node* onedummy=new Node(-1);
        Node* twodummy=new Node(-1);
        
        Node* zerotail=zerodummy;
        Node* onetail=onedummy;
        Node* twotail=twodummy;
        Node* temp=head;
        while(temp!=nullptr){
            if(temp->data==0){
               zerotail->next=temp;
               zerotail=zerotail->next;
            }
            else if(temp->data==1){
                onetail->next=temp;
                onetail=onetail->next;
            }
            else{
                twotail->next=temp;
                twotail=twotail->next;
            }
            temp=temp->next;
        }
        zerotail->next=(onedummy->next!=nullptr)?onedummy->next:twodummy->next;
        onetail->next=twodummy->next;
        twotail->next=nullptr;
        head=zerodummy->next;
        return head;
    }
};