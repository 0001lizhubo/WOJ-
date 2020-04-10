import re
n = int(input())
while n>0:
    n -= 1;
    s = input().rstrip()
    a = re.findall("dongfaxu", s)
    b = re.findall("zap", s)
    lena = len(a)
    lenb = len(b)
    if lena<=lenb:
        print("zap!")
    else:
        print("dongfaxu!")