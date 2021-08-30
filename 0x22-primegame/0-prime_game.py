#!/usr/bin/python3
"""Prime Game
"""


def isWinner(x, nums):
    '''
    where x is the number of rounds and nums is an array of n
    '''
    prime = 0
    not_prime = 0
    if nums and x > 0:
        for i in nums:
            if(i % 2 == 0):
                prime += 1
            else:
                not_prime += 1
        print(prime, not_prime)
        if prime >= not_prime:
            return "Maria"
        else:
            return "Ben"
    else:
        return None
