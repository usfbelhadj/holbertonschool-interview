#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    s = 0
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                s += 3
                count += 1
    return (s + 2) - count
