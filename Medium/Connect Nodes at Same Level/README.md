<h2><a href="https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1?page=8&curated[]=1&sortBy=submissions">Connect Nodes at Same Level</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p>Given a binary tree, connect the nodes that are at same level. You'll be given an addition&nbsp;<strong>nextRight&nbsp;</strong>pointer for the same.</p>

<p><strong>Initially</strong>, all the <strong>nextRight </strong>pointers point to <strong>garbage </strong>values. <strong>Your function</strong> should set these pointers to point next right for each node.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; 10 ------&gt; NULL<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; / \&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp; 3&nbsp;&nbsp; 5&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; =&gt; &nbsp;&nbsp;&nbsp; 3 ------&gt; 5 --------&gt; NULL<br>
&nbsp;&nbsp;&nbsp; / \&nbsp; &nbsp;&nbsp; \&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp;&nbsp;&nbsp; /&nbsp; \&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp; 4&nbsp;&nbsp; 1&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp;&nbsp; 4 --&gt; 1 -----&gt; 2 -------&gt; NULL</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:
</strong>     3
&nbsp;  /  \
&nbsp; 1    2
<strong>Output:
</strong>3 1 2
1 3 2<strong>
Explanation:</strong>The connected tree is
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3 ------&gt; NULL
&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;\
&nbsp;&nbsp;  1-----&gt; 2 ------ NULL
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:
</strong>      10
&nbsp;   /   \
&nbsp;  20   30
&nbsp; /  \
 40  60
<strong>Output:
</strong>10 20 30 40 60
40 20 60 10 30<strong>
Explanation:</strong>The connected tree is
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10 ----------&gt; NULL
&nbsp;&nbsp;&nbsp;  &nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \
&nbsp;&nbsp;&nbsp;&nbsp; 20 ------&gt; 30 -------&gt; NULL
&nbsp;&nbsp;/&nbsp;&nbsp;&nbsp; \
&nbsp;40 ----&gt; 60 ----------&gt; NULL</pre>

<p><strong>Your Task:</strong><br>
You don't have to take input. Complete the function <strong>connect()&nbsp;</strong>that takes <strong>root&nbsp;</strong>as parameter and connects the nodes at same level. The printing is done by the driver code. First line of the output will be level order traversal and second line will be inorder travsersal</p>

<p><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</p>

<p><strong>Constraints:</strong><br>
1 ≤ Number of nodes ≤ 105<br>
0 ≤ Data of a node ≤ 105</p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Adobe</code>&nbsp;<code>Amazon</code>&nbsp;<code>Boomerang Commerce</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Google</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Ola Cabs</code>&nbsp;<code>Oracle</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Xome</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;