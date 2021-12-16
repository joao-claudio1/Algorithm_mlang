def verifica(j, k):
    a = lista.index(j)
    b = lista.index(k)
    if a > b:
        return k
    else:
        return j


n = int(input())
while n != 0:
    lista = [x for x in input().split()]
    j, k = str(input()).split()
    print(verifica(j, k))
    lista.clear()
    n = n - 1
