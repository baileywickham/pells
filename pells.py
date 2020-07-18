import math
import decimal

decimal.getcontext().prec = 100
for i in range(100000000000):
    s = decimal.Decimal(3 + 2*(i*i)).sqrt()
    if (s - int(s)) == 0:
            print(i)
