#!/usr/bin/python3
'''
Pascal's Triangle
'''


def pascal_triangle(n):
    """
    Pascal's Triangle
    """
    alpha = []
    if n <= 0:
        return alpha
    alpha = [[1]]
    if n == 1:
        return alpha
    alpha = []
    for i in range(n):
        base = [1]
        for j in range(i):
            base.append(sum(alpha[-1][j:j+2]))
        alpha.append(base)
    return alpha
