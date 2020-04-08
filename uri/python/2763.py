s = str(input()).split('.')
s = s + s[2].split('-')
del s[2]

for n in s:
    print(n)
