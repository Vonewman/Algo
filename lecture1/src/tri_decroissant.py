def tri_decroissant(a):
    """
    Cette fonction donne un tableau trié dans un ordre décroissant. 
    """
    for j in range(1, len(a)):
        key = a[j]
        i = j - 1
        while i > -1 and a[i] < key:
            a[i+1] = a[i]
            i = i - 1
        a[i+1] = key

    return a

a = [5, 2, 4, 6, 1, 3]
print(tri_decroissant(a))
