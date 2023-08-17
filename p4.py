import matplotlib.pyplot as plt
import numpy as np

x_axis = [2000,2001,2002,2003,2004,2005,2006]
y_axis = [10,11,12,13,13,15,16]
arr = np.array([10,11,12,13,13,15,16])

plt.plot(x_axis,y_axis)
plt.title("Population in 7 years")
plt.xlabel("Years")
plt.ylabel("Population")
plt.show()

plt.bar(x_axis,y_axis)
plt.title("Population in 7 years")
plt.xlabel("Years")
plt.ylabel("Population")
plt.show()

plt.scatter(x_axis,y_axis)
plt.title("Population in 7 years")
plt.xlabel("Years")
plt.ylabel("Population")
plt.show()

figure,axis = plt.subplots(figsize=(8,3))
axis.hist(arr,bins=[2000,2001,2002,2003,2004,2005,2006])
plt.title("Population in 7 years")
plt.xlabel("Years")
plt.ylabel("Population")
plt.show()
