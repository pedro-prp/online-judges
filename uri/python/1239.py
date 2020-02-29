tags = {
    'i': {
        'open': '<i>',
        'closed': '</i>',
        'opened': False
    },
    'b': {
        'open': '<b>',
        'closed': '</b>',
        'opened': False
    }
}

while True:
    try:
        s = input()

        for c in s:
            if c == '_':
                if tags['i']['opened']:
                    print(tags['i']['closed'], end='')
                    tags['i']['opened'] = False
                else:
                    print(tags['i']['open'], end='')
                    tags['i']['opened'] = True
            elif c == '*':
                if tags['b']['opened']:
                    print(tags['b']['closed'], end='')
                    tags['b']['opened'] = False
                else:
                    print(tags['b']['open'], end='')
                    tags['b']['opened'] = True
            else:
                print(c, end='')

        print('')

    except EOFError:
        break
