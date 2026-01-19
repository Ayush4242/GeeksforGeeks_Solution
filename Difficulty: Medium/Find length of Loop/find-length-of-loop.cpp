/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        if(head==nullptr || head->next==nullptr){
            return 0;
        }
        Node* slow=head;
        Node* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                slow=slow->next;
                int c=1;
                while(slow!=fast){
                    slow=slow->next;
                    c++;
                }
                return c;
                
            }
            
        }
        return 0;
        
    }
};







