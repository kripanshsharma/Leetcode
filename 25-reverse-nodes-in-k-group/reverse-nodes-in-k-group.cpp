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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *slow = head , *fast = head;
        int cnt = 0 ; stack<int> st ;

        while(fast){
            cnt++;
            st.push(fast->val);
            if(cnt == k){
                while(!st.empty()){
                    slow->val = st.top() ; st.pop();
                    slow =slow->next;
                }
                cnt = 0 ;
            }
            fast = fast->next;
        }
        return head;
    }
};