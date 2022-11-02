Project-1

[22,27,16,2,18,6] ==> Insertion Sort

1. Insertion Sort Process

First Step: [22,27,16,2,18,6]
Second Step: [2,27,16,22,18,6]
Third Step: [2,6,16,22,18,27]
Fourth Step: [2,6,16,18,22,27]

2. Big-O Notation

-Steps-                             -Dimensions-

First Step: [22,27,16,2,18,6]           n 
Second Step: [2,27,16,22,18,6]          n-1
Third Step: [2,6,16,22,18,27]           n-2
Fourth Step: [2,6,16,18,22,27]          n-3

Total: n+(n-1)+(n-2)+(n-3) --> n*(n+1)/2 = (n^2+n)/2

=> Big O: O(n^2)

3. Time Complexity

Average Case: [22,27,16,2,18,6] First Step is an example of Average Case.
Worst Case: [2,27,16,22,18,6] Second Step is an example of Worst Case.
Best Case: [2,6,16,18,22,27] Fourth Step is an example of Best Case.

4. The location of number 18 is an example of Average Case when you finished to arrangement. [2,6,16,18,22,27] Because its location is in the middle. 
<!-- 18 Sayýsý dizi sýralandýktan sonra, dizinin ortasýnda kaldýðý için Average Case örneðidir. -->

Example-2:

[7,3,5,8,2,9,4,15,6]

Insertion Sort Process;

First Step: [2,3,5,8,7,9,4,15,6]
Second Step:[2,3,4,8,7,9,5,15,6]
Third Step:[2,3,4,5,7,9,8,15,6]
Fourth Step:[2,3,4,5,6,9,8,15,7]

