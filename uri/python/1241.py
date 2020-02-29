n = input()
for _ in range(int(n)):
    s = input()

    print(s[0:int(len(s)/2)][::-1] + s[int(len(s)/2):][::-1])
