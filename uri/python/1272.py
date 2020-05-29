n = int(input())

for i in range(n):
    print(''.join([word[0] for word in input().split()]))

