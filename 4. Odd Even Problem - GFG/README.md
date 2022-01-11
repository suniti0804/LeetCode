# 4. Odd Even Problem
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a string&nbsp;<strong>S</strong>&nbsp;of&nbsp;<strong>lowercase english&nbsp;</strong>characters, find out whether the summation of&nbsp;<strong>X</strong>&nbsp;and&nbsp;<strong>Y</strong>&nbsp;is<strong>&nbsp;<em>even</em>&nbsp;</strong>or<strong>&nbsp;<em>odd</em></strong>, where&nbsp;<strong><em>X</em></strong>&nbsp;is the count of characters which occupy&nbsp;<strong>even </strong>positions&nbsp;in english alphabets and have&nbsp;<strong>positive even </strong>frequency, and&nbsp;<strong><em>Y</em></strong>&nbsp;is the count of characters which occupy&nbsp;<strong>odd </strong>positions&nbsp;in english alphabets and have&nbsp;<strong>positive&nbsp;</strong><strong>odd </strong>frequency.<br>
Note: Positive means greater than zero.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: S</strong> = "abbbcc"
<strong>Output:</strong> "ODD"
<strong>Explanation: </strong>X = 0 and&nbsp;Y = 1 so (X +&nbsp;Y) is 
ODD. 'a' occupies 1st place(odd) in english 
alphabets and its frequency is odd(1), 'b' 
occupies 2nd place(even) but its frequency 
is odd(3) so it doesn't get counted and 'c' 
occupies 3rd place(odd) but its frequency 
is even(2) so it also doesn't get counted.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: S</strong> = "nobitaa"
<strong>Output:</strong> "EVEN"
<strong>Explanation:</strong>&nbsp;X = 0 and&nbsp;Y = 2 so (X +&nbsp;Y) is
EVEN.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>evenOdd()&nbsp;</strong>which takes S&nbsp;as input parameter and returns "EVEN"&nbsp; if&nbsp; X + Y is even, "ODD" otherwise.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1)&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |S|&nbsp;≤&nbsp;1000</span></p>
 <p></p>
            </div>