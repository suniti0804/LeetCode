# Pots of Gold Game
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Two players <strong>X</strong> and <strong>Y</strong> are playing a game in which there are pots of gold arranged in a line, each containing some gold coins. They get alternating turns in which the player can pick a pot from one of the ends of the line. The winner is the player who has a higher number of coins at the end. The objective is to <strong>maximize</strong> the number of coins collected by <strong>X</strong>, assuming <strong>Y</strong> also plays optimally.</span></p>

<p><span style="font-size:18px">Return the <strong>maximum</strong> coins <strong>X</strong> could get while playing the game. Initially,&nbsp;<strong>X</strong> starts the game.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<strong>N = </strong>4
<strong>Q[] = </strong>{8, 15, 3, 7}
<strong>Output: </strong>22
<strong>Explanation: </strong>Player <strong>X</strong>&nbsp;starts and picks 7. Player <strong>Y</strong>&nbsp;
picks the pot containing <strong>8</strong>. Player <strong>X</strong>&nbsp;picks the pot
containing <strong>15</strong>. Player <strong>Y</strong>&nbsp;picks 3.
Total coins collected by <strong>X</strong>&nbsp;= 7 + 15 = 22.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<strong>N </strong>=<strong> </strong>4
<strong>A[] </strong>=<strong> </strong>{2, 2, 2, 2}
<strong>Output: </strong>4 
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>maxCoins()</strong> which takes an integer N and an array of size N&nbsp; as input and returns the maximum coins collected by player&nbsp;<strong>X</strong>.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N<sup>2</sup>)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N&nbsp;&lt;= 500<br>
1 &lt;= A[i] &lt;= 10<sup>3</sup></span></p>
 <p></p>
            </div>