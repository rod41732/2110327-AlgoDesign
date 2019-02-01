#include <iostream>
using namespace std;

int a[31][31];


int main(){
  int n, k;
  cin >> n >> k;
  for (int i=0; i<=n; ++i){
    for (int j=0; j<=i; ++j){
      a[i][j] = (j==i || j == 0) ? 1 : a[i-1][j-1] + a[i-1][j];
    }
  }
  cout << a[n][k];
  return 0;
}