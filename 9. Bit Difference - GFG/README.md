# 9. Bit Difference
## Hard 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">We define f&nbsp;(X, Y)&nbsp;as number of different corresponding bits in binary representation of X and Y. For example, f (2, 7)&nbsp;= 2, since binary representation of 2 and 7 are 010&nbsp;and 111, respectively. The first and the third bit differ, so&nbsp;f (2, 7)&nbsp;= 2.</span></p>

<p><span style="font-size:18px">You are given an array <strong>A</strong> of <strong>N</strong> integers, A<sub>1</sub>, A<sub>2</sub>&nbsp;,…, A<sub>N</sub>. Find sum of f(A<sub>i</sub>, A<sub>j</sub>) for all ordered pairs (i, j) such that 1 ≤ i, j ≤ N. Return the answer modulo 10<sup>9</sup>+7.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 2
A = {2, 4}
<strong>Output:</strong> 4
<strong>Explaintion:</strong> We return 
f(2, 2) + f(2, 4) + 
f(4, 2) + f(4, 4) = 
0 + 2 + 
2 + 0 = 4.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 3
A = {1, 3, 5}
<strong>Output:</strong> 8
<strong>Explaination:</strong> We return 
f(1, 1) + f(1, 3) + f(1, 5) + 
f(3, 1) + f(3, 3) + f(3, 5) + 
f(5, 1) + f(5, 3) + f(5, 5) = 
0 + 1 + 1 + 
1 + 0 + 2 + 
1 + 2 + 0 = 8.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>countBits()</strong> which takes the value N and the array A as input parameters and returns the desired count modulo 10<sup>9</sup>+7.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N * log<sub>2</sub>(Max(A<sub>i</sub>)))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
2<sup>0</sup> ≤&nbsp;A[i] &lt;&nbsp;2<sup>31</sup></span></p>
 <p></p>
            </div>