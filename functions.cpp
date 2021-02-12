#include <iostream>
#include <cstdio>

using namespace std;

int max_of_four(int a, int b, int c, int d){
  int max_left = 0;
  int max_right = 0;
  int max_value = 0;
  if (a > b){
    max_left = a;
  }else{max_left = b;}

  if(c > d){
    max_right = c;
  }else{max_right = d;}

  if(max_left > max_right){
    max_value = max_left;
  }else{max_value = max_right;}

  
  return max_value;
}


int main(){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int result = max_of_four(a, b, c, d);
  printf("%d\n",result);
  
  return 0;
}
