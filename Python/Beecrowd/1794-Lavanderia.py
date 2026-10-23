roupas = int(input())
lav_min, lav_max = map(int, input().split())
sec_min, sec_max = map(int, input().split())

lavar = roupas >= lav_min and roupas <= lav_max
secar = roupas >= sec_min and roupas <= sec_max

if lavar and secar:
    print("possivel")
else:
    print("impossivel")