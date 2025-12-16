<h2><a href="https://www.geeksforgeeks.org/problems/number-of-paths0926/1">Number of paths</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a grid of size&nbsp;<strong>m x n</strong>, the task is to determine the number of distinct paths from the&nbsp;<strong>top-left corner</strong>&nbsp;to the&nbsp;<strong>bottom-right corner</strong>. At each step, one can either move <strong>down</strong> or <strong>right</strong>.&nbsp;</span><span style="font-size: 18px;">Given the integers <strong>m</strong> and <strong>n</strong>, return the <strong>number of unique paths</strong> from the <strong>top-left corner </strong>to the<strong> bottom-right corne</strong>r.</span></p>
<p><span style="font-size: 18px;"><strong>Note: </strong>The test cases are designed such that the answer will always fit within a 32-bit integer.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: m = 3, n = 3
<strong>Output:</strong>&nbsp;6
<strong>Explanation</strong>: Let the given input 3*3 grid is filled as such:
A B C
D E F
G H I
The possible unique paths which exists to reach 'I' from 'A' following above conditions are as follows: ABCFI, ABEHI, ADGHI, ADEFI, ADEHI, ABEFI.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: m = 2, n = 3
<strong>Output</strong>: 3
<strong>Explanation</strong>: Let the given input 2*3 grid is filled as such:
A B C
D E F
The possible unique paths which exists to reach 'F' from 'A' following above conditions are as follows: ABCF, ADEF and ABEF.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: m = 1, n = 4
<strong>Output:</strong> 1
<strong>Explanation</strong>: Let the given input 1*4 grid is filled as such:<br>A B C D <br>The only possible unique path is ABCD.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 ≤ m ≤ 100<br>1 ≤ n ≤&nbsp;100</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Algorithms</code>&nbsp;<code>Dynamic Programming</code>&nbsp;