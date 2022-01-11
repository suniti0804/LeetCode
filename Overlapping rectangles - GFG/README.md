# Overlapping rectangles
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two rectangles, find if the given two rectangles overlap or not. A rectangle is denoted by providing the x and y coordinates of two points: the left top corner and the right bottom corner of the rectangle. Two rectangles sharing a side are considered overlapping. (L1 and R1 are the extreme points of the first rectangle and L2 and R2 are the extreme points of the second rectangle).</span></p>

<p><span style="font-size:18px"><strong>Note:&nbsp;</strong>It may be assumed that the rectangles are parallel to the coordinate axis.</span></p>

<p><span style="font-size:18px"><a href="http://d1hyf4ir1gqw6c.cloudfront.net//wp-content/uploads/rectanglesOverlap.png" target="_blank"><img alt="rectanglesOverlap" class="aligncenter size-full wp-image-126964 img-responsive" src="http://d1hyf4ir1gqw6c.cloudfront.net/wp-content/uploads/rectanglesOverlap.png" style="height:196px; width:303px"></a></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
L1=(0,10)
R1=(10,0)
L2=(5,5)
R2=(15,0)
<strong>Output:</strong>
1
<strong>Explanation:</strong>
The rectangles overlap.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
L1=(0,2)
R1=(1,1)
L2=(-2,0)
R2=(0,-3)
<strong>Output:</strong>
0
<strong>Explanation:</strong>
The rectangles do not overlap.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>doOverlap()</strong> which takes the points L1, R1, L2, and R2 as input parameters and returns 1 if the rectangles overlap. Otherwise, it returns 0.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(1)<br>
<strong>Expected Auxillary Space:</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
-10<sup>9</sup>&lt;=x-coordinate,y-coordinate&lt;=10<sup>9</sup></span></p>
 <p></p>
            </div>