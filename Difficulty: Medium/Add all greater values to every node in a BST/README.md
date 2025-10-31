<h2><a href="https://www.geeksforgeeks.org/problems/add-all-greater-values-to-every-node-in-a-bst/1">Add all greater values to every node in a BST</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a BST,&nbsp;modify it so that all greater values in the given BST are added to every node.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
&nbsp;          50
&nbsp;        /    \
&nbsp;       30    70
&nbsp;     /  \     / \  
&nbsp;    20  40 60 80<strong>
Output: </strong>350 330 300 260 210 150 80<strong>
Explanation:</strong>The tree should be modified to
following:
&nbsp;            260
&nbsp;         /       \
        330      150
       /   \      /     \
&nbsp;   350   300 210    80</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
&nbsp;         2
&nbsp;       /   \
&nbsp;      1     5
&nbsp;           /  \
&nbsp;          4    7<strong>
Output: </strong>19 18 16 12 7</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size: 18px;"> <strong>modify()&nbsp;</strong>which takes one argument: the root of the BST. The function should contain the logic to modify the BST so that in the modified BST, every node has a value equal to the sum of its value in the original BST and values of all the elements larger than it in the original BST. Return the root of the modified BST. The driver code will print the inorder traversal of the returned BST/<br><br><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the BST).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=N&lt;=100000</span></p>
<p><br><span style="font-size: 12px;"><strong>Note:</strong> The <strong>Input/Output</strong> format and <strong>Example</strong> is given are used for the system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from the stdin/console. The task is to complete the function specified, and not to write the full code.</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;