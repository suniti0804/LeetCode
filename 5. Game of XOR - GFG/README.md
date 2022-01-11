# 5. Game of XOR
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>A[]</strong> of size <strong>N.&nbsp;</strong>The value of an&nbsp;array is denoted by&nbsp;the bit-wise XOR of all elements it contains.&nbsp;Find the bit-wise XOR of the&nbsp;values of all&nbsp;subarrays of A[]. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong><strong>N = </strong>3, <strong>A[]</strong> = {1,2,3} 
<strong>Output: </strong>2
<strong>Explanation:</strong>
xor[1] = 1, 
xor[1, 2] = 3
xor[2, 3] = 1
xor[1, 2, 3] = 0
xor[2] = 2
xor[3] = 3
Result : 1 ^ 3 ^ 1 ^ 0 ^ 2 ^ 3 = 2
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong><strong>N = </strong>2, <strong>A[]</strong> = {1,2} 
<strong>Output: </strong>0
<strong>Explanation:</strong>
xor[1] = 1, 
xor[1, 2] = 3
xor[2] = 2
Result : 1 ^ 3 ^ 2 = 0</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>gameOfXor()</strong> which takes an integer N and&nbsp;array A[] as input parameters and returns the answer.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt;= N &lt;= 10<sup>5</sup></span><br>
<span style="font-size:18px">1 &lt;= A[i ]&lt;= 10<sup>5</sup></span></p>
 <p></p>
            </div>