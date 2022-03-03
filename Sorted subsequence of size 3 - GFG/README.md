# Sorted subsequence of size 3
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>A</strong> of <strong>N</strong> integers, find any 3 elements in it such that A[i] &lt; A[j] &lt; A[k] and i &lt; j &lt; k. </span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 5
A[] = {1,2,1,1,3}
<strong>Output: </strong>1<strong>
Explanation: </strong>a sub-sequence 1 2 3 exist<strong>.</strong></span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 3
A[] = {1,1,3}
<strong>Output: </strong>0<strong>
Explanation: </strong>no such sub-sequence exist.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Your task is to complete the function <strong>find3Numbers</strong>&nbsp;which&nbsp;finds any 3 elements in it such that A[i] &lt; A[j] &lt; A[k] and i &lt; j &lt; k. You need to return them as a vector/ArrayList/array (depending on the language cpp/Java/Python), if no such element is present then&nbsp;return the empty vector of size 0.</span></p>

<p><span style="font-size:18px"><strong>Note</strong>: The output will be 1 if the sub-sequence returned by the function is&nbsp;present in array A else 0. If the sub-sequence returned by the function is not in the format as mentioned then the output will be -1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= A[i] &lt;= 10<sup>6</sup>, for each valid i</span></p>

<p><span style="font-size:14px"><strong>Note:&nbsp;</strong>The <strong>Input/Output</strong> format and <strong>Examples</strong> given are used for the system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p></p>
            </div>