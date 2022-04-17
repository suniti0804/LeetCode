# Swap and Maximize
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>a[ ]</strong> of&nbsp;<strong>N</strong>&nbsp;elements. Consider array as a circular array <em>i.e.</em> element after <strong>a<sub>n</sub></strong>&nbsp;is <strong>a<sub>1</sub></strong>. The task is to find maximum sum of the absolute difference between consecutive elements with rearrangement of array elements allowed <em>i.e</em>. after any rearrangement of array elements find <strong>|a<sub>1</sub>&nbsp;– a<sub>2</sub>| + |a<sub>2</sub>&nbsp;– a<sub>3</sub>| + …… + |a<sub>n-1&nbsp;</sub>–&nbsp;a<sub>n</sub>| + |a<sub>n</sub>&nbsp;– a<sub>1</sub>|</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
a[] = {4, 2, 1, 8}
<strong>Output:</strong> 
18
<strong>Explanation</strong>: Rearrangement done is {1, 8, 
2, 4}. Sum of absolute difference between 
consecutive elements after rearrangement = 
|1 - 8| + |8 - 2| + |2 - 4| + |4 - 1| = 
7 + 6 + 2 + 3 = 18.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 2
a[] = {10, 12}
<strong>Output:</strong> 
4
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>maxSum</strong>() that takes <strong>array a[ ]</strong>&nbsp;and its size<strong>&nbsp;N</strong> as input parameters and return the maximum sum using above method.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N*logN)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 ≤ N ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>