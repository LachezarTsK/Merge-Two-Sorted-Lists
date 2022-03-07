
public class Solution {

    public ListNode mergeTwoLists(ListNode rootFirstList, ListNode rootSecondList) {
        if (rootFirstList == null) {
            return rootSecondList;
        }
        if (rootSecondList == null) {
            return rootFirstList;
        }
        if (rootFirstList.val < rootSecondList.val) {
            rootFirstList.next = mergeTwoLists(rootFirstList.next, rootSecondList);
            return rootFirstList;
        }
        rootSecondList.next = mergeTwoLists(rootFirstList, rootSecondList.next);
        return rootSecondList;
    }
}

// Class ListNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this class.
class ListNode {

    int val;
    ListNode next;

    ListNode() {}

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}
