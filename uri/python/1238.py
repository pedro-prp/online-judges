n = int(input())

for _ in range(n):
    w = input().split()

    a, b = len(w[0]), len(w[1])

    tam = min(a, b)

    # print(w, tam)

    for i in range(tam):
        print(w[0][i] + w[1][i], end='')
    if a > b:
        print(w[0][b::])
    else:
        print(w[1][a::])

