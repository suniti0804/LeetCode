# Pair with largest sum which is less than K in the array
##  Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array&nbsp;<strong>arr</strong>&nbsp;of size&nbsp;<strong>N</strong>&nbsp;and an integer&nbsp;<strong>K</strong>.&nbsp;The task is to find the pair of integers in the array such that their sum is maximum but less than&nbsp;<strong>K.</strong></span></p>

<p><span style="font-size:18px"><strong>Note:</strong>Out of every possible pair, find pair with a maximum absolute difference.</span></p>

<p><span style="font-size:18px"><strong>Input:</strong><br>
The first line of input contains an integer&nbsp;<strong>T</strong>&nbsp;denoting the number of test cases. T testcases follow.<br>
The first line of each test case contains <strong>N</strong>&nbsp;and <strong>K</strong>, where <strong>N</strong>&nbsp;is the number of elements in the array and <strong>K</strong>&nbsp;is the bound. The second line of each test case contains the array elements.</span></p>

<p><span style="font-size:18px"><strong>Output:</strong><br>
Print the pair with the&nbsp;maximum sum less than <strong>K</strong>.</span></p>

<p><span style="font-size:18px"><strong>Your task:</strong></span><br>
<span style="font-size:18px">You <strong>don't </strong>have to take input. <strong>Complete </strong>the function&nbsp;<strong>Max_Sum()</strong>, which takes the <strong>array, N </strong>and<strong> K</strong> as parameters&nbsp;and&nbsp;<strong>returns&nbsp;</strong>the pair of integer if exist else return pair of zeros (0,0). The&nbsp;<strong>printing</strong><strong>&nbsp;</strong>is done by the&nbsp;<strong>driver</strong><strong>&nbsp;</strong>code.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ T ≤ 10<br>
0 ≤ N&nbsp;≤ 10<sup>5</sup><br>
0 ≤ K&nbsp;≤ 10<sup>6</sup><br>
0 ≤ arr[i]&nbsp;≤ 10<sup>5</sup></span><br>
<br>
<span style="font-size:18px"><strong>Example:</strong></span><br>
<span style="font-size:18px"><strong>Input:</strong><br>
2<br>
6 10<br>
2 3 4 6 8 10<br>
6 0<br>
2 3 4 6 8 10</span><br>
<span style="font-size:18px"><strong>Output:</strong><br>
3 6<br>
0 0</span></p>

<p><span style="font-size:18px"><strong>Explanation</strong>:<br>
<strong>Testcase 1</strong>: Pair (3,6) has a maximum sum equals 9 which is less than 10.<br>
<strong>Testcase 2</strong>: There doesn't exist any pair in the array with a sum less than 0.</span></p>
 <p></p>
            </div>