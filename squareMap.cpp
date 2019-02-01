#include <iostream>
#include <algorithm>
using namespace std;
int m[2][1001], mx=0;

int main(){
  int r, c, cur, prev;
  char num;
  cin >> r >> c;
  for (int i=0; i<r; ++i) {
    cur = i%2;
    prev = 1-cur;
    for (int j=0; j<c; ++j){
      cin >> num;
      m[cur][j] = (num == '0') ? 0 : min(m[prev][j], min(m[cur][j-1], m[prev][j-1]))+1;
      mx = max(mx, m[cur][j]);
    }
  }
  cout << mx;
  return 0;
}

