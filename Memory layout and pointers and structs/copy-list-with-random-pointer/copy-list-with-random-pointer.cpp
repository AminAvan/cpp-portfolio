/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        Node* curr = head;
        while(curr != NULL){
            Node* clone = new Node(curr->val);
            clone->next = curr->next;

            curr->next = clone;
            curr = clone->next;
        }

        curr = head;
        while(curr != NULL){
            if(curr->random != NULL){
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        curr = head;
        Node* clonedHead = head->next;
        Node* clonedCurr = clonedHead;

        while(curr != NULL){
            curr->next = curr->next->next;
            curr = curr->next;

            if (clonedCurr->next != NULL){
                clonedCurr->next = clonedCurr->next->next;
            }
            clonedCurr = clonedCurr->next;
            
        }

        return clonedHead;
    }
};