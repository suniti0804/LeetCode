# Express as sum of power of natural numbers
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two numbers<strong>&nbsp;n</strong>&nbsp;and <strong>x</strong>, find out the total number of ways <strong>n</strong>&nbsp;can be expressed as sum of<strong>&nbsp;x</strong>th power of unique natural numbers.As total number of ways can be very large ,so&nbsp;return the number of ways&nbsp;modulo 10<sup>9 </sup>+ 7.&nbsp;</span><br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: n = 10, x = 2
<strong>Output:</strong>&nbsp;1&nbsp;
<strong>Explanation</strong>: 10 = 1<sup>2</sup> + 3<sup>2</sup>, Hence total 1 possibility.</span><span style="font-size:18px"> 
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>n = 100, x = 2
<strong>Output:&nbsp;</strong>3
<strong>Explanation</strong>: 100 = 10<sup>2</sup> 
6<sup>2</sup> + 8<sup>2</sup> and 1<sup>2</sup> + 3<sup>2</sup> + 4<sup>2</sup> + 5<sup>2</sup> + 7<sup>2</sup> 
Hence total 3 possibilities.</span><span style="font-size:18px"> 
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>numOfWays()&nbsp;</strong>which takes n&nbsp;and x&nbsp;as input parameter and returns&nbsp;the total number of ways n&nbsp;can be expressed as sum of xth power of unique natural numbers.<br>
<br>
<strong>Expected Time Complexity:</strong> O(n<sup>2</sup>logn)<br>
<strong>Expected Auxiliary Space:</strong> O(n)<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= n&nbsp;&lt;= 10<sup>3</sup><br>
1 &lt;= x&nbsp;&lt;= 5</span></p>
 <p></p>
            </div>