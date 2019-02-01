#include <cstdio>
#include <algorithm>
using std::max;

int main(){
  int n, sum=0, mx, c;
  scanf("%d", &n);
  scanf("%d", &mx);
  sum = max(mx, 0);
  while (--n){
    scanf("%d", &c);
    sum = max(sum, 0)+c;
    mx = max(mx, sum);
  }
  printf("%d", mx);
  return 0;
}