<h2><a href="https://practice.geeksforgeeks.org/problems/evaluate-the-expression0307/1?page=17&curated[]=7&sortBy=submissions">Evaluate the expression</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a number n, find the value of below expression:<br>
&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; f(n-1)*f(n+1) - f(n)*f(n)&nbsp; &nbsp; where f(n) is n<sup>th</sup>&nbsp;Fibonacci.&nbsp;</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input : </strong>n = 5
<strong>Output: </strong>-1
<strong>Explanation: </strong>f(4) = 3, f(5) = 5
</span><span style="font-size:18px">f(6) = 8. 3 * 8 - 5 * 5 = -1</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>n = 3
<strong>Output: -</strong>1
<strong>Explanation: </strong>f(2) = 1, f(3) = 2
and f(4) = 3. 1 * 3 - 2 * 2 = -1</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Yous task is to complete the function&nbsp;<strong>evaluate_exp()</strong>&nbsp;which takes n as input parameter and returns the value of the given expression.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(1)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;= 10<sup>18</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;