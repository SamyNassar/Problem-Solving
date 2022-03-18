#!/bin/python3
"""
PROBLEM LINK: https://codeforces.com/contest/1204/problem/A
"""

import math

TRAIN_ARRIVAL_BASE = 4

def getNumOfTrains(decimalArraivalTime):

    if decimalArraivalTime == 0:
        return 0

    numOfTrains = math.log(decimalArraivalTime, TRAIN_ARRIVAL_BASE)

    if decimalArraivalTime > TRAIN_ARRIVAL_BASE ** int(numOfTrains):
        numOfTrains += 1

    return int(numOfTrains)

if __name__ == '__main__':

    binaryArraivalTime = input().strip()
    decimalArraivalTime = int(binaryArraivalTime, 2)

    res = getNumOfTrains(decimalArraivalTime)
 
    print(res)