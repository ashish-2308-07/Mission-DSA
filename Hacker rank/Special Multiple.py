#!/bin/python3

import math
import os
import random
import re
import sys
def solve(n):
    i = 1
    while (True):
        X = int(bin(i)[2:].replace('1', '9'))
        if X % n == 0:
            return str(X)
        i += 1
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = solve(n)

        fptr.write(result + '\n')

    fptr.close()
