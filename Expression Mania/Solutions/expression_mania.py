t=input()
t=int(t)
for o in range(t):
    m=input()
    variables=[]
    st=[]
    k=[]
    sign='+'
    i=1
    for l in m:
        if l == '+':
            sign='+'
        elif l == '-':
            sign='-'
        elif l == '(':
            st.append((i) if (sign == '+') else (i*-1))
            sign= '+'
        elif l == ')':
            s=st.pop()
            if s < 0:
                variables.reverse()
                l=0
                for a in variables:
                    a=int(a)
                    if abs(a) < (s*-1):
                        break;
                    if a < i:
                        variables.remove(a)
                        a=a*-1
                        variables.insert(l,a)
                    l=l+1
                variables.reverse()
            sign='+'
        else :
            variables.append((i) if (sign == '+') else (i*-1))
        i=i+1
    result=''
    for a in variables:
            a=int(a)
            if a < 0:
                result = result  + '-'
                result = result  + m[abs(a)-1]
            else :
                result = result + '+'
                result = result + m[a-1]
    print(result)
