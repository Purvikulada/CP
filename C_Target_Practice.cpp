#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
      vector<vector<int>> targets(10,vector<int>(10,0));
      for(int i =0; i< 10; i++){
        for(int j =0;j <10; j++){
          targets[i][j]= min({i, j, 10-1-i, 10-1-j}) + 1;
        }
      }
      vector<string> a(10);
      for (int i = 0; i< 10; i++){
        cin>>a[i];
      }
      int sum =0;
      for(int i = 0; i < 10; i++){
        for(int j = 0; j <10; j++){
          if(a[i][j] =='X') {
            sum += targets[i][j];
          }
        }
      }
      cout<<sum<<endl;
    }
    return 0;
}