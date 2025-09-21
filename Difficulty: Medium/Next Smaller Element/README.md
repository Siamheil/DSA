<h2><a href="https://www.geeksforgeeks.org/problems/immediate-smaller-element1142/1">Next Smaller Element</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p data-start="103" data-end="238"><span style="font-size: 14pt;">You are given an integer array arr[ ]. For every element in the array, your task is to determine its <strong data-start="205" data-end="235">Next Smaller Element (NSE)</strong>.</span></p>
<p><span style="font-size: 14pt;"> </span></p>
<ul data-start="240" data-end="474">
<li data-start="240" data-end="401"><span style="font-size: 14pt;"> </span>
<p data-start="242" data-end="401"><span style="font-size: 14pt;">The Next Smaller Element (NSE) of an element x is the first element that appears to the right of x in the array and is strictly smaller than x.</span></p>
</li>
<li data-start="240" data-end="401"><span style="font-size: 14pt;"><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; font-size: 14pt;">If no such element exists, assign&nbsp;</span><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; font-size: 14pt;">-1</strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; font-size: 14pt;">&nbsp;as the NSE for that position.</span></span></li>
</ul>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [4, 8, 5, 2, 25]
<strong>Output: </strong>[2, 5, 2, -1, -1]
<strong>Explanation:</strong> <br>The first element smaller than 4 having index &gt; 0 is 2.<br>The first element smaller than 8 having index &gt; 1 is 5.<br>The first element smaller than 5 having index &gt; 2 is 2.<br>There are no elements smaller than 4 having index &gt; 3.<br>There are no elements smaller than 4 having index &gt; 4.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [13, 7, 6, 12]
<strong>Output: </strong>[7, 6, -1, -1]
<strong>Explanation:<br></strong>The first element smaller than 13 having index &gt; 0 is 7.<br>The first element smaller than 7 having index &gt; 1 is 6.<br>There are no elements smaller than 6 having index &gt; 2.<br>There are no elements smaller than 12 having index &gt; 3</span>.</pre>
<p class="p1" style="margin: 0px; font-variant-numeric: normal; font-variant-east-asian: normal; font-variant-alternates: normal; font-size-adjust: none; font-kerning: auto; font-optical-sizing: auto; font-feature-settings: normal; font-variation-settings: normal; font-variant-position: normal; font-variant-emoji: normal; font-stretch: normal; line-height: normal; font-family: 'Helvetica Neue'; white-space: normal;"><span id="docs-internal-guid-35d1c5c8-7fff-d8a7-919f-650fe668824f"></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [4, 1]
<strong>Output: </strong>[1, -1]
<strong>Explanation:</strong> 4 will be updated to 1 and 1 will be updated to -1.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;