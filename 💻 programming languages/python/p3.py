# Given a string S, remove the vowels 'a', 'e', 'i', 'o', and 'u' from it, and print the modified string (with vowels deleted).
a=input()
for i in a:
    if i=='a' or i=='e' or i=='i' or i=='o' or i=='u':
        a=a.replace(i,"")

print(a)    