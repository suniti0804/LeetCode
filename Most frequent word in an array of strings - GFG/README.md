# Most frequent word in an array of strings
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>arr </strong>containing <strong>N</strong> words consisting <strong>of lowercase characters</strong>. Your task is to find the <strong>most frequent</strong> word in the array. If <strong>multiple </strong>words have same frequency, then print the<strong> word whose first occurence occurs last</strong> in the array as compared to the other strings with same frequency.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 3
arr[] = {geeks,for,geeks}
<strong>Output: </strong>geeks<strong>
Explanation: </strong>"geeks" comes 2 times.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 2
arr[] = {hello,world}
<strong>Output: </strong>world<strong>
Explanation: </strong>"hello" and "world" both
have 1 frequency. We print world as
its first occurence comes last in the
input array.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete<strong>&nbsp;mostFrequentWord&nbsp;</strong>function which takes array of strings and its length as arguments and returns the most frequent word. The printing is done by the driver code.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N * WORD_LEN).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N * WORD_LEN).</span></p>

<div><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 50000<br>
1 &lt;= |each string| &lt;= 50</span></div>

<div><span style="font-size:18px">Sum of length of every string does not exceed&nbsp;5*10<sup>5</sup></span></div>
 <p></p>
            </div>