n = int(input())

for i in range(n):
    s = input().split()
    m = [word[0] for word in s]

    print(''.join(m))

