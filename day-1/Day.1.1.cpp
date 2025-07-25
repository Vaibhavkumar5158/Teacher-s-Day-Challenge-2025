/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        //Position  = 1 and LL single node
        while(head != NULL && head->val ==  val){
            ListNode*temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
     // If LL becomes empty   it’s possible that the entire list has been deleted
        if(head == NULL){
            return NULL;
        }

        // delete any middle and last node 
      // setup ->  current/ previous/forward
        ListNode*previous = head;
        ListNode*current = previous->next;
       

        while(current != NULL){
            if(current->val == val){
                ListNode*forward = current->next;  // isse yaha isliye nikala h jab curr null na hoto
                // update Links
                current->next == NULL;
                previous->next = forward;
                // current is islolated now
                delete current;

                current = forward;
            }
            else{
                previous = current;
                current = current->next;
            }
        }
        return head;
    }
};

// 203. Remove Linked List Elements

// L1 LL -14.53
// approach  -- same  logic jo bhaiya ne bataya h delete ka 
//  total handle 3 cases 
// 1. agar sabse pehli node delete hui to usse delete karne ke liye (//Position  = 1 and LL single node)
//2. agar LL empty ho gai to isliye usse niche likka h
//3.  // delete any middle and last node  - take 3 (previous , curr ,forward)