
using namespace std;

// Struct ListNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this struct.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* rootFirstList, ListNode* rootSecondList) {
        if (rootFirstList == nullptr) {
            return rootSecondList;
        }
        if (rootSecondList == nullptr) {
            return rootFirstList;
        }
        if (rootFirstList->val < rootSecondList->val) {
            rootFirstList->next = mergeTwoLists(rootFirstList->next, rootSecondList);
            return rootFirstList;
        }
        rootSecondList->next = mergeTwoLists(rootFirstList, rootSecondList->next);
        return rootSecondList;
    }
};
