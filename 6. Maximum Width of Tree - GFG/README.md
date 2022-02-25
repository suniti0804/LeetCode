# 6. Maximum Width of Tree
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a Binary Tree, find the maximum width of it.&nbsp;<strong>Maximum width </strong>is defined as the maximum number of nodes in any level.<br>
For example, maximum width of following tree is 4 as there are 4 nodes at 3<sup>rd</sup> level.</span></p>

<p><span style="font-size:18px">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3<br>
&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp; \ &nbsp;&nbsp; /&nbsp;&nbsp;&nbsp; \<br>
&nbsp; 4&nbsp;&nbsp;&nbsp; 5&nbsp;&nbsp; 6&nbsp;&nbsp;&nbsp; 7<br>
&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 8</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1
 &nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;\
 &nbsp; &nbsp;2&nbsp; &nbsp; &nbsp;&nbsp;3
<strong>Output: </strong>2</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10
 &nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \
&nbsp;&nbsp;&nbsp;&nbsp;20&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 30
 &nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;\
 &nbsp;40&nbsp;&nbsp;&nbsp; 60
<strong>Output: </strong>2
</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't have to read any input. Just complete the <strong>function getMaxWidth()&nbsp;</strong>that takes <strong>node </strong>as <strong>parameter </strong>and <strong>returns </strong>the<strong> maximum width</strong>. The <strong>printing </strong>is <strong>done </strong>by the <strong>driver </strong>code.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= Number of Nodes&lt;= 10<sup>5</sup><br>
0 &lt;= nodes values &lt;= 10<sup>5</sup></span><br>
&nbsp;</p>
 <p></p>
            </div>