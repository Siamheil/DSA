<h2><a href="https://www.geeksforgeeks.org/problems/covid-spread--141631/1">Covid Spread</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p>Aterp is the head nurse at a city hospital. City hospital contains R*C&nbsp;number of wards and the structure of a hospital is in the form of a 2-D matrix.<br>Given a matrix of dimension <strong>R</strong>*<strong>C</strong> where each cell in the matrix can have values 0, 1, or 2 which has the following meaning:<br><strong>0</strong>: Empty ward<br><strong>1</strong>: Cells have uninfected patients<br><strong>2</strong>: Cells have infected patients</p>
<p>An infected patient at ward [i,j] can infect other uninfected patient at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (<strong>up</strong>, <strong>down</strong>, <strong>left</strong> and <strong>right</strong>) in unit time. Help Aterp&nbsp;determine the minimum units of time after which there won't remain any uninfected patient i.e all patients would be infected.&nbsp;If all patients are not infected after infinite units of time then simply return -1.</p>
<p>&nbsp;</p>
<p><br><strong>Example 1:</strong></p>
<pre><strong>Input:</strong>
3 5
2 1 0 2 1
1 0 1 2 1
1 0 0 2 1 
<strong>Output:</strong>
2
<strong>Explanation:
</strong>Patients at positions {0,0}, {0, 3}, {1, 3}
and {2, 3} will infect patient at {0, 1}, 
{1, 0},{0, 4}, {1, 2}, {1, 4}, {2, 4} during 1st 
unit time. And, during 2nd unit time, patient at 
{1, 0} will get infected and will infect patient 
at {2, 0}. Hence, total 2 unit of time is
required to infect all patients.</pre>
<p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong>
3 5
2 1 0 2 1
0 0 1 2 1
1 0 0 2 1
<strong>Output:</strong>
-1
<strong>Explanation:</strong>
All patients will not be infected.</pre>
<p>&nbsp;</p>
<p><strong>Your Task:</strong>&nbsp;&nbsp;<br>You don't need to read input or print anything. Your task is to complete the function <strong>helpaterp</strong>()&nbsp;which takes a 2-D Matrix <strong>hospital&nbsp;</strong>as input parameter&nbsp;and returns the minimum units of time in which all patients will be infected or -1 if it is impossible.</p>
<p><br><strong>Constraints:</strong><br>1 ≤ R,C&nbsp;≤ 1000<br>0 ≤ mat[i][j]&nbsp;≤ 2</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Graph</code>&nbsp;<code>BFS</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;