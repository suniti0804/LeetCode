# 5. Maximum Difference
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given array A[] of integers, the task is to complete the function <strong>findMaxDiff</strong>&nbsp;which finds the maximum absolute difference between nearest left and right smaller element of every element in array.If the element is the&nbsp;leftmost element, nearest smaller element on left side is considered as 0. Similarly if the element is the&nbsp;rightmost elements, smaller element on right side is considered as 0.</span></p>

<p><span style="font-size:18px">Examples:</span></p>

<pre><span style="font-size:18px">Input : arr[] = {2, 1, 8}
Output : 1
Left smaller  LS[] {0, 0, 1}
Right smaller RS[] {1, 0, 0}
Maximum Diff of abs(LS[i] - RS[i]) = 1 

Input  : arr[] = {2, 4, 8, 7, 7, 9, 3}
Output : 4
Left smaller   LS[] = {0, 2, 4, 4, 4, 7, 2}
Right smaller  RS[] = {0, 3, 7, 3, 3, 3, 0}
Maximum Diff of abs(LS[i] - RS[i]) = 7 - 3 = 4 

Input : arr[] = {5, 1, 9, 2, 5, 1, 7}
Output : 1</span></pre>

<p><span style="font-size:18px"><strong>Input:</strong><br>
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow .Each test case contains an integer N denoting the size of the array A. In the next line are N space separated values of the array A.<br>
<br>
<strong>Output:</strong><br>
For each test case output will be in a new line denoting the&nbsp;the maximum absolute difference between nearest left and right smaller element of every element in array.<br>
<br>
<strong>Constraints:</strong><br>
1&lt;=T&lt;=100<br>
1&lt;=N&lt;=100<br>
1&lt;=A[ ]&lt;=100<br>
<br>
<strong>Example(To be used only for expected output) :<br>
Input:</strong><br>
2<br>
3<br>
2 1 8<br>
7<br>
2&nbsp;4&nbsp;8&nbsp;7&nbsp;7&nbsp;9&nbsp;3<br>
<strong>Output</strong><br>
1<br>
4</span></p>
 <p></p>
            </div>