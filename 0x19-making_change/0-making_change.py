#!/usr/bin/python3
'''
Making Change
'''


def makeChange(coins, total):
    '''
    Given a pile of coins of different values,
    determine the fewest number of coins needed to meet a given amount total
    '''
    s = 0
    if total <= 0:
        return 0
    coins.sort()
    coins.reverse()
    for c in coins:
        s += total // c
        total = total % c
    if (total != 0):
        return -1
    return s
