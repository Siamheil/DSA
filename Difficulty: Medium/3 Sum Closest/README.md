<h2><a href="https://www.geeksforgeeks.org/problems/3-sum-closest/1">3 Sum Closest</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array&nbsp;<strong>arr[]</strong>&nbsp;and an integer&nbsp;<strong>target</strong>, the task is to find the sum of three integers in&nbsp;<strong>arr[]</strong>&nbsp;such that the sum is closest to&nbsp;<strong>target</strong>.&nbsp;</span></p>
<p><strong><span style="font-size: 18px;">Note:</span></strong><span style="font-size: 18px;"> If multiple sums are closest to target, return the maximum one.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [-1, 2, 2, 4], target = 4
<strong>Output:</strong> 5
<strong>Explanation:</strong> All possible triplets<br></span><span style="font-size: 18px;">[-1, 2, 2], sum = (-1) + 2 + 2 = 3
[-1, 2, 4], sum = (-1) + 2 + 4 = 5
[-1, 2, 4], sum = (-1) + 2 + 4 = 5
[2, 2, 4], sum = 2 + 2 + 4 = 8
Triplet [-1, 2, 2], [-1, 2, 4] and [-1, 2, 4] have sum closest to target, so return the maximum one, that is 5.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 10, 4, 5], target = 10
<strong>Output:</strong> 10
<strong>Explanation:</strong> All possible triplets<br></span><span style="font-size: 18px;">[1, 10, 4], sum = (1 + 10 + 4) = 15<br></span><span style="font-size: 18px;">[1, 10, 5], sum = (1 + 10 + 5) = 16<br></span><span style="font-size: 18px;">[1, 4, 5], sum = (1 + 4 + 5) = 10<br></span><span style="font-size: 18px;">[10, 4, 5], sum = (10 + 4 + 5) = 19&nbsp;<br></span><span style="font-size: 18px;">Triplet [1, 4, 5] has sum = 10 which is closest to target.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>3 ≤ arr.size() ≤ 10<sup>3</sup><br>-10<sup>3</sup>&nbsp;≤ arr[i] ≤ 10<sup>3</sup><br>-10<sup>4</sup>&nbsp;≤ target ≤ 10<sup>4</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<code>Zoho</code>&nbsp;<code>Uber</code>&nbsp;<code>Facebook</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Sorting</code>&nbsp;<code>two-pointer-algorithm</code>&nbsp;<code>Arrays</code>&nbsp;