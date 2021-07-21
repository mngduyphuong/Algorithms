
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n[] = {1, 25, 7, -7, -3, 12, -22, 0};
  int datasize  = sizeof(n)/sizeof(n[0]);
  
  for (int i = 0; i < datasize-1; i++) {
    
        for (int j = 0; j < datasize-1; j++) {
          	int temp=0;
          	if(n[j]<0)
          		temp = n[j]*(-1);
          	else
          		temp = n[j];
			if(temp > n[j + 1]) {
            	swap(n[j], n[j + 1]);
            }
            for (int i : n) {
  			 cout << i << " ";
			}		
			cout<<endl;
            
            
        }
    
    }

  for (int i : n) {
   cout << i << " ";
}
  return 0;
}
