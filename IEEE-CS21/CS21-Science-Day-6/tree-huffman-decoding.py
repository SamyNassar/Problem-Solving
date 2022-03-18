
"""
PROBLEM LINK : https://www.hackerrank.com/challenges/tree-huffman-decoding/problem
"""


def decodeHuff(root, s):
    currentNode = root
    res = ""
    for i in s:
        
        if int(i) == 1:
            currentNode = currentNode.right
        else:
            currentNode = currentNode.left

        if currentNode.right == None and currentNode.left == None:
            res += currentNode.data
            currentNode = root
    print(res)