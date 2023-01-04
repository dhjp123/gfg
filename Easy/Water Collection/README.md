<h2><a href="https://practice.geeksforgeeks.org/problems/amount-of-water1348/1">Water Collection</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p style="text-align:justify"><span style="font-size:18px">It is raining in Geek City. The height of the buildings in the city is given in&nbsp;an array.&nbsp;Calculate the amount of water &nbsp;that can be collected between all the buildings.</span></p>

<p style="text-align:justify">&nbsp;</p>

<p style="text-align:justify"><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 5
Arr[] = {3, 0, 2, 0, 4}
<strong>Output:</strong> 7
<strong>Explanation:</strong>
Geek city looks like
<img alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/20200429012307/Untitled-Diagram811.png" style="height:250px; width:500px" title="Click to enlarge">
We can trap "3 units" of water between
3 and 2, "1 unit" on top of bar 2 and
"3 units" between 2  and 4. </span></pre>

<p style="text-align:justify">&nbsp;</p>

<p style="text-align:justify"><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 12
Arr[] = [0,1,0,2,1,0,1,3,2,1,2,1]
<strong>Output:</strong> 6
<strong>Explanation:</strong>
The structure is like below
<img alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/20200429011707/Untitled-Diagram101.png" style="height:268px; width:500px" title="Click to enlarge">
Trap "1 unit" between first 1 and 2,
"4 units" between first 2 and 3 and
"1 unit" between second last 1 and last 2 </span>
</pre>

<p style="text-align:justify">&nbsp;</p>

<p style="text-align:justify"><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>maxWater()</strong>&nbsp;which takes the array of integers&nbsp;<strong>arr[]</strong><strong>&nbsp;</strong>and<strong> n&nbsp;</strong>as input parameters and returns the amount of water collected.</span><br>
<br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="text-align:justify">&nbsp;</p>

<p style="text-align:justify"><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ Arr[i] ≤ 10<sup>3</sup></span></p>

<p>&nbsp;</p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Adobe</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;