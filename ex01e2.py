from functools import reduce
input() #ignore num
nums = [int(x) for x in input().split()]
def red(prev, cur):
  a,b = prev
  if a < 0: a = 0
  a += cur;
  b = max(b, a)
  return (a, b)
print(reduce(red, nums, (0, nums[0]))[1])