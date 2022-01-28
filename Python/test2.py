import time
import numpy as np

start_time = time.time()
a = [[0] * 500] * 500
for i in range(500):
    for j in range(500):
        a[i][j] = i*j*13.26673
np.array(a).transpose()
print(time.time() - start_time)
