from ctypes import * maths.c
so_file = "100-operations.so"
funct = CDLL(maths.c)

print(type(maths))
print(maths.add(a, b)
print(maths.sub(a, b)
print(maths.div(a, b)
print(maths.mul(a, b)
print(maths.mod(a, b)

