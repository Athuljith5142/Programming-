# A prime number is a whole number greater than 1 whose only factors are 1 and itself. A factor is a whole number that can be divided evenly into another number.

n = int(input())

prime = True

for i in range(2, n):
    if n % i == 0:
        prime = False
        break

if prime:
    print('"Prime"')
else:
    print('"Not Prime"')
    