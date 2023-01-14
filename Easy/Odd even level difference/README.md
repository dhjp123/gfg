<h2><a href="https://practice.geeksforgeeks.org/problems/odd-even-level-difference/1?page=8&curated[]=1&curated[]=6&sortBy=submissions">Odd even level difference</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a Binary Tree. Find the difference between the sum of node values at even levels and the sum of node values at the odd levels.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
            1
          /   \
         2     3</span>

<span style="font-size:18px"><strong>Output:</strong> -4</span>

<span style="font-size:18px"><strong>Explanation:</strong>
sum at odd levels - sum at even levels
= (1)-(2+3) = 1-5 = -4
</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
            10
          /    \
        20      30
       /  \         
     40    60      </span>

<span style="font-size:18px"><strong>Output:</strong> 60</span>

<span style="font-size:18px"><strong>Explanation:</strong>
sum at odd levels - sum at even levels
= (10+40+60) - (20+30)
= 110 - 50
= 60</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>getLevelDiff()</strong> which takes root node as input parameter and returns an integer.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(height of tree)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10^5</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;