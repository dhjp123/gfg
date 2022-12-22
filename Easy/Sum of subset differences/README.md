<h2><a href="https://practice.geeksforgeeks.org/problems/sum-of-subset-differences/1">Sum of subset differences</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>S</strong> consisting of N&nbsp;numbers, find the sum of difference between last and first element of each subset.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>S = [5,8]
<strong>Output: 
</strong>3<strong>
Explanation: </strong>There are 3 subsets possible for the given array S.
1 -&gt; [5] having first and last element same i.e. 5
so the difference is 0.
2 -&gt; [8] having first and last element same i.e. 8
so the difference is 0.
3 -&gt; [5,8] having first and last element as 5 and 8
respectively. So the difference is 8-5 = 3
Total difference is 0 + 0 + 3 = 3
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.&nbsp;You are required to complete the function&nbsp;<strong>sumDiff </strong>which returns an integer denoting the sum of difference between last and first element for each subset of array <strong>S</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(N)<br>
<strong>Expected Auxiliary Space</strong>: O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=T&lt;=100<br>
1&lt;=N&lt;=20<br>
1&lt;=S[]&lt;=1000</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;