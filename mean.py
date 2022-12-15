# MEAN (average) of numbers: 1,5,3:

#first way:
numbers = [1,5,3]
sum=0
numbers_length = len(numbers)
for i in numbers:
  sum+=i
  
#we can also use sum() function

numbers_mean = sum/numbers_length
print(numbers_mean)


#second way- using Python method:
import statistics

numbers = [1,5,3]
numbers_mean = statistics.mean(numbers)
print(numbers_mean)

#third way- using numpy library:

import numpy as np

numbers = [1,5,3]
numbers_mean = np.mean(numbers)
print(numbers_mean)

#HARMONIC MEAN:
import statistics as s

a= [1,5,3]

print(s.harmonic_mean(a))


#GEOMETRIC MEAN:
import statistics as s

a= [1,5,3]

print(s.geometric_mean(a))



