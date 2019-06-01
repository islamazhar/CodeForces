##  [Codeforces Round #562 (Div. 2)](https://codeforces.com/contest/1169)
### [Official tutorial link](https://codeforces.com/blog/entry/67241) 
### Problem A:
`implementation`

Rem: mod with `n+1` not `n` 


### Problem B:
`implementation`

Observation 1: `(a_1, b_1)` one of the integers must be in the chosen two numbers.
Suppose we called it `x`.

Once we chose `x`, then we need to choose another integer `y` which
is present in the pairs where `x` is not present.
Keep one vector `counts` for each number which contains all pairs where it is present.  
We can choose `y` and see if if `counts[x] + counts[y]` is equal to N. 
Then `x` and `y` covers all `n` pairs. However we also need to exclude those pairs 
where `x` and `y` are both present. This can be done in `O(n)` time.

Runtime: `O(m*n)`

### Problem C:
`Binary Search`

Observation 1: The result is the maximum of the number of time
a value is increased by one.

Observation 2: The first element of the array will always be 
the minimum value. 

Suppose, we can increase a variable most `K` times. 
So we are going to make the first variable as small as we can
in the range `[a_1,a_1+K]` or `[a_1..m..K-m+a_1]`.   
Then for the next variable choose the minimum value in the 
range `[a_1,a_1+K]` or `[a_1..m..K-m+a_1]`. However we need to 
maintain the constraint `a_1 <= a_2`. Then for `a_3` same follows.
We can do this in a loop in `O(n)` times. Therefore Binary Search 
on `K`.   

Runtime `O(n)*log2(m)`. 

Wrong approach:
DP solution:
`F(pos,state)` where state = 1 means we changed the arr[pos] value to arr[pos-1]
and state = 0 means we do not change the arr[pos] and keep it as it was.

