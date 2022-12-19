<h2><a href="https://practice.geeksforgeeks.org/problems/count-subsets-having-distinct-even-numbers5726/1">Count subsets having distinct even numbers</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a set of n numbers. The task is to count all the subsets of the given set which only have even numbers and all are distinct.<br>
<strong>Note:</strong> By the property of sets, if two subsets have the same set of elements then they are considered as one. For example: [2, 4, 8] and [4, 2, 8] are considered to be the same.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input : </strong>
n = 8
a[] = {4, 2, 1, 9, 2, 6, 5, 3}
<strong>Output : </strong>
7
<strong>Explanation:</strong>
The subsets are:
[4], [2], [6], [4, 2],
[2, 6], [4, 6], [4, 2, 6]</span></pre>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input : </strong>
n = 13
a[] = {10, 3, 4, 2, 4, 20, 10, 6, 8, 14, 2, 6, 9}
<strong>Output : </strong>
127</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>countSubsets()</strong>&nbsp;which takes the array <strong>a[]</strong> and its size <strong>n </strong>as inputs and returns the Count of possible subsets.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n)<br>
<strong>Expected Auxiliary Space:</strong> O(n)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=n&lt;=10<sup>5</sup><br>
1&lt;=a[i]&lt;=10<sup>3</sup><br>
It is Guaranteed that answers will fit in <strong>64-bits</strong>.</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>subset</code>&nbsp;<code>Combinatorial</code>&nbsp;<code>Data Structures</code>&nbsp;