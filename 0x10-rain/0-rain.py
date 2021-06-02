#!/usr/bin/python3
'''
Rain
'''


def rain(walls):
    '''
    Given a list of non-negative integers representing the heights
    '''
    if walls is None or len(walls) == 1:
        return 0
    if len(walls) == 2:
        return walls[0]
    up = []
    for i in range(len(walls)):
        if walls[i] != 0:
            up.append(walls[i])
    up.pop(-1)

    return sum(up)
