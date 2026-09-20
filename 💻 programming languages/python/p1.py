# To check whether a character is uppercase, lowercase ,digit or special character.
a = input()
if 'A' <= a <= 'Z':
    print("uppercase")
elif 'a' <= a <='z':
    print('lowercase')
elif '0' <=a <='9':
    print('digit')
else:
    print('special')