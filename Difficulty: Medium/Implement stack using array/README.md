<h2><a href="https://www.geeksforgeeks.org/problems/implement-stack-using-array/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab">Implement stack using array</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p data-start="319" data-end="453"><span style="font-size: 14pt;">Implement a <strong data-start="331" data-end="355">Stack using an Array</strong>, where the size of the array, <strong>n</strong>&nbsp;is given.</span><br data-start="400" data-end="403"><span style="font-size: 14pt;"> The Stack must support the following operations:</span></p>
<p data-start="319" data-end="453"><strong style="font-size: 14pt;" data-start="458" data-end="470">(i) push(x):</strong><span style="font-size: 14pt;"> Insert an element x </span><span style="font-size: 14pt;">at the top of the stack.<br></span><strong style="font-size: 14pt;" data-start="523" data-end="533">(ii) pop():</strong><span style="font-size: 14pt;"> Remove the element from the top of the stack.<br></span><strong style="font-size: 14pt;" data-start="585" data-end="596">(iii) peek():</strong><span style="font-size: 14pt;"> Return the top element if not empty, else -1</span><span style="font-size: 14pt;">.<br></span><strong style="font-size: 14pt;" data-start="650" data-end="664">(iv) isEmpty():</strong><span style="font-size: 14pt;"> Return true </span><span style="font-size: 14pt;">if the stack is empty else return false.</span><span style="font-size: 14pt;"><br></span><strong style="font-size: 14pt;" data-start="727" data-end="740">(v) isFull():</strong><span style="font-size: 14pt;"> Return true </span><span style="font-size: 14pt;">if the stack is full else return false</span><span style="font-size: 14pt;">.</span></p>
<p data-start="800" data-end="897"><span style="font-size: 14pt;">There will be a sequence of queries <strong>queries[][]</strong>.&nbsp;The queries are represented in numeric form:</span></p>
<ul data-start="899" data-end="1025">
<li data-start="899" data-end="925"><span style="font-size: 14pt;"> </span>
<p data-start="901" data-end="925"><span style="font-size: 14pt;">1 x : Call push(x)</span></p>
</li>
<li data-start="899" data-end="925">
<p data-start="901" data-end="925"><span style="font-size: 14pt;">2 : Call pop()</span></p>
</li>
<li data-start="949" data-end="972"><span style="font-size: 14pt;"> </span>
<p data-start="951" data-end="972"><span style="font-size: 14pt;">3 : Call peek()</span></p>
</li>
<li data-start="949" data-end="972">
<p data-start="951" data-end="972"><span style="font-size: 18.6667px;">4&nbsp; : Call isEmpty()</span></p>
</li>
<li data-start="973" data-end="999">
<p data-start="975" data-end="999"><span style="font-size: 14pt;">5 : Call isFull()</span></p>
</li>
</ul>
<p><span style="font-size: 14pt;">You just have to implement the functions <strong>push, pop, peek, isEmpty, </strong>and <strong>isFull.</strong>&nbsp;The driver code will handle the output.</span></p>
<p><span style="font-size: 14pt;"><strong>Note:</strong> All the queries are valid.</span></p>
<p><strong style="font-size: 14pt;">Examples:</strong></p>
<pre><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Input: </strong><span style="font-size: 14pt;">n = 3, q = 6,</span><strong style="font-size: 14pt;"> </strong><span style="font-size: 14pt;">queries</span><span style="font-size: 18.6667px;">[][] = [[1, 5], [1, 3], [3], [2], [4], [5]]</span>
<strong style="font-size: 14pt;">Output: </strong><span style="font-size: 14pt;">[3, false, false]</span><strong style="font-size: 14pt;">
Explanation: </strong><span style="font-size: 14pt;">Queries on stack are as follows:<br>push(5) : Insert 5 at the top of the stack.<br>push(3) : Insert 3 at the top of the stack.<br>peek() : Return the top element i.e. 3.<br>pop() : Remove the top element i.e. 3.<br>isEmpty() : return false as the stack is not empty.<br>isFull() : return false as the stack is not full. Capacity = 3.</span></span></pre>
<pre><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Input: </strong><span style="font-size: 14pt;">n = 1, q = 5,</span><strong style="font-size: 14pt;"> </strong><span style="font-size: 14pt;">queries[]</span><span style="font-size: 18.6667px;">[] =  [[2], [3], [4], [1, 9], [5]]
</span><strong style="font-size: 14pt;">Output: </strong><span style="font-size: 14pt;">[-1, -1, true, true]</span><strong style="font-size: 14pt;">
Explanation: </strong><span style="font-size: 14pt;">Queries on stack are as follows:<br>pop(): Since stack is empty, nothing is popped.<br>peek(): Return the top element. Since the stack is empty, return -1.<br></span><span style="font-size: 14pt;">isEmpty(): Return true as the stack is empty.<br></span><span style="font-size: 14pt;">push(9): Insert 9 at the top of the stack. The stack will be [9].<br>isFull(): Return true as the stack is full. Capacity = 1.</span></span></pre>
<p><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Constraints:</strong><br><span style="font-size: 14pt;"><span style="font-size: 14pt;">1&nbsp;</span>≤ n ≤ 10<sup>3</sup><br></span><span style="font-size: 14pt;">1 ≤ q ≤ 10<sup>3</sup><br>0 ≤ x<strong>&nbsp;</strong>≤ 10<sup>5<br><br></sup></span></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>FactSet</code>&nbsp;<code>Visa</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>Qualcomm</code>&nbsp;<code>Kritikal Solutions</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;