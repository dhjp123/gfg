<h2><a href="https://practice.geeksforgeeks.org/problems/maximum-difference-between-pair-in-a-matrix/1?page=23&curated[]=1&curated[]=7&sortBy=submissions">Maximum difference between pair in a matrix</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an <strong>N&nbsp;x N</strong>&nbsp;matrix, <strong>mat[N][N]</strong> of integers. The task is to&nbsp;find the maximum value of <strong>mat(c, d) mat(a, b)</strong> over all choices of indexes such that both <strong>c &gt; a</strong> and <strong>d &gt; b</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
mat[N][N] = {{ 1, 2, -1, -4, -20 },
             {<strong> -8</strong>, -3, 4, 2, 1 }, 
             { 3, 8, 6, 1, 3 },
             { -4, -1, 1, 7, -6 },
             { 0, -4, <strong>10</strong>, -5, 1 }};
<strong>Output: </strong>18
<strong>Explanation:</strong> The maximum value is 18 as mat[4][2] 
- mat[1][0] = 18 has maximum difference.
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>findMaxValue</strong><strong>()</strong>&nbsp;which takes a&nbsp;matrix mat&nbsp;and returns an integer as output.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N<sup>2</sup>)<br>
<strong>Expected Auxiliary Space:</strong> O(N<sup>2</sup>)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N&nbsp;&lt;= 10<sup>3</sup><br>
-10<sup>3</sup>&lt;= mat[i][j] &lt;=10<sup>3</sup></span></p>
</div>