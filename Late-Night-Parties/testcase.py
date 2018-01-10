import random
f = open('input5.txt','w')
f.write('5\n')

for i in range(5):
    n = random.randrange(80,90)
    b = random.randrange(450,480)
    n_s = str(n)
    b_s = str(b)
    f.write(b_s+' '+n_s+'\n')    
    for i in range(n):
        s1 = str(random.randrange(1,100))
        s2 = str(random.randrange(1,100))
        f.write(s1+' '+s2+"\n")