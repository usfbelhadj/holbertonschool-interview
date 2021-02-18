#!/usr/bin/python3


def validUTF8(data):
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
        for j in charList[i]:
            try:
                if bytes(j, encoding='ascii') is not False:
                    return True
            except UnicodeEncodeError:
                return False
