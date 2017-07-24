#coding:utf-8

a, b, c = map(int, input().split())
max = a

if max < b:
    max = b


if max < c:
    max = c


print("MAX = " + str(max))
