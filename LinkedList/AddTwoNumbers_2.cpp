class Solution {
public:
    long long revNum(ListNode* l) {   // 🔹 int → long long
        vector<int> vec;
        while (l) {
            vec.push_back(l->val);
            l = l->next;
        }

        long long sum = 0;           // 🔹 int → long long
        for (int i = vec.size() - 1; i >= 0; i--) {
            sum = sum * 10 + vec[i];
        }
        return sum;
    }

    ListNode* reverseNumberToList(long long n) { // 🔹 int → long long
        if (n == 0) return new ListNode(0);

        ListNode *head = nullptr, *tail = nullptr;
        while (n) {
            int d = n % 10;
            ListNode* node = new ListNode(d);
            if (!head) head = tail = node;
            else tail = tail->next = node;
            n /= 10;
        }
        return head;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        long long res1 = revNum(l1);   // 🔹 long long
        long long res2 = revNum(l2);   // 🔹 long long

        return reverseNumberToList(res1 + res2);
    }
};
