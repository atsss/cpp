/*
 * Cracking the coding interview edition 6
 * Problem 1.7 Rotate a matrix by 90' clockwise ( or anticlockwise).
 * Solution : I have done it two ways.
 */

#include<iostream>

bool rotate( int ** matrix, int N ) {
  // ポインタから length を求める方法を考える
  // if (matrix.length() == 0 || matrix.length() != matrix[0].length()) { return false; }

  for( int i = 0; i < N/2; ++i ) {
    int first = i;
    int last = N - 1 -i;

    for( int j = first; j < last; ++j ) {
      int offset = j - first;
      int temp = matrix[first][j];

      matrix[first][j] = matrix[last - offset][first];
      matrix[last - offset][first] = matrix[last][last - offset];
      matrix[last][last - offset]= matrix[j][last];
      matrix[j][last] = temp;
    }
  }

  return true;
}

void printMatrix( int ** matrix, int N) {
  for ( int i = 0; i < N; ++i ) {
    for( int j = 0; j < N; ++j ) {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }
}


int main() {
  int N;
  std::cout << "Enter N for NxN matrix: ";
  std::cin >> N;
  int ** matrix = new int*[N];
  for ( int i = 0; i < N; ++i ) {
    matrix[i] = new int[N];
  }

  for ( int i = 0; i < N; ++i) {
    for ( int j = 0; j < N; ++j ) {
      std::cout << i << "-" << j << " value: ";
      std::cin >> matrix[i][j];
    }
  }

  std::cout << "Rotated matrix again by 90(anticlockwise):\n";
  rotate(matrix, N);
  printMatrix(matrix, N);
  return 0;
}
