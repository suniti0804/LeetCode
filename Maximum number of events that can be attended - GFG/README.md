# Maximum number of events that can be attended
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">There are <strong>N</strong> events in&nbsp;Geek's city. You are given two arrays <strong>start[]</strong> and <strong>end[] </strong>denoting starting and ending day of the events respectively. Event i starts at start[i] and ends at end[i].<br>
You can attend an event i at any day <strong>d</strong> between start[i] and end[i] (start[i] ≤ d ≤ end[i]). But you can attend <strong>only one event in a day</strong>.<br>
Find the maximum number of events you can attend.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
start[] = {1, 2, 1}
end[] = {1, 2, 2}
<strong>Output:
</strong>2
<strong>Explanation:</strong>
You can attend a maximum of two events.
You can attend 2 events by attending 1st event
at Day 1 and 2nd event at Day 2.</span>
</pre>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
start[i] = {1, 2, 3}
end[i] = {2, 3, 4} 
<strong>Output :</strong>
3</span>
<span style="font-size:18px"><strong>Explanation:</strong>
You can attend all events by attending event 1
at Day 1, event 2 at Day 2, and event 3 at Day 3.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>maxEvents()</strong>&nbsp;which takes an integer N and two arrays start[], and end[] of size N as input parameters and returns the maximum number of events that can be attended by you.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(NlogN)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ start[i]&nbsp;≤ end[i] ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>