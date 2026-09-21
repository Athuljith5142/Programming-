# Perfect number, a positive integer that is equal to the sum of its proper divisors (not including itself).

# Ex: The smallest perfect number is 6, which is the sum of its divisors: 1, 2, and 3. Excluding the divisor 6 (itself).

# If it is a perfect number, print "Yes" otherwise "No" (without quotes).

n=int(input())
sum=0
for i in range(1,n):
    if n%i==0:
        sum+=i
        
if sum==n:
    print('Yes')
else:
    print('No')