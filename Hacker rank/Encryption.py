import math
import os
import random
import re
import sys
def encryption(s):
    n = len(s)
    x = math.sqrt(n)
    nc = math.ceil(x)

    i = 0
    j = 0
    q = []
    for _ in range(n):
        if i+j > n-1:
            q.append(' ')
            j += 1
            i = 0
        q.append(s[i+j])
        i += nc
        
    return ''.join(q)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = encryption(s)

    fptr.write(result + '\n')

    fptr.close()
