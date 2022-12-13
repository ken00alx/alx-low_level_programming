from ctypes import *
so_file = "funct.so"
funct = CDLL(funct.so)

print(type(funct))
print(funct.add(a, b)
print(funct.sub(a, b)
