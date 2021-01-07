<h1>Minimum Window Substring</h1>

<a href="https://leetcode.com/problems/minimum-window-substring/">Leet Code Link</a>

Given two strings s and t, return the minimum window in s which will contain all the characters in t. If there is no such window in s that covers all characters in t, return the empty string "".

Note that If there is such a window, it is guaranteed that there will always be only one unique minimum window in s.

<h2>Questions</h2>

<ul>
    <li>What pointers you instantiate in the beginning?</li>
    <li>How many hashtables do you need?</li>
    <li>When do you move each pointer?</li>
    <li>What variable do you need to instantiate?</li>
    <li>What directive do you need to use?</li>
    <li>What library do you use for INT_MAX, INT_MIN?</li>
    <li>Will you use INT_MAX or INT_MIN?</li>
</ul>

<h2>Solution</h2>

<ol>
    <li>Create 2 hashtables:</li>
        <ul>
            <li>requiredCharMap char -> freq</li>
            <li>currentCharMap char -> freq</li>
        </ul>
    <li>Create 2 pointers:<li>
        <ul>
            <li>left</li>
            <li>right</li>
        </ul>
    <li>Create 2 frequency variables:<li>
        <ul>
            <li>total</li>
            <li>current</li>
        </ul>        
    <li>Create 2 window comparison variables</li>
        <ul>
            <li>minWindowSize</li>
            <li>minWindowString</li>
        </ul>
    <li>Loop until right is less than size</li>
        <ul>
            <li>update currentCharMap</li>
            <li>check if character is required</li>
            <li>check if frequency is met, update current if needed</li>
        </ul>
    <li>Loop if left <= right and freq are the same</li>
        <ul>
            <li>update min window variables</li>
            <li>decrease left frequency</li>
            <li>check if character is required</li>
            <li>check if frequency is met, update current if needed</li>
        </ul>
</ol>





