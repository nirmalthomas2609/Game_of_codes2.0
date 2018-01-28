import random
f = open('input105.txt','w')
k = 100
f.write(str(k)+'\n')

for i in range(k):
    # n = random.randrange(100001,999999)
    n = random.randrange(10001,99999)
    for i in range(n):
        num = random.randrange(0,9)
        f.write(str(num))
    f.write('\n')