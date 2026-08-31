t = int(input())
for tt in range(0,t):
    str = input().split(' ')
    x = int(str[0])
    n = int(str[1])
    m = int(str[2])
    fc = x
    cf = x
    f = min(n,40)
    c = min(m,40)
    op = 0
    while fc > 0 :
        if f == 0 :
            op = 1
        if c == 0 and f == 0:
            break
        if op == 0 :
            fc //= 2
            f -= 1
        else:
            fc = (fc+1)//2
            c -= 1
    f = min(n, 40)
    c = min(m, 40)
    op = 1
    while cf > 0 :
        if c == 0 :
            op = 0
        if f == 0 and c == 0:
            break
        if op == 0 :
            cf //= 2
            f -= 1
        else :
            cf = (cf+1)//2
            c -= 1

    print(min(fc,cf) , end = ' ')
    print(max(fc,cf))