while True:
    try:
        s = []
        s.append(input())
        s.append(input())

        s.sort(key=lambda x: len(x))

        count = 0
        for i in range(len(s[0])):
            count_aux = 0
            idx = i
            idx_aux = idx
            word = s[0][idx]
            for idx in range(len(s[0])):
                if word not in s[1]:
                    count = max(count, count_aux)
                    count_aux = 0
                    break

                count_aux += 1
                if (idx_aux+1) == len(s[0]):
                    count = max(count, count_aux)
                    count_aux = 0
                    break

                idx_aux += 1
                word += s[0][idx_aux]

        print(count)

    except EOFError:
        break

