#include <bits/stdc++.h>

using namespace std;

int matrix[5][5];
int row, column = 0;

void getMatrix(){
  for(int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++) {
      cin >> matrix[i][j];
      if(matrix[i][j] == 1)
        row = i, column = j;
    }
  }
}
int a =                         8;
int findCenter(){
  int moves = 0;
  while(row != 2 || column != 2){
    if(row != 2 && row < 2)
      moves++, row++;
    if(row != 2 && row > 2)
      moves++, row--;
    if(column !=2 && column < 2)
      moves++, column++;
    if(column !=2 && column > 2)
      moves++, column--;
  }
  return moves;

}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  getMatrix();
  cout << findCenter() << "\n";

}








