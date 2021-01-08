<h1>Plus One</h1>

<a href="https://leetcode.com/problems/plus-one/">Leet Code Link</a>

Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

<h2>Questions</h2>

<ul>
    <li>What is the edge case?</li>
    <li>what are the two cases?</li>
</ul>

<h2>Solution</h2>
Loop from the end to the beginning
if the current number is less than nine, increment and return
else the current number is set to 0

in the case of all nines,
set the first element to 1 and push back a 1

