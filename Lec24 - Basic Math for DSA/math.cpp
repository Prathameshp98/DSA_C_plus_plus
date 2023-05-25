#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int powerExpontiation(int a, int b){
  int res = 1;

	while(b>0){
		if(b&1){
			//odd
			res = res * a;
		}
		a = a * a;
		b = b>>1;
	}

	return res;  
}

// euclid's Algo
int gcd(int a, int b){

  if(a == 0)
    return b;
  if(b == 0)
    return a;

  while(a != b){

    if(a>b){
      a = a-b;
    } else {
      b = b-a;
    }
  }

  return a;
}

int sieveOfEratosthenes(int n){
  int count{0};
  vector<bool> prime(n+1, true);
  prime[0] = prime[1] = false;

  for(size_t i=2; i<n; i++){

      if(prime[i]){
          count++;

          for(size_t j=i*2; j<n; j=j+i){
              prime[j] = false;
          }
      }
  }

  return count; 
}

bool isPrime(int num) {

  if (num <= 1)
    return false;

  int i{2};
  while (i < num / 2) {
    if (num % i == 0)
      return false;

    i++;
  }

  return true;
}

int main() {

  int num;
  cout << "Enter any number : " << endl;
  cin >> num;

  if (isPrime(num)) {
    cout << num << " is prime" << endl;
  } else {
    cout << num << " is not prime" << endl;
  }

  cout << "Number of primes below " << num << " is " << sieveOfEratosthenes(num) << endl;

  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  cout << "GCD of " << a << " and " << b << " is " << gcd(a,b) << endl; 
  
  cout << "LCM of " << a << " and " << b << " is " << (a*b)/gcd(a,b) << endl; 

  int x, y;
  cout << "Enter two numbers: ";
  cin >> x >> y;
  cout << x << " to the power of " << y << " is " << powerExpontiation(x,y) << endl;

  return 0;
}