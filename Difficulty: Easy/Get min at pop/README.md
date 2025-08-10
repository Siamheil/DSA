<h2><a href="https://www.geeksforgeeks.org/problems/get-min-at-pop/1?page=1&category=Stack&difficulty=Easy&sortBy=submissions">Get min at pop</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given an integer array <strong>arr[]</strong>. You need to first push the elements of the array into a stack and then print minimum in the stack at each pop until stack becomes empty.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [1, 2, 3, 4, 5]
<strong>Output</strong>: [1, 1, 1, 1, 1]
<strong>Explanation</strong>: 
After pushing elements to the stack, 
the stack will be "top -&gt; 5, 4, 3, 2, 1". 
Now, start popping elements from the stack
popping&nbsp;5: min in&nbsp;the stack is&nbsp;1.popped 5
popping&nbsp;4: min in the stack is 1. popped 4
popping&nbsp;3: min in the stack is&nbsp;1. popped 3
popping 2: min in the stack is 1. popped 2
popping 1: min in the stack is 1. popped 1
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [1, 6, 43, 1, 2, 0, 5]
<strong>Output</strong>: [0, 0, 1, 1, 1, 1, 1]
<strong>Explanation</strong>: 
After pushing the elements to the stack, 
the stack will be 5-&gt;0-&gt;2-&gt;1-&gt;43-&gt;6-&gt;1. 
Now, poping the elements from the stack:
popping 5: min in the stack is 0. popped 5
popping 0: min in the stack is 0. popped 0
popping 2: min in the stack is 1. popped 2
popping 1: min in the stack is 1. popped 1
popping 43: min in the stack is 1. popped 43
popping 6: min in the stack is 1. popped 6
popping 1: min in the stack is 1. popped 1.</span>
</pre>
<p><strong><span style="font-size: 18px;">Constraints:</span></strong><br><span style="font-size: 18px;">0 ≤ arr[i] ≤ 10<sup>7</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;