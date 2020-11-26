#!/bin/python3
"""
PROBLEM LINK: https://www.hackerrank.com/challenges/flipping-the-matrix/problem
"""

# Complete the flippingMatrix function below.
def flippingMatrix(n, matrix):
    maxSum = 0

    for x in range(n):
        for y in range(n):
            maxSum += max(matrix[x][y], matrix[x][2*n -1 -y], matrix[2*n -1 -x][y], matrix[2*n -1 -x][2*n -1 -y])

    return maxSum

    
if __name__ == '__main__':
    
    q = int(input())

    for q_itr in range(q):
        n = int(input())

        matrix = []

        for _ in range(2*n):
            matrix.append(list(map(int, input().rstrip().split())))

        result = flippingMatrix(n, matrix)

        print(result)
