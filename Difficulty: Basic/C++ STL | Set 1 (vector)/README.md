<h2><a href="https://www.geeksforgeeks.org/problems/c-stl-set-1-vector/1?page=4&category=CPP&sortBy=submissions">C++ STL | Set 1 (vector)</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:20px">Implement different operations on a vector A .</span><br>
&nbsp;</p>

<p><span style="font-size:20px"><strong>Input:</strong><br>
The first line of input contains an integer <strong>T</strong> denoting the no of test cases . Then T test cases follow. The first line of input contains an integer <strong>Q</strong> denoting the no of queries . Then in the next line are <strong>Q</strong>&nbsp;space separated queries .<br>
A query can be of&nbsp;five&nbsp;types&nbsp;<br>
1. a x (Adds an element x to the vector A&nbsp;at the end )<br>
2. b (Sorts the vector A in ascending order&nbsp;)<br>
3. c (Reverses the vector A)<br>
4. d (prints the size of the vector)<br>
5. e (prints space separated values of the vector)<br>
5. f &nbsp;(Sorts the vector A in descending&nbsp;order)<br>
<br>
<br>
<strong>Output:</strong><br>
The output for each test case will&nbsp;&nbsp;be space separated integers denoting the results of each query .&nbsp;<br>
<br>
<strong>Constraints:</strong><br>
1&lt;=T&lt;=100<br>
1&lt;=Q&lt;=100<br>
<br>
<strong>Example:</strong></span></p>

<p><span style="font-size:20px"><strong>Input</strong><br>
2<br>
6<br>
a 4 a 6 a 7 b c e<br>
4<br>
a 55 a 11 d e<br>
<strong>&nbsp;<br>
Output</strong><br>
7 6 4<br>
2 55 11<br>
<br>
<strong>Explanation :<br>
For the first test case</strong><br>
There are six queries.&nbsp;Queries&nbsp;are&nbsp;performed in this order<br>
1. a 4 { Vector has 4 &nbsp;}<br>
2. a 7&nbsp;{vector has 7 }<br>
3. a 6 {vector has 6}<br>
4. b {sorts the vector in ascending order, vector&nbsp;now is 5 6 7}<br>
5. c {reverse the vector }<br>
6. e&nbsp;{prints the element of the vectors 7 6 4}<br>
<br>
<strong>For the sec test case&nbsp;</strong><br>
There are four&nbsp;queries.&nbsp;Queries&nbsp;are&nbsp;performed in this order<br>
1. a 55 &nbsp;(vector A has&nbsp;55}<br>
2. a 11 &nbsp;(vector A has 55 ,11}<br>
3. d &nbsp; &nbsp; &nbsp;(prints the size of the vector A ie. 2 )<br>
4. e &nbsp; &nbsp; &nbsp;(prints the elements of the vector A ie 55 11)</span><br>
<br>
<br>
<span style="font-size:16px"><strong>Note:</strong>The <strong>Input/Output</strong> format and <strong>Example</strong> given are used for system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>CPP</code>&nbsp;<code>STL</code>&nbsp;