<h2><a href="https://practice.geeksforgeeks.org/problems/jumbled-strings0431/1">Jumbled Strings</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are provided an input string S and the string “GEEKS” . Find the number of ways in which the subsequence “GEEKS” can be formed from the&nbsp;string S.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input : </strong>S = "GEEKS"
<strong>Output: </strong>1
<strong>Explanation: 
</strong>"GEEKS" occurs in S only once.</span>
</pre>

<p><br>
<strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input: </span></strong><span style="font-size:18px">S = "AGEEKKSB"
<strong>Output: </strong>2
<strong>Explanation: </strong>Subsequenece<strong> </strong>"GEEKS" occurs in 
S two times. First one is taking the first 
'K' into consideration and second one is 
taking second 'K'.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your&nbsp;Task:</strong></span><br>
<span style="font-size:18px">You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>TotalWays()</strong> which takes string S as input paramater and returns total ways modulo&nbsp;<strong>10<sup>9</sup>&nbsp;+ 7.</strong></span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity :&nbsp;</strong>O(N * K) where N is length of string and K is constant.<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(N * K)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:&nbsp;</strong><br>
1 &lt;= Length od string &lt;= 10000&nbsp;</span><br>
&nbsp;</p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;