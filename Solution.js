
// Function ListNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this function.
function ListNode(val, next) {
    this.val = (val === undefined ? 0 : val);
    this.next = (next === undefined ? null : next);
}

/**
 * @param {ListNode} rootFirstList
 * @param {ListNode} rootSecondList
 * @return {ListNode}
 */
var mergeTwoLists = function (rootFirstList, rootSecondList) {
    if (rootFirstList === null) {
        return rootSecondList;
    }
    if (rootSecondList === null) {
        return rootFirstList;
    }
    if (rootFirstList.val < rootSecondList.val) {
        rootFirstList.next = mergeTwoLists(rootFirstList.next, rootSecondList);
        return rootFirstList;
    }
    rootSecondList.next = mergeTwoLists(rootFirstList, rootSecondList.next);
    return rootSecondList;
};
