# 4. Longest common prefix
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two strings&nbsp;<strong>str1</strong> and <strong>str2</strong>&nbsp;of the same length. Find the longest prefix of str1 which is common in str2. </span><span style="font-size:18px"><strong> </strong></span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
str1 = "geeks"
str2 = "dgeek"<strong>
Output:</strong> 0 3
<strong>Explanation: 
</strong>Longest prefix from str1
present in str2 is "geek" 
starting at index 0 in str1
and ending at index 3.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>str1 = "practicegeeks"
str2 = "coderpractice"
<strong>Output: </strong>0 7
<strong>Explanation: 
</strong>Longest prefix from str1
present in str2 is "practice"
starting at index 0 and ending 
at index 7 in str1.</span></pre>

<p><span style="font-size:18px"><strong>Your&nbsp;Task:</strong><br>
You don't need to read input or print anything. Complete the function <strong>longestCommonPrefix()&nbsp;</strong>which takes&nbsp;strings str1 and&nbsp;str2 as input parameters&nbsp;and returns a list of integers whose first two elements&nbsp;denote&nbsp;the start and end index of str1&nbsp;at which the longest common prefix of str1 is found&nbsp;in str2.&nbsp;<br>
If there is no common prefix then the returning list should contain [-1,-1].</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|str1|*|str2|)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(|str1|)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;=&nbsp;|str1|,&nbsp;|str2|&nbsp;&lt;= 1000<br>
str1 and str2 contain only lowercase alphabets.</span></p>
 <p></p>
            </div>