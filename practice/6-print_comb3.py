#!/usr/bin/python3
for num in range(0, 8):
    for i in range(num + 1, 10):
        print("{:d}{:d}".format(num, i), end=", ")
print("{:d}{:d}".format(num + 1, i))
