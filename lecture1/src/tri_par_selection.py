def tri_par_selection(a, n):
    """
    Une autre méthode de tri appelé tri par sélection
    Complexité de O(n^2)
    """

    for i in range(0, n-1):
        min = i
        for j in range(i+1, n):
            if a[j] < a[min]:
                min = j
        if min != i:
            # échanger a[i] et a[min]
            tmp = a[i]
            a[i] = a[min]
            a[min] = tmp

    return a

a = [31, 41, 59, 26, 41, 58]
n = 6

print(tri_par_selection(a, 6))
