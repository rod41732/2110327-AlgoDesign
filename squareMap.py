import sys
input = sys.stdin.readline
r, c = [int(x) for x in input().split()]
a = [[0]*(c+1) for _ in range(r+1)]
m = [[int(x) for x in input().strip()] for _ in range(r)]
mx = 0
for i in range(1, r+1):
  for j in range(1, c+1):
     a[i][j] = 0 if m[i-1][j-1] == 0 else min([a[i-1][j-1], a[i][j-1], a[i-1][j]])+1
     mx = max(mx, a[i][j])
print(mx)