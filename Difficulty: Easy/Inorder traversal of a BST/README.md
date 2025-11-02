<h2><a href="https://www.geeksforgeeks.org/problems/inorder-traversal-of-a-bst/1?page=1&category=Binary%20Search%20Tree&difficulty=Easy&sortBy=submissions">Inorder traversal of a BST</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><em><span style="font-size: 18px;">Inorder traversal means traversing through the tree in a Left, Node, Right manner. We first traverse left, then print the current node, and then traverse right. This is done recursively for each node.</span></em><br><span style="font-size: 18px;">Given a BST, find its in-order traversal.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp;5
&nbsp; &nbsp; /&nbsp; &nbsp; \
 &nbsp; 2&nbsp; &nbsp; &nbsp;&nbsp;7
 &nbsp; &nbsp;\&nbsp; &nbsp; &nbsp;  \
  &nbsp; 3&nbsp; &nbsp; &nbsp; &nbsp; 8
<strong>Output: </strong>2 3 5 7 8
</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp;30
 &nbsp; &nbsp;&nbsp;/
 &nbsp; 10
 &nbsp; &nbsp; \
 &nbsp;  &nbsp;20
<strong>Output: </strong>10 20 30
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Complete the function <strong>inOrder()&nbsp;</strong>that takes the root of the BST as input parameter and returns a list of integers containing the in-order traversal of the BST.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N), where N = Number of nodes in BST<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the BST).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of nodes &lt;= 100<br>1 &lt;= Value of a node<sub>&nbsp;</sub>&lt;= 100</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;