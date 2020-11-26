#!/bin/python3
"""
PROBLEM LINK: https://www.hackerrank.com/challenges/largest-rectangle/problem
"""

# Complete the largestRectangle function below.
def largestRectangle(h):
    maxSize = 0
    positions = []
    heights = []
    h.append(0)

    for i in range(len(h)):

        if not positions or h[i] > heights[-1]:
            positions.append(i)
            heights.append(h[i])
            continue
        elif h[i] < heights[-1]:
            while heights and h[i] < heights[-1]:

                tempHeight = heights.pop()
                tempPosition = positions.pop()
                currentSize = tempHeight * (i - tempPosition)
        
                if currentSize > maxSize:
                    maxSize = currentSize

            positions.append(tempPosition)
            heights.append(h[i])
    
    return maxSize

    
if __name__ == '__main__':

    n = int(input())

    h = list(map(int, input().rstrip().split()))

    result = largestRectangle(h)

    print(result)

 
