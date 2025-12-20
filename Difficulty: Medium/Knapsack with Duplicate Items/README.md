<h2><a href="https://www.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1">Knapsack with Duplicate Items</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a set of items, each with a weight and a value, represented by the array <strong>wt[]</strong> and&nbsp;<strong>val[]</strong> respectively. Also, a knapsack with a weight limit <strong>capacity</strong>.<br>Your task is to fill the knapsack in such a way that we can get the maximum profit. Return the <strong>maximum profit</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Note:</strong> Each item can be taken any number of times.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> val[] = [1, 1], wt[] = [2, 1], capacity = 3
<strong>Output:</strong> 3
<strong>Explanation: </strong>The optimal choice is to pick the 2nd element 3 times.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>val[] = [10, 40, 50, 70], wt[] = [1, 3, 4, 5], capacity = 8
<strong>Output:</strong> 110
<strong>Explanation: </strong>The optimal choice is to pick the 2nd element and the 4th element.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>val[] = [6, 8, 7, 100], wt[] = [2, 3, 4, 5], capacity = 1
<strong>Output:</strong> 0
<strong>Explanation: </strong>We can't pick any element. Hence, total profit is 0.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ val.size() = wt.size() ≤ 1000<br>1 ≤ capacity ≤ 1000<br>1 ≤ val[i], wt[i] ≤ 100</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;