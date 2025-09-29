<h2><a href="https://www.geeksforgeeks.org/problems/get-minimum-element-from-stack/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab">Get Min from Stack</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18.6667px;">Implement a class&nbsp;<strong>SpecialStack</strong>&nbsp;that supports following operations:</span></p>
<ul>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>push(x) –&nbsp;</strong>Insert an integer x into the stack.</span></li>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>pop() –&nbsp;</strong>Remove the top element from the stack.</span></li>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>peek()&nbsp;</strong><strong>–</strong><strong>&nbsp;</strong>Return the top element&nbsp;</span><span style="font-size: 18.6667px;">from the stack.<strong><strong>&nbsp;</strong><span style="font-family: monospace; font-size: 18.6667px; font-weight: 400;">If the stack is empty, return -1.</span></strong></span></li>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><span style="font-size: 18.6667px;"><strong>getMin</strong></span><strong style="font-size: 18.6667px;">() – </strong><span style="font-size: 18.6667px;">Retrieve the minimum element from the stack in O(1) time. If the stack is empty, return -1.</span></span></li>
<li style="text-align: left;"><strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; font-size: 18.6667px;">isEmpty()</span></strong><span style="font-size: 18.6667px;">&nbsp;</span><span style="font-size: 18.6667px;"><strong>–&nbsp;</strong></span><span style="font-size: 18.6667px;">&nbsp;R</span><span style="font-size: 18.6667px;">eturn true if stack is empty, else false</span></li>
</ul>
<p><span style="font-size: 14pt;"><span style="font-size: 14pt;">There will be a sequence of queries&nbsp;</span><strong>queries</strong><strong style="font-size: 14pt;">[][]</strong><span style="font-size: 14pt;">. The queries are represented in numeric form:</span></span></p>
<ul>
<li><span style="font-size: 14pt;"><strong>1 x</strong>&nbsp;<strong>:</strong>&nbsp;Call push(x)</span></li>
<li><span style="font-size: 14pt;"><strong>2</strong><strong style="font-size: 14pt;">:</strong><span style="font-size: 14pt;">&nbsp;&nbsp;</span><span style="font-size: 14pt;"><span style="font-family: monospace;">Call</span>&nbsp;pop()</span></span></li>
<li><span style="font-family: monospace;"><span style="font-size: 18.6667px;"><strong>3:&nbsp;</strong>Call peek()</span></span></li>
<li><span style="font-family: monospace;"><span style="font-size: 18.6667px;"><strong>4:</strong> Call getMin()</span></span></li>
<li><span style="font-family: monospace;"><span style="font-size: 18.6667px;"><strong>5:</strong>&nbsp;Call isEmpty()</span></span></li>
</ul>
<p><span style="font-family: monospace;"><span style="font-size: 18.6667px;">The driver code will process the queries, call the corresponding functions, and print the outputs of peek(), getMin(), isEmpty() operations.</span><br></span><span style="font-family: monospace;"><span style="font-size: 18.6667px;">You only need to implement the above five functions.</span></span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> q = 7, queries[][] = [[1, 2], [1, 3], [3], [2], [4], [1, 1], [4]]<strong>
Output: </strong>[3, 2, 1]<strong>
Explanation: </strong>
push(2): Stack is [2]
push(3): Stack is [2, 3]
peek(): Top element is 3
pop(): Removes 3, stack is [2]
getMin(): Minimum element is 2
push(1): Stack is [2, 1]
getMin(): Minimum element is 1</span></pre>
<pre><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Input:</strong><span style="font-size: 14pt;"> q = 4, queries[][] = [[1, 4], [1, 2], [4], [3], [5]]</span><strong style="font-size: 14pt;">
Output: </strong><span style="font-size: 14pt;">[2, 2, false]</span><strong style="font-size: 14pt;">
Explanation: <br></strong><span style="font-size: 18.6667px;">push(4): Stack is [4]
push(2): Stack is [4, 2]</span><span style="font-size: 14pt;"><br></span><span style="font-size: 18.6667px;">getMin(): Minimum element is 2</span><span style="font-size: 14pt;"><br></span><span style="font-size: 18.6667px;">peek(): Top element is 2<br>isEmpty(): false</span></span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ q ≤ 10<sup>5</sup><br>0 ≤ values on the stack ≤ 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>D-E-Shaw</code>&nbsp;<code>FactSet</code>&nbsp;<code>Walmart</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>SAP Labs</code>&nbsp;<code>Sapient</code>&nbsp;<code>One97</code>&nbsp;<code>GreyOrange</code>&nbsp;<code>Kuliza</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;