
n = input()
for _ in range(int(n)):
    s = input().split(' ')

    if s[1] == s[0][-len(s[1]):]:
        print('encaixa')
    else:
        print('nao encaixa')
