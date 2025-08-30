<h2><a href="https://www.geeksforgeeks.org/problems/ceil-in-a-sorted-array/1">Ceil in a Sorted Array</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a sorted array&nbsp;<strong>arr[]&nbsp;</strong>and an integer&nbsp;<strong>x</strong>, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x. This element is called the&nbsp;<strong>ceil</strong> of x. If such an element does not exist, return -1.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong>&nbsp;In case of multiple occurrences of ceil of x, return the index of the first occurrence.</span></p>
<p><strong style="font-size: 18px;">Examples</strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2, 8, 10, 11, 12, 19], x = 5
<strong>Output: </strong>2<strong>
Explanation: </strong>Smallest number greater than 5 is 8, whose index is 2.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2, 8, 10, 11, 12, 19], x = 20
<strong>Output: </strong>-1<strong>
Explanation: </strong></span><span style="font-size: 18px;">No element greater than 20 is found. So output is -1.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
<strong>Output: </strong>0<strong>
Explanation: </strong>Smallest number greater than 0 is 1, whose indices are 0 and 1. The index of the first occurrence is 0.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>6</sup><br>1 ≤ arr[i] ≤ 10<sup>6</sup><br>0 ≤ x ≤<sup>&nbsp;</sup>arr[n-1]</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search</code>&nbsp;<code>Sorting</code>&nbsp;<code>Searching</code>&nbsp;<code>Algorithms</code>&nbsp;