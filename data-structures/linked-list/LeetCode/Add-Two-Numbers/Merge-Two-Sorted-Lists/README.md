<h1>Merge Two Sorted Lists</h1>

<a href="https://leetcode.com/problems/merge-two-sorted-lists/">Leet Code Link</a>

Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

<h2>Questions</h2>

<ul>
    <li>How do you merge in mergesort?</li>
    <li>In mergesort, the merge subroutine contains two while loops at the end to add any numbers that have not already been added, Why is there no loop at the end in this case?</li>
</ul>

<h2>Solution</h2>

In order to merge the two lists, we compare nodes from list1 and list2. Whichever node is smaller, will be added to the new List. Increment the pointer of the list from which we took the node.
