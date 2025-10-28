<h2><a href="https://www.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1">Count BST nodes that lie in a given range</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Binary Search Tree (BST) and a range <strong>l-h (inclusive)</strong>, your task is to return the number of nodes in the BST whose value lie in the given range. </span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> root[] = [10, 5, 50, 1, N, 40, 100], l = 5, h = 45
         <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/886458/Web/Other/blobid5_1738407930.png" alt="" width="267" height="239">
<strong>Output: </strong>3<strong>
Explanation: </strong></span><span style="font-size: 18px;">There are three nodes in range [5, 45] =  5, 10 and 40.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>root[] = [10, 5, 50, 1, N, 40, 100], l = 10, h = 100<br>         <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/886458/Web/Other/blobid6_1738407930.png" alt="" width="266" height="219">
<strong>Output: </strong>4<strong>
Explanation: </strong>There are four nodes in range [10, 100] = 10, 40, 50 and 100.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Input: </strong><span style="font-size: 14pt;">root[] = [1, 2, 3], l = 23, h = 95<br>         <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700139/Web/Other/blobid0_1761127199.png" alt="" width="271" height="238">
</span><strong style="font-size: 14pt;">Output: </strong><span style="font-size: 14pt;">0<br></span><span style="font-size: 18.6667px;"><strong>Explanation:</strong> There are no nodes in range [23, 95].</span></span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of nodes &lt;= 10<sup>5</sup><br>1 &lt;= l &lt;= h &lt; =10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>D-E-Shaw</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;