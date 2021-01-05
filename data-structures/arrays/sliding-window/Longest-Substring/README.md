<h1>Longest Substring Without Repeating Characters</h1>

<a href="https://leetcode.com/problems/longest-substring-without-repeating-characters/">Leet Code Link</a>

Given a string s, find the length of the longest substring without repeating characters.

<h2>Questions</h2>

<ul>
    <li>How many pointers for this problem?</li>
    <li>Will you be using limits.h?</li>
    <li>When do you increase the count?</li>
    <li>When do you reset the count?</li>
    <li>What variables do you need to instantiate?</li>
    <li>What directive do you need to use?</li>
</ul>

<h2>Solution</h2>
Create two pointers
Loop through the string
remove the left characters until the right character is no longer in the set which decreases the window
insert right pointer into the set
calculate max



