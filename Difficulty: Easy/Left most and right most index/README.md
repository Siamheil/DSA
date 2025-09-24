<h2><a href="https://www.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x0849/1?page=1&difficulty=Easy&sprint=478542d8f46eb6959432ff3e0b075a47&sortBy=submissions">Left most and right most index</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a sorted array with possibly duplicate elements. The task is to find indexes of first and last occurrences of an element <strong>X</strong> in the given array.</span></p>

<p><strong><span style="font-size:18px">Note: </span></strong><span style="font-size:18px">If the element is not present in the array <strong>return {-1,-1} as pair</strong>.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 9
v[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}
X = 5</span>
<span style="font-size:18px"><strong>Output:</strong>
2 5</span>
<span style="font-size:18px"><strong>Explanation:
</strong>Index of first occurrence of 5 is 2
and index of last occurrence of 5 is 5.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 9
v[] = {1, 3, 5, 5, 5, 5, 7, 123, 125}
X = 7
<strong>Output:</strong>
6 6</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>indexes()</strong>&nbsp;which takes the array <strong>v[]</strong><strong>&nbsp;</strong>and an integer <strong>X&nbsp;</strong>as inputs and returns &nbsp;the first and last occurrence of the element <strong>X</strong>. If the element is not present in the array <strong>return {-1,-1} as pair</strong>.<br>
<br>
Can you solve the problem in expected time complexity?</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(Log(N))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ v[i], X ≤ 10<sup>18</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;