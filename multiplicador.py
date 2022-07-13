def multiplyer(a,b):
    if b<0:
        B=b
        res=0
        while b<0:
            res=res+a
            b=b+1
        if a<0 or B<0:
            return -res
        return res

    res=0
    while b>0:
        res=res+a
        b=b-1
    return res
print(multiply(3,-3))
