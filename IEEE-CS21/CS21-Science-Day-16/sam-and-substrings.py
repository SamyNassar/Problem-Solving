#!/bin/python3

import sys


mod = 1000000007


if __name__ == '__main__':
    n = list(map(int, list(sys.stdin.readline().strip())))

    total = 0
    j = 1

    for i, digit in enumerate(reversed(n)):
        
        total += j * digit * (len(n) - i) % mod
        j = ((10 * j) + 1) % mod

    print(total % mod)
