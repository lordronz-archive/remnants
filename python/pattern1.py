def pattern(n):
    ptrn = ''
    j = n
    k = n
    flag1 = n
    flag2 = n
    reverse = 0
    for i in range(2 * j - 1):
        if j > k:
            flag1 = j
            while j > k:
                ptrn += str(j) + ' '
                j -= 1
                if j < 1:
                    break
        j = flag1
        for _ in range(2 * n - 1):
            ptrn += str(n) + ' '
        if j > k:
            flag2 = k
            while j > k:
                ptrn += str(k + 1) + ' '
                k += 1
        k = flag2
        ptrn += '\n'
        k -= 1
        n -= 1
        if n == 0:
            reverse = 1
        if reverse == 1:
            k += 2
            n += 2

    return ptrn


n = int(input("Enter a number : "))
print('Pattern :')
print(pattern(n))