import time

start_time = time.time()
a = [[0] * 100] * 100
b = [[0] * 100] * 100
for i in range(100):
    for j in range(100):
        a[i][j] = i*j*13.26673
for i in range(100):
    for j in range(100):
        b[i][j] = i*j*17.36934
c = [[0] * 100] * 100
for i in range(100):
    for j in range(100):
        c[i][j] = a[i][j]*b[i][j]
print(time.time() - start_time)
