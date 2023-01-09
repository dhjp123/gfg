<h2><a href="https://practice.geeksforgeeks.org/problems/maximum-sum-difference2545/1">Maximum sum difference</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a number <strong>N</strong>. We have to find maximum sum of all permutations of numbers from 1 to N. The maximum sum will be sum of absolute difference of adjacent elements in array.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 2
<strong>Output:</strong> 1
<strong>Explaination:</strong> Permutations of 2 are: 
{1, 2} = 1, {2, 1} = 1.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 3
<strong>Output:</strong> 3
<strong>Explaintation:</strong> Permutations of size 3 are: 
{1, 2, 3} = 1 + 1, {1, 3, 2} = 2 + 1 
{2, 1, 3} = 1 + 2, {2, 3, 1} = 1 + 2 
{3, 1, 2} = 2 + 1, {3, 2, 1} = 1 + 1 </span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>maxSum()</strong> which takes N as input parameter and returns the maximum possible difference sum from all permutations of N numbers.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(1)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 ≤ N ≤ 1000</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;