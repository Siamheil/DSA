<h2><a href="https://www.geeksforgeeks.org/problems/pair-the-minimum5535/1">Pair the minimum</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of size 2n, where n is a positive integer, the task is to divide the array into <strong>n</strong> pairs such that the maximum sum of any pair is minimized.</span><br><br><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [5, 8, 3, 9] 
<strong>Output :</strong> 13
<strong>Explanation:
</strong>Possible pairs:
Case 1: (8, 9), (3, 5) → max sum: 17
Case 2: (5, 9), (3, 8) → max sum: 14
Case 3: (3, 9), (5, 8) → max sum: 13
The minimum of these maximum sums is 13. Hence, the answer is 13.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [1, 6, 5, 9]<strong>
Output :</strong> 11</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(nlogn).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size()≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;