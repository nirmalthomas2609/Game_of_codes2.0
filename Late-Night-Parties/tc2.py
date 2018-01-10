import random
f = open('input4.txt','w')
f.write('2\n')

for i in range(2):
    n = random.randrange(20,30)
    b = random.randrange(200,400)
    n_s = str(n)
    b_s = str(b)
    f.write(b_s+' '+n_s+'\n')    
    for i in range(n):
        s1 = str(random.randrange(30,100))
        s2 = str(random.randrange(50,100))
        f.write(s1+' '+s2+"\n")