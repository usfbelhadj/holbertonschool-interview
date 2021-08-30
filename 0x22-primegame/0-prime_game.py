#!/usr/bin/python3


def isWinner(x, nums):
    '''
    where x is the number of rounds and nums is an array of n
    '''
    if nums:
        if (x % 2 == 0):
            return "Ben"
        else:
            return "Maria"
    else:
        return None
