<h1>Valid Parentheses</h1>

<a href="https://leetcode.com/problems/valid-parentheses/">Leet Code Link</a>

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

<h2>Questions</h2>

<ul>
    <li>When do you push to the stack?</li>
    <li>When do you pop?</li>
    <li>What do you return at the end?</li>
</ul>








<h2>Questions</h2>

<ul>
    <li>How many pointers for this problem?</li>
    <li>Will you be using limits.h?</li>
    <li>What variables do you need to instantiate?</li>
    <li>What directive do you need to use?</li>
    <li>What sub routine do you need to write?</li>
    <li>How will you pass in your variables?</li>
    <li>What's the first operation on the array?</li>
    <li>What's the first condition of the inner if?</li>
    <li>How do you stop duplicates?</li>
</ul>

<h2>Solution</h2>

<ol>
    <li>sort array</li>
    <li>loop through array</li>
    <li>check if i = 0 or the current element != previous element</li>
        <ul>
            <li>this step helps prevent duplicates</li>
        </ul>
    <li>create subroutine, pass by reference</li>
        <ul>
            <li>create a left and right window</li>
            <li>loop while left < right</li>
            <li>create sum</li>
            <li>check that sum is == 0</li>
            <li>push onto array and check for duplicates</li>
        </ul>
</ol>




