<h1>Add Two Numbers</h1>

<a href="https://leetcode.com/problems/add-two-numbers/">Leet Code Link</a>

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

<h2>Questions</h2>

<ul>
    <li>What are two possible solutions to this problem?</li>
    <li>What makes one of the solutions worse than the other?</li>
    <ul>
        <li>What are the time complexities for each solution?</li>
    </ul>
    <ul>
        <li>What are the space complexities for each solution?</li>
    </ul>
    <li>Why do you use a dummy head in solution2?</li>
</ul>



<h2>Solution<h2>

Initial Solution: solution1.cpp only works if the numbers are small.We instead want to approach the problem like a full adder circuit.

Full Adder Circuit Solution: A Full Adder Circuit takes in 3 inputs: operand1, operand2, carry. It produces 2 outputs: result, carry. 