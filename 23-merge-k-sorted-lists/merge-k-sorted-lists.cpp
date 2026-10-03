class Solution {
public:
    struct Compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<ListNode*,
                       vector<ListNode*>,
                       Compare> pq;

        // Put first node of every list into heap
        for (ListNode* head : lists) {
            if (head != nullptr) {
                pq.push(head);
            }
        }

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while (!pq.empty()) {

            // Get smallest node
            ListNode* node = pq.top();
            pq.pop();

            // Add it to answer
            temp->next = node;
            temp = temp->next;

            // Add next node from same list
            if (node->next != nullptr) {
                pq.push(node->next);
            }
        }

        return dummy->next;
    }
};