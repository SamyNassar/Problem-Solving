#!/bin/python3
"""
PROBLEM LINK: https://codeforces.com/contest/382/problem/A
"""

def checkScaleEquilibrium(leftScale, rightScale, unusedMasses):

    leftScaleQuantity = len(leftScale)
    rightScaleQuantity = len(rightScale)
    unusedMassesQuantity = len(unusedMasses)

    scalesDifferential = abs(leftScaleQuantity - rightScaleQuantity)

    if(unusedMassesQuantity >= scalesDifferential):
        for mass in unusedMasses:
            if(leftScaleQuantity > rightScaleQuantity):
                rightScale += mass
                rightScaleQuantity += 1
            else:
                leftScale += mass
                leftScaleQuantity += 1
        if(len(leftScale) == len(rightScale)):
            return leftScale + "|" + rightScale
        else:
            return "Impossible"
    else:
        return "Impossible"
    


if __name__ == '__main__':

    twoScales = input().strip().split("|")
    unusedMasses = input().strip()

    leftScale = twoScales[0]
    rightScale = twoScales[1]

    res = checkScaleEquilibrium(leftScale, rightScale, unusedMasses)

    print(res)
