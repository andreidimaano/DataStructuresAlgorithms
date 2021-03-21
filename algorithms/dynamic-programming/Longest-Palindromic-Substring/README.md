### Brute Force

Time Complexity: O(n^3)

Explanation: We create a triple for loop that will check every subset of strings. Using this approach, we end up checking certain substrings more than once, particularly the middle substrings. The first for loop marks the start of the string subset. The second for loop changes the end of the substring we are checking. The third for loop checks the palindrome. We keep track of a maxLength and reset the maxLength accordingly. Each time we reset the maxLength, we also reset the starting index. At the end of the function, we return a substring of the original string using the starting index and the maxLength.