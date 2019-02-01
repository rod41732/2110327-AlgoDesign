#include <cstdio>
#include <algorithm>

int a[100010];

int main(){
  int n, q;
  scanf("%d%d", &n, &q);
  for (int i=0; i<n; ++i)
    scanf("%d", &a[i]);
  int lo, hi, mid, val;
  while (q--){
    scanf("%d", &val);
    lo = -1, hi = n-1;
    while (lo < hi) {
      mid = (lo+hi+1)/2;
      if (a[mid] > val)
        hi = mid-1;
      else 
        lo = mid;
    }
    printf("%d\n", hi);
  }
  return 0;
}
