#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int n){
	int result=0;
	for (int i=1;i < n+1 ;i++)
		result+=i;
	return result;
}


int main() {
  int n;
  cin>>n;
  int result = sum(n);
  cout<<result;
  return 0;
}
