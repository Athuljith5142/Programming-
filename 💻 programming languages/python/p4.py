#f Give an integer N . Write a program to obtain the sum of the first and last digits of this number.
k=int(input())
for i in range(k):
    a=input()
    print(int(a[0])+int(a[-1]))
