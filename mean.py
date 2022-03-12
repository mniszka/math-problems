#first way
numbers = [1,5,3]
sum=0
numbers_length = len(numbers)
for i in numbers:
  sum+=i
numbers_mean = sum/numbers_length
print(numbers_mean)


#second way- using Python method
import statistics
numbers = [1,5,3]
numbers_mean = statistics.mean(numbers)
print(numbers_mean)
