#!/usr/bin/python3
'''UTF-8 Validtion'''


def validUTF8(data):
    '''UTF-8 Validtion'''
    charList = []
    ch = ''
    for i in data:
        u = chr(i)
        if u == '':
            u = '\n'
        else:
            ch += u
    charList.append(ch)
    for i in range(len(charList)):
        try:
            for j in charList[i]:
                b = bytes(j, encoding='ascii')
                if b.decode('utf-8') is not False:
                    return True
        except UnicodeEncodeError:
            return False
