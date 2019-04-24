** Principle

2D array may be internally implented as 1D array. 
In fact, some languages may not support multidimensional array at all.

Example : C ++ stores 2D array as 1D.
In Array of M*N, 
A[i][j] is actually stored in A[i*N + j]

In Java,
2D array is actually a 1D array which contains M elements, each of which is an array of N integers.


## Diagonal Traverse

* Given a matrix of M* N elements, return all elements of the matrix in diagonal order 

