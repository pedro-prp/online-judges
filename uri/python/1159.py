
while(True):
        n = int(input())
        if n == 0:
            break
        if n % 2 == 1:
            n += 1

        s = 0
        for i in range(5):
            s += n
            n += 2

        print(s)

