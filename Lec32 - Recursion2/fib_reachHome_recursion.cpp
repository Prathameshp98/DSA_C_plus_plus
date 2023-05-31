#include <iostream>
#include <vector>
#include <string>

using namespace std;

void reachHome(int s, int e){

  if(s==e){
    cout << "Ghri Pochlo" << endl;
    return ;
  }   

  cout << "Ghri pochel " << s << " mdhe" << endl;
  return reachHome(s-1, e);
}

int fibonacci(int n){

  int count = 0;

  if(n == 1){
    return 0;
  } else if(n == 2){
    return 1;
  } 

  int ans = fibonacci(n-1) + fibonacci(n-2);

  return ans;
}
 
int main()
{
  int start{9}, home{0};

  reachHome(start, home);

  int n;
  cin >> n;
  cout << n << "th term is " << fibonacci(n) << endl;
   
  return 0;
}


