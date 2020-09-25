#!/bin/python3.8


print("\n\n\nWelcome to sidequest 3!\nThis flag has been fragmented into 3 pieces.\nFind the fragments to find the flag.\n")

print("The first fragment is a freebie: 9341\n")
f1=input("ENTER FRAGMENT [1]>")

#fragment 1
if(f1!="9341"):
    print("INVALID FRAGMENT. ACCESS DENIED.")
    exit()


print("\n\n\nACCESS GRANTED.\n")
print("The next fragment will require you have read permissions for this executable.\nCome back with a more privileged user and look for the fragment.\n")
f2=input("ENTER FRAGMENT [2]>")

#fragment 2
if(f2!="8392"):
    print("INVALID FRAGMENT. ACCESS DENIED.")
    exit()
    

print("\n\n\nACCESS GRANTED.\n")
print("You're almost there. Decode the hash to find the last fragment.\n*hint: find an online md5 hash cracker*")
f3=input("ENTER FRAGMENT [3]>")


#fragment 3
import hashlib
if(hashlib.md5(f3.encode()).hexdigest()!="12f73080e04ce0d8e95defb577ebc3f4"):
    print("INVALID FRAGMENT. ACCESS DENIED.")
    exit()


print("\n\n\nACCESS GRANTED.\n")
print("NTI{"+f1+"-"+f2+"-"+f3+"}\n")
