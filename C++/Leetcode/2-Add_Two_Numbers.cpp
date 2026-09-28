// tá assim mas funciona --> padrão ListNode Leetcode
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;

        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int num1 = 0;
            if (l1 != nullptr) {
                num1 = l1->val;
                l1 = l1->next;
            }

            int num2 = 0;
            if (l2 != nullptr) {
                num2 = l2->val;
                l2 = l2->next;
            }

            int sum = num1 + num2 + carry;
            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;
        }

        return dummy->next;
    }
};