#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int length(char str[]){

  int count = 0;
  for(size_t i=0; str[i]!= '\0'; i++){
    count++;
  }

  return count;
}

void reverse(char str[], int n){
  int start = 0, end = n-1;

  while(start < end){

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    start++;
    end--;
  }

  cout << "Reverse of string is " << str << endl;
  
}

char toLowerCase(char ch){

  if(ch >= 'a' && ch <= 'z'){
    return ch;
  } else {
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

bool palindrome(char str[], int n){
  int start=0, end=n-1;

  while(start < end){

    if(toLowerCase(str[start]) != toLowerCase(str[end]))
      return false;
      
    start++;
    end--;
  }

  return true;
}

int main() {

  char name[20];

  cout << "Enter your name :" << endl;
  cin >> name;  // cin ignores whitespace, tab and enter

  cout << "Your name is " << name << endl;

  int len = length(name);
  cout << "Length of string is " << len << endl;

  reverse(name, len);

  if(palindrome(name, len))
    cout << "String is a palindrome" << endl;
  else
    cout << "String is not a palindrome" << endl;

  return 0;
}