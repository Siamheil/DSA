<h2><a href="https://www.geeksforgeeks.org/problems/print-common-nodes-in-bst/1">Find Common Nodes in two BSTs</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two Binary Search Trees. Find&nbsp;the&nbsp;nodes that are common in both of them, ie-&nbsp;find the intersection of the two BSTs.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: Return&nbsp;</span><span style="font-size: 18px;">the common nodes in <strong>sorted </strong>order.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong></span><strong><span style="font-size: 18px;">BST1:
</span></strong> <span style="font-size: 18px;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;&nbsp; &nbsp; &nbsp;5
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/ &nbsp; &nbsp; \
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;1 &nbsp; &nbsp; &nbsp;  10
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/ &nbsp; \ &nbsp; &nbsp;  /
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; 0 &nbsp; &nbsp; 4&nbsp;&nbsp;&nbsp; 7
 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  \
 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;9
</span><strong><span style="font-size: 18px;">BST2:
</span></strong> <span style="font-size: 18px;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; 10 
&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  / &nbsp; &nbsp;\
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;7&nbsp; &nbsp; &nbsp;20
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/ &nbsp; \ 
&nbsp;&nbsp; &nbsp; &nbsp; &nbsp;  4&nbsp; &nbsp; &nbsp;9
<strong><br>Output: </strong>4 7 9 10

</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:
BST1:
</strong>&nbsp;    10
&nbsp;   /  \
&nbsp;  2   11
&nbsp; /  \
&nbsp;1   3
<strong>BST2:
</strong>&nbsp;      2
&nbsp;    /  \
&nbsp;   1    3
<strong>Output: </strong>1 2 3
</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of Nodes &lt;= 10<sup>5</sup><br>1 &lt;= Node data &lt;= 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;