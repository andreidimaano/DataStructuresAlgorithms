<h1>Remove Nth Node From End of List</h1>

<a href="https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/">Leet Code Link</a>

Given the head of a linked list, remove the nth node from the end of the list and return its head.

<h2>Questions</h2>

<ul>
    <li>What are the two pointers you will be using?</li>
    <li>What do you need to create and assign at the start?</li>
    <li>What is the first step of the algorithm?</li>
    <li>Which node needs to be deleted in respect to the two pointers?</li>
    <li>When do you need to stop the second step of the algorithm?</li>
    <li>What is the final assignment in this problem?</li>
    <li>What will you be returning?</li>
</ul>

<h2>Solution</h2>

1. Create a Dummy Node
2. Assign Dummy->next = head
3. Create fast and slow pointers
4. Advance the fast pointer n steps to ensure a distance of n between fast and slow
5. Advance fast and slow pointers while fast->next is valid
6. Delete prev->next, Assign accordingly
7. return Dummy->next
