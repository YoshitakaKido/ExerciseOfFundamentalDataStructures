#coding:utf-8

a, b = map(int, input().split())

#gcdは最大公約数(greatest common divisor)の意
def gcd(x, y):
    if y != 0:
        return gcd(y, x%y)
    else:
        return x


print(gcd(a, b))
