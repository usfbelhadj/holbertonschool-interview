#!/usr/bin/python3
'''
Rain
'''


def rain(walls):
    '''
    Given a list of non-negative integers representing the heights
    '''
    res = 0
    if len(walls) == 0:
        return res
    for i in range(1, len(walls) - 1):
        l = walls[i]
        r = walls[i]
        for j in range(i):
            l = max(l, walls[j])
        for j in range(i + 1, len(walls)):
            r = max(r, walls[j])

        res = res + (min(l, r) - walls[i])
    return res
