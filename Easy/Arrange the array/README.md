<h2><a href="https://practice.geeksforgeeks.org/problems/arrange-the-array/1?page=18&curated[]=7&sortBy=submissions">Arrange the array</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of n integers rearrange the values of the array so as to maximize the worth of the array.Worth of an array a&nbsp;is defined as a(n)^(a(n-1)^a(n-2)........(a(1))).You need to print the rearrangement. If multiple answers are possible print the lexicographically largest one.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=2
a[]={2,3}
<strong>Output:</strong>
a[]={2,3}
<strong>Explanation:</strong>
Since in total 2 permutations are possible {2,3} and
{3,2} the former one has a value of 9 while the latter
one has 8 hence the answer is the former permutation.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=3
a[]={1,1,1}
<strong>Output:</strong>
a[]={1,1,1}
<strong>Explanation:</strong>
All permutations will yield the same result.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>rearrange()</strong>&nbsp;which takes the array arr[], its size N,<strong>&nbsp;</strong>and returns the rearranged array.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(NLogN)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span><br>
<br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= arr[i] &lt;= 10<sup>5</sup><br>
Array may contain duplicate elements.</span></p>
</div>