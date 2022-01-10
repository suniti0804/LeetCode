# 7. 3 Divisors
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You have given a list&nbsp;of q queries and for every query, you are given an integer N.&nbsp; The task is to find how many numbers<strong> less than or equal to N </strong>have numbers of divisors exactly equal to <strong>3</strong>. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>q = 1
query[0] = 6
<strong>Output:</strong>
1
<strong>Explanation:</strong>
There is only one number 4 which has
exactly three divisors 1, 2 and 4 and
less than equal to 6.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>q = 2
query[0] = 6
query[1] = 10
<strong>Output:
</strong>1
2
<strong>Explanation:
</strong>For query 1 it is covered in the
example 1.
query 2: There are two numbers 4 and 9
having exactly 3 divisors and less than
equal to 10.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>threeDivisors()</strong>&nbsp;which takes an integer <strong>q</strong>&nbsp;and a list of integer of size <strong>q</strong> as input parameter and returns the list containing the count of the numbers having exactly 3 divisors for each query.<br>
<br>
<strong>Expected Time Complexity:</strong>&nbsp;O(NlogN),&nbsp;<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N), where N is min(10^6,N)</span></p>

<p><span style="font-size:18px"><strong>Constraints :</strong><br>
1 &lt;= q &lt;=&nbsp;10<sup>3</sup><br>
1 &lt;= query[i]&nbsp;&lt;= 10<sup>12</sup></span></p>
 <p></p>
            </div>