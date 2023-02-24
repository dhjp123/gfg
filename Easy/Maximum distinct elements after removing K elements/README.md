<h2><a href="https://practice.geeksforgeeks.org/problems/maximum-distinct-elements-after-removing-k-elements5906/1?page=1&status[]=unsolved&category[]=Heap&sortBy=submissions">Maximum distinct elements after removing K elements</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array containing N elements. The task is to find the maximum number of distinct elements after removing K elements from the array. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> Arr[] = {5, 7, 5, 5, 1, 2, 2}, K = 3
<strong>Output :</strong> 4
<strong>Explanation:</strong>
Remove 2 occurrences of element <strong>5</strong> and 
1 occurrence of element <strong>2</strong>.

</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> Arr[] = {1, 2, 3, 4, 5, 6, 7}, K = 5
<strong>Output :</strong> 2

</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>maxDistinctNum()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, integer value <strong>K</strong>,&nbsp;and return the maximum distinct elements after removing <strong>K</strong> elements. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(K*logD)&nbsp;&nbsp;where&nbsp;<strong>D</strong>&nbsp;is the number of distinct elements in the given array.<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&nbsp;≤ K ≤ N ≤ 10<sup>6</sup><br>
1&nbsp;≤ A[i] ≤ 10<sup>5</sup></span></p>

<p>&nbsp;</p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Heap</code>&nbsp;<code>Data Structures</code>&nbsp;