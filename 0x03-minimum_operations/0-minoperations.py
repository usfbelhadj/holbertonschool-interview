#!/usr/bin/python3

'''
Prototype: def minOperations(n)
Returns an integer
If n is impossible to achieve, return 0
'''


def minOperations(n):
    Count = 0
    NumDiv = 2
    while n > 1:
        if n % NumDiv == 0:
            n /= NumDiv
            Count += NumDiv
        else:
            NumDiv += 1
    return Count
