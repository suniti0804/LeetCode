# Minimum operations to convert array A to B
## Hard 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two Arrays <strong>A[]</strong> and <strong>B[]</strong> of length <strong>N</strong> and <strong>M</strong> respectively. Find the minimum number of <strong>insertions</strong> and <strong>deletions</strong> on the array A[], required to make both the arrays identical.<br>
<strong>Note: </strong>Array B[] is sorted and all its elements are distinct, operations can be performed at any index not necessarily at end.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5, M = 3
A[] = {1, 2, 5, 3, 1}
B[] = {1, 3, 5}
<strong>Output:
</strong>4
<strong>Explanation:</strong>
We need to delete 2 and replace it with 3.
This costs 2 steps. Further, we will have to
delete the last two elements from A to
obtain an identical array to B. Overall, it
results in 4 steps.</span>
</pre>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 2, M = 2
A[] = {1, 4}
B[] = {1, 4}
<strong>Output :</strong>
0</span>
<span style="font-size:18px"><strong>Explanation:</strong>
Both the Arrays are already identical.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>minInsAndDel()</strong>&nbsp;which takes two integers N and M, and two arrays A of size N and B of size M respectively as input and returns the minimum insertions and deletions required.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(NlogN)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ A[i], B[i] ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>