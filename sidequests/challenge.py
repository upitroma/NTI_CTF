#!/bin/python3
inputFlag=input("Hello!\nPlease enter a valid flag >")

# NTI{ThisOneIsAFreebee}
# NTI{reverseReverse}
# NTI{scrambledEggs}
# NTI{youJustPrintedTheKeyDidntYou}
# NTI{cyanegypt}


def checkflag1(s):
    if s == "NTI{ThisOneIsAFreebee}":
        return True
    else:
        return False


def checkflag2(s):
    if "}esreveResrever{ITN" == s[::-1]:
        return True
    else:
        return False


def checkflag3(s):
    key = ['c','e','I','g','b','{','l','N','}','s','r','E','T','m','d','a']
    if s == key[7]+key[12]+key[2]+key[5]+key[9]+key[0]+key[10]+key[15]+key[13]+key[4]+key[6]+key[1]+key[14]+key[11]+key[3]+key[3]+key[9]+key[8]:
        return True
    else:
        return False


def checkflag4(s):
    if("y{ITNsuJuonirPthTdetDyeKeYtndi}uo"==''.join([s[i:(i+5)][::-1] for i in range(0, len(s), 5)])):
        return True
    else:
        return False


def checkflag5(s):
    #this one requires some brute forcing.
    #This flag's format is NTI{[color][country]}. ex: NTI{cobaltindonesia}
    import hashlib
    if hashlib.md5(s.encode()).hexdigest() == "7c83a1f116931a0d38f40c85901d83ca":
        return True
    else:
        return False


if checkflag1(inputFlag) or checkflag2(inputFlag) or checkflag3(inputFlag) or checkflag4(inputFlag) or checkflag5(inputFlag):
    print("Yay! You found a flag!\nRemember to submit it in the discord.")
else:
    print("Invalid flag.")
