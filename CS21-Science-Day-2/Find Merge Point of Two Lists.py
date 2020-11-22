#!/bin/python3
"""
PROBLEM LINK: https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem
"""
import math
import os
import random
import re
import sys

class SinglyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert_node(self, node_data):
        node = SinglyLinkedListNode(node_data)

        if not self.head:
            self.head = node
        else:
            self.tail.next = node


        self.tail = node

def print_singly_linked_list(node, sep, fptr):
    while node:
        fptr.write(str(node.data))

        node = node.next

        if node:
            fptr.write(sep)

# Complete the findMergeNode function below.

#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#
def findMergeNode(head1, head2):
    # currentHead1 = head1
    # currentHead2 = head2
    
    # while(currentHead1 != currentHead2):
    #     if currentHead1.next == None:
    #         currentHead1.next = head2
    #     else:
    #         currentHead1 = currentHead1.next
            
    #     if currentHead2.next == None:
    #         currentHead2.next = head1
    #     else:
    #         currentHead2 = currentHead2.next
            
    # return currentHead1.data
    list1 = []
    list2 = []
    currentHead1 = head1
    currentHead2 = head2
    
    while currentHead1 != None:
        list1.append(currentHead1.data)
        currentHead1 = currentHead1.next
        
    while currentHead2 != None:
        list2.append(currentHead2.data)
        currentHead2 = currentHead2.next
    
    l1 = len(list1)
    l2 = len(list2)
        
    smallestLength = l1 if l1 < l2 else l2
    for i in range(1, smallestLength):
        if list1[-i] != list2[-i]:
            return list1[-i + 1]
    return list1[-smallestLength +1]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    tests = int(input())

    for tests_itr in range(tests):
        index = int(input())

        llist1_count = int(input())

        llist1 = SinglyLinkedList()

        for _ in range(llist1_count):
            llist1_item = int(input())
            llist1.insert_node(llist1_item)
            
        llist2_count = int(input())

        llist2 = SinglyLinkedList()

        for _ in range(llist2_count):
            llist2_item = int(input())
            llist2.insert_node(llist2_item)
            
        ptr1 = llist1.head;
        ptr2 = llist2.head;

        for i in range(llist1_count):
            if i < index:
                ptr1 = ptr1.next
                
        for i in range(llist2_count):
            if i != llist2_count-1:
                ptr2 = ptr2.next

        ptr2.next = ptr1

        result = findMergeNode(llist1.head, llist2.head)

        fptr.write(str(result) + '\n')

    fptr.close()