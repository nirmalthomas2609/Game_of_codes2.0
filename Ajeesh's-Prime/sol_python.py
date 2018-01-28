import math

sieve = [True for i in range(1000001)]
sieve[0] = False
sieve[1] = False

def boolSieve():
    r = int(math.sqrt(1000001)+1)
    for i in range(2,r,1):
        if(sieve[i]):
            for j in range(i*i,1000001,i):
                sieve[j] = False
    return

def solve():
    boolSieve()
    t = input()
    output = []
    while(t):
        t = t-1
        s = raw_input()
        visited = [0]*1000001
        count = 0
        for i in range(len(s)):
            num = 0
            j = 0
            while( j <= 5 and i+j < len(s)):
                num = num*10 + int(s[i+j])
                if(sieve[num] == 1 and visited[num] == 0):
                    count += 1
                    visited[num] = 1
                j += 1
        output += [count]
        print(count)
    # print (output)
solve()
