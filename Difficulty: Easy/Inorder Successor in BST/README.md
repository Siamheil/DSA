<h2><a href="https://www.geeksforgeeks.org/problems/inorder-successor-in-bst/1">Inorder Successor in BST</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a BST, and a reference to a Node <strong>k</strong> in the BST. Find the Inorder Successor of the given node in the BST. If there is no successor, return -1.&nbsp;</span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> root = [2, 1, 3], k = 2
&nbsp;  <strong> </strong>  2
&nbsp;   /   \
<strong>   </strong>1     3
<strong>Output: </strong>3 
<strong>Explanation:</strong> Inorder traversal : 1 2 3 Hence, inorder successor of 2 is 3.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> root = [20, 8, 22, 4, 12, N, N, N, N, 10, 14], k = 8
             20
&nbsp;           /   \
&nbsp;          8<strong>     </strong>22
&nbsp;         / \
&nbsp;        4   12
&nbsp;           /<strong>  </strong>\
&nbsp;          10   14
<strong>Output: </strong>10<strong>
Explanation: </strong>Inorder traversal: 4 8 10 12 14 20 22. Hence, successor of 8 is 10.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> root = [2, 1, 3], k = 3
&nbsp;     2
&nbsp;   /   \
<strong>   </strong>1     3
<strong>Output: </strong>-1 
<strong>Explanation:</strong> Inorder traversal : 1 2 3 Hence, inorder successor of 3 is null.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup><sup>,</sup> where n is the number of nodes</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Morgan Stanley</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;