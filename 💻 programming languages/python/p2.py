# Accept two numbers (A and B) where A > B and print their sum, product, quotient, remainder, difference and a to the power b.
A,B=map(int,input().split())

if A>B :
    print(A + B)
    print(A * B)
    print(A // B)
    print(A % B)
    print(A - B)
    print(A ** B)
else:
    print('None')