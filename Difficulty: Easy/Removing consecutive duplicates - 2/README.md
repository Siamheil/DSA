<h2><a href="https://www.geeksforgeeks.org/problems/removing-consecutive-duplicates-2-1587115621/1?page=1&difficulty=Easy&sprint=478542d8f46eb6959432ff3e0b075a47&sortBy=submissions">Removing consecutive duplicates - 2</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given string <strong>s</strong>. You need to remove the pair of duplicates.<br><strong>Note:&nbsp;</strong>The pair should be of adjacent elements and after removing a pair the remaining string is joined together.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: s = "aaabbaaccd"
<strong>Output</strong>: ad
<strong>Explanation</strong>: 
Remove (aa)abbaaccd =&gt;abbaaccd
Remove a(bb)aaccd =&gt; aaaccd
Remove (aa)accd =&gt; accd
Remove a(cc)d =&gt; ad</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: s = "aaaa"
<strong>Output</strong>: Empty String
<strong>Explanation</strong>: 
Remove (aa)aa =&gt; aa
Again removing pair of duplicates then (aa) 
will be removed and we will get 'Empty String'.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= |s| &lt;= 10<sup>3</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;