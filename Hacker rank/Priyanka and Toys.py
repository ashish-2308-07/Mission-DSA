#!/bin/python3

import math
import os
import random
import re
import sys
def toys(w):
    minimum = min(w) + 4
    containers = 1
    w = sorted(w)
    for toy in w:
        if toy > minimum:
            minimum = toy + 4
            containers += 1
    return containers

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    w = list(map(int, input().rstrip().split()))

    result = toys(w)

    fptr.write(str(result) + '\n')

    fptr.close()
