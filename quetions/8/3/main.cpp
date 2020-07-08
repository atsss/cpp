#include <vector>
#include <iostream>
using namespace std;

int findMagic(vector<int> array, int start, int end){
  if (start > end) { return -1; }

  int midIndex = (end + start) / 2;
  int midValue = array[midIndex];
  if (midIndex == midValue) { return midIndex; }

  int leftIndex = min(midIndex - 1, midValue);
  int left = findMagic(array, start, leftIndex);
  if (left >= 0) { return left; }

  int rightIndex = max(midIndex + 1, midValue);
  int right = findMagic(array, rightIndex, end);
  return right;
}

int findMagic(vector<int> array){
  int n = array.size();
  if (n==0) { return -1; }

  return findMagic(array, 0, n-1);
}

int main() {
  vector<int> array;
  array.push_back(-10);
  array.push_back(-5);
  array.push_back(2);
  array.push_back(2);
  array.push_back(2);
  array.push_back(3);
  array.push_back(4);
  array.push_back(7);
  array.push_back(9);
  array.push_back(12);
  array.push_back(13);

  cout << findMagic(array) << endl;
  return 0;
}
