#!/bin/python3
"""
PROBLEM LINK: http://codeforces.com/contest/9/problem/A
"""

from fractions import Fraction

def getChance(y, w):
    DICE_NUM = 6   
    biggestPoint = y if y > w else w
    chance = Fraction(DICE_NUM - biggestPoint + 1, DICE_NUM)
    return chance if chance != 1 else "1/1"

        

if __name__ == '__main__':

    first_multiple_input = input().rstrip().split()

    y = int(first_multiple_input[0])

    w = int(first_multiple_input[1])

    result = getChance(y, w)
    print(result)
