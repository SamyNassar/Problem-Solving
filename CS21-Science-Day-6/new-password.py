"""
PROBLEM LINK : http://codeforces.com/contest/770/problem/A
"""

import string
ALPHABETS = string.ascii_lowercase

# n : is the length of the password.
# k : is the number of distinct symbols in password.
def getNewPassword(n, k):
    newPassword = ""

    for i in range(n):
        newPassword += ALPHABETS[i%k]

    return newPassword


if __name__ == "__main__":
    constrains = input().strip().split()

    n = int(constrains[0])
    k = int(constrains[1])

    res = getNewPassword(n, k)

    print(res)