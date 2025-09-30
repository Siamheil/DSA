<h2><a href="https://www.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1">Two Stacks in an Array</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p data-start="218" data-end="334"><span style="font-size: 14pt;">You are given an array of a fixed size. Your task is to efficiently implement <strong data-start="296" data-end="310">two stacks</strong> in this single array.</span></p>
<p data-start="218" data-end="334"><span style="font-size: 14pt;">The following operations must be supported:</span></p>
<p><span style="font-size: 18px;"><strong><span style="font-size: 18px;">(i) twoStacks : </span></strong><span style="font-size: 18px;">Initialize the data structures and variables to be used to </span><span style="font-size: 18px;">implement&nbsp;&nbsp;2 stacks in one array.</span><br><strong style="font-size: 18px;">(ii) push1(x) </strong><span style="font-size: 18px;">: pushes element into the first stack.</span><br><strong style="font-size: 18px;">(iii) push2(x) </strong><span style="font-size: 18px;">: pushes element into the second stack.</span><br><strong style="font-size: 18px;">(iv) pop1() </strong><span style="font-size: 18px;">: pops an element from the first stack and returns the popped element. If the first stack is empty, it should return -1.</span><br><strong style="font-size: 18px;">(v) pop2() </strong><span style="font-size: 18px;">: pops an element from the second stack and returns the popped element. If the second stack is empty, it should return -1.</span><br></span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>push1(2)
push1(3)
push2(4)
pop1()
pop2()
pop2()
<strong>Output: </strong>[3, 4, -1]<strong>
Explanation: <br></strong></span><span style="font-size: 18px;">push1(2): the stack1 will be [2]
push1(3): the stack1 will be [2,3]
push2(4): the stack2 will be [4]
pop1(): the poped element will be 3 from stack1 and stack1 will be {2}
pop2(): the poped element will be 4 from stack2 and now stack2 is empty
pop2(): the stack2 is now empty hence returned -1.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>push1(1)
push2(2)<br></span><span style="font-size: 18px;">pop1()
push1(3)
pop1()
pop1()
<strong>Output: </strong>[1, 3, -1]<strong>
Explanation:
</strong>push1(1): the stack1 will be [1]
push2(2): the stack2 will be [2]<br>pop1(): the poped element will be 1 from stack1 and stack1 will be empty<br>push1(3): the stack1 will be [3]
pop1(): the poped element will be 3 from stack1 and stack1 will be empty<br>pop1(): the stack1 is now empty hence returned -1.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:
</strong>push1(2)
push1(3)
push1(4)
pop2()
pop2()
pop2()
<strong>Output: </strong>[-1, -1, -1]<strong>
Explanation:
</strong>push1(2): the stack1 will be [2]
push1(3): the stack1 will be [2,3]
push1(4): the stack1 will be [2,3,4]
pop2(): the stack2 is empty hence returned -1.</span><br><span style="font-size: 14pt;">pop2(): the stack2 is empty hence returned -1.</span><br><span style="font-size: 14pt;">pop2(): the stack2 is empty hence returned -1.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ number of queries ≤ 10<sup>4</sup><br>1 ≤ number of elements in the stack</span><span style="font-size: 18px;"> ≤ 100</span><br><span style="font-size: 18px;">The sum of the count of elements in both the stacks &lt; size of the given array</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>24*7 Innovation Labs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;