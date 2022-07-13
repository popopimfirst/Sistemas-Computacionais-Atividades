def divisor(a,b):
    res=0
    if a<0 and b<0:
        a=-a
        b=-b
    B=b
    A=a
    if a<0:
        a=-a
    if b<0:
        b=-b
    while b>0:
        if b<=a:
            a=a-b
            res=res+1
        else:
            break
    if A<0 or B<0:
        return -res,-a
    return res,a
print(divisor(-14,3))
