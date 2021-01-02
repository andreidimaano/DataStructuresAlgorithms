<h1>Reverse Linked List II</h1>

<a href="https://leetcode.com/problems/reverse-linked-list-ii/">Leet Code Link</a>

Reverse a linked list from position m to n. Do it in one-pass.

<h2>Questions</h2>

<ul>
    <li>What is the first step in reversing a linked list?</li>
    <li>What are the two variables you need to set up the problem?</li>
    <li>What are the values of these two variables?</li>
    <li>Which value becomes the mth node?</li>
    <li>Which value becomes the nth node?</li>
    <li>What do you do to the constraints(m and n) in the first step of the algorithm?</li>
    <li>What is the condition for the while loop of the first step of this algorithm?</li>
    <li>What two variables make this problem different from a regular linked list reversal?</li>
    <li>Describe how to do the switches in the second part of this algorithm</li>
    <li>What is the condition for the while loop of the second step of this algorithm?</li>
    <li>What do these two variables become in the final step of this algorithm?</li>
    <li>What three variables do you need in order to switch?</li>
</ul>

<h2>Solution</h2>

Step 1: Get to the correct starting position. 

Create two variables: prev, curr. Curr represents the starting position and prev represents the position before, so start at null and head. Since Curr starts at 1, the amount of steps to reach the mth node will be m-1.

Step 2: Switch.

We first need to create two variables that will cache the starting positions, connection and tail. Connection will represent prev and tail will represent curr. Next we need to switch. We need another switch variable, third. This will cache the curr->next node. Switch curr->next to prev then increment prev and curr. Do this n - m + 1 times.

Step 3: Connect.

 We need to connect the chain. Prev can be null or any other index. If Prev is null, Head needs to point to prev. Prev will represent the end of the switch, the nth node. Curr will represent the variable after prev. Tail->next needs to then become curr in order to complete the switch. Imagine a string of blocks flipping over. 