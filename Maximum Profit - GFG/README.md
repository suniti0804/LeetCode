# Maximum Profit
##  Hard 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">In the stock market, a person buys a stock and sells it on some future date. Given the stock prices of <strong>N </strong>days in an array <strong>A[ ]</strong> and a positive integer <strong>K</strong>, find out the maximum profit a person can make in at-most <strong>K </strong>transactions. A transaction is equivalent to (buying + selling) of a stock and new transaction can start only when the previous transaction has been completed.</span></p>

<p><br>
<strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> K = 2, N = 6
A = {10, 22, 5, 75, 65, 80}
<strong>Output:</strong> 87
<strong>Explaination:</strong> 
1st transaction: buy at 10 and sell at 22. 
2nd transaction : buy at 5 and sell at 80.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> K = 3, N = 4
A = {20, 580, 420, 900}
<strong>Output:</strong> 1040
<strong>Explaination:</strong> The trader can make at most 2 
transactions and giving him a profit of 1040.</span>
</pre>

<p><strong><span style="font-size:18px">Example 3:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input: </strong>K = 1, N = 5
A = {100, 90, 80, 50, 25}
<strong>Output:</strong> 0
<strong>Explaination:</strong> Selling price is decreasing 
daily. So seller cannot have profit.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>maxProfit() </strong>which takes the values K, N and the array A[] as input parameters and returns the maximum profit.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N*K)<br>
<strong>Expected Auxiliary Space:</strong> O(N*K)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 500<br>
1 ≤ K ≤ 200<br>
1 ≤ A[ i ] ≤ 1000</span></p>
 <p></p>
            </div>