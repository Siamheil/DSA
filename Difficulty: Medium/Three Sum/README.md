<h2><a href="https://www.geeksforgeeks.org/problems/three-sum/1">Three Sum</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an integer array <strong>arr</strong>, return all the <strong>unique </strong>triplets [arr[i], arr[j], arr[k]] such that<strong> i != j, i != k, and j != k, </strong>and <strong>arr[i] + arr[j] + arr[k] == 0.</strong></span></p>
<p><span style="font-size: 14pt;">Note: The triplets must be returned in <strong>sorted </strong>order, the solution vector should also be <strong>sorted</strong>, and the answer must not contain any <strong>duplicate </strong>triplets.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr = [-1,0,1,2,-1,-4]
<strong>Output: </strong>[[-1,-1,2],[-1,0,1]]<strong>
Explanation: </strong>arr[0] + arr[1] + arr[2] = (-1) + 0 + 1 = 0.
arr[1] + arr[2] + arr[4] = 0 + 1 + (-1) = 0.
arr[0] + arr[3] + arr[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr = [0,0,0]
<strong>Output: </strong>[[0,0,0]]<strong>
Explanation: </strong>The only possible triplet sums up to 0.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n<sup>2</sup>)<br><strong>Expected Auxiliary Space:</strong> O(n<sup>2</sup>)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong></span><span style="font-size: 18px;">3 &lt;= arr.length &lt;= 3000<br></span><span style="font-size: 18px;">-10<sup>5</sup> &lt;= arr[i] &lt;= 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Sorting</code>&nbsp;<code>two-pointer-algorithm</code>&nbsp;