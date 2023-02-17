<h2><a href="https://practice.geeksforgeeks.org/problems/lfu-cache-1665050355/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=lfu-cache">LFU cache</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p dir="ltr"><span style="font-size:18px">Design and implement a data structure for a Least Frequently Used (LFU) cache.</span></p>

<p dir="ltr"><span style="font-size:18px">Implement the given LFUCache Class with the following description.</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>LFUCache(int capacity):</strong> This Initializes the object with the capacity of the data structure.</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>int get(int key):</strong> Returns the value of the given key if it exists or else returns -1.</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>void put(int key, int value):</strong> If the key is already present, then update its value and if the key is not present, then it should be inserted. If the data&nbsp; structure has reached its maximum capacity, then the least frequently used (LFU) key should be invalidated and removed. If during removal, more than one key has same frequency, then the Least Recently Used (LRU) key amongst them should be removed.</span></p>

<p dir="ltr"><strong><span style="font-size:18px">Example:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> </span>
<span style="font-size:18px">Capacity: 3</span>
<span style="font-size:18px">put(5,7)put(4,6)put(3,5)put(2,4)put(1,3)</span>
<span style="font-size:18px">get(1)get(2)get(3)get(4)get(5)</span>

<strong><span style="font-size:18px">Output: </span></strong>
<span style="font-size:18px">3</span>
<span style="font-size:18px">4</span>
<span style="font-size:18px">5</span>
<span style="font-size:18px">-1</span>
<span style="font-size:18px">-1
<strong>Explanation:</strong> </span>
<span style="font-size:18px">When put(2,4) is executed, (5,7) gets invalidated. Similarly when put(1,3) is executed, (4,6) gets invalidated. Therefore only the values for key 1,2,3 are present in the cache after all the put operations.
</span></pre>

<p dir="ltr"><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p dir="ltr"><span style="font-size:18px">Implement the given functions, void put(int key, int value) and int get(int key).&nbsp;</span></p>

<p dir="ltr"><span style="font-size:18px">The functions get and put must each run in O(1) average time complexity.</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N).</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>Expected Auxiliary Space:</strong> O(1).</span></p>

<p dir="ltr"><strong><span style="font-size:18px">Constraints:</span></strong></p>

<p dir="ltr"><span style="font-size:18px">0 &lt;= capacity &lt;= 10<sup>4</sup></span></p>

<p dir="ltr"><span style="font-size:18px">0 &lt;= key &lt;= 10<sup>5</sup></span></p>

<p dir="ltr"><span style="font-size:18px">0 &lt;= value &lt;= 10<sup>6</sup></span></p>

<p dir="ltr"><span style="font-size:18px">At most 2 *10<sup>5</sup>&nbsp;calls will be made to get and put.</span></p>

<p>&nbsp;</p>
</div>