# 7. Find missing in second array
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two arrays <strong>A</strong> and <strong>B </strong>contains&nbsp;integers of size <strong>N</strong> and <strong>M</strong>, the task is to find numbers which are present in the&nbsp;first array, but not present in the second array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 6, M = 5
A[] = {1, 2, 3, 4, 5, 10}
B[] = {2, 3, 1, 0, 5}
<strong>Output:</strong> 4 10
<strong>Explanation</strong>: 4 and 10 are present in 
first array, but not in second array.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 5, M = 5
A[] = {4, 3, 5, 9, 11}
B[] = {4, 9, 3, 11, 10}</span>
<span style="font-size:18px"><strong>Output: </strong>5  
<strong>Explanation</strong>: Second array does not 
contain element 5.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>findMissing</strong>() that takes array<strong> A, </strong>array<strong> B,&nbsp;</strong>integer<strong> N, </strong>and integer<strong> M&nbsp;</strong>&nbsp;as parameters and returns an array that contains the missing elements and the order of the elements should be the same as they are in array A.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N+M).<br>
<strong>Expected Auxiliary Space:</strong> O(M).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, M ≤ 10<sup>6</sup></span><br>
<span style="font-size:18px">-10<sup>6</sup> ≤ A[i], B[i] ≤ 10<sup>6</sup></span></p>
 <p></p>
            </div>