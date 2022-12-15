<h2><a href="https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1">Predecessor and Successor</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There is BST given with root node with key part as an integer only.&nbsp;You need to find the in-order successor and predecessor of a given key.&nbsp;If either predecessor or successor is not found, then set it to NULL.</span></p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
2
6
50 30 L 30 20 L 30 40 R 50 70 R 70 60 L 70 80 R
65
6
50 30 L 30 20 L 30 40 R 50 70 R 70 60 L 70 80 R
100</span>

<span style="font-size:18px"><strong>Output:</strong>
60 70
80 -1
</span></pre>

<p><span style="font-size:18px"><strong>Input:</strong><br>
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains n denoting the number of edges of the BST. The next line contains the edges of the BST. The last line contains the key.</span></p>

<p><span style="font-size:18px"><strong>Output:</strong><br>
Find the&nbsp;predecessor and successor of the&nbsp;key in BST and&nbsp;sets pre and suc as predecessor and successor, respectively Otherwise, set to NULL.</span></p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;</strong>You don't need to print anything. You only need to set p.pre to the predecessor and s.succ to the&nbsp;successor. p and s have been passed in the function parameter.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=T&lt;=100<br>
1&lt;=n&lt;=100<br>
1&lt;=data of node&lt;=100<br>
1&lt;=key&lt;=100</span><br>
&nbsp;</p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Ola Cabs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;