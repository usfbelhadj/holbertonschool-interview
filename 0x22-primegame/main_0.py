#!/usr/bin/python3

isWinner = __import__('0-prime_game').isWinner


print("Winner: {}".format(isWinner(4, [2, 5, 1, 4, 3])))
print("Winner: {}".format(isWinner(6, [1, 1, 0, 0, 1, 8])))
