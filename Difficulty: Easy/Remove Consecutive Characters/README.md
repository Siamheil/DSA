<h2><a href="https://www.geeksforgeeks.org/problems/consecutive-elements2306/1">Remove Consecutive Characters</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given a string <strong>s</strong>, consisting of lowercase alphabets. Your task is to remove consecutive duplicate characters from the string.&nbsp;</span></p>
<p><span style="font-size: 14pt;"><strong>Example:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = "aabb"
<strong>Output:  "</strong>ab" 
<strong>Explanation:</strong> <br>The character 'a' at index 2 is the same as 'a' at index 1, so it is removed.
Similarly, the character 'b' at index 4 is the same as 'b' at index 3, so it is removed.
The final string is "ab".
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong>s = "aabaa"
<strong>Output: </strong>"aba"
<strong>Explanation:</strong> <br>The character 'a' at index 2 is the same as 'a' at index 1, so it is removed.
The character 'a' at index 5 is the same as 'a' at index 4, so it is removed.
The final string is "aba".</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = "abcddcba"
<strong>Output: </strong>"abcdcba"
<strong>Explanation:</strong> <br>The character 'd' at index 5 is the same as 'd' at index 4, so it is removed.
No other consecutive duplicates exist.
The final string is "abcdcba".</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ n ≤</span><span style="font-size: 14pt;">&nbsp;10<sup>6</sup><br>All characters in the string are lowercase English alphabets.</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;