#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> getSubsets(vector<int> set, int index) {
  vector<vector<int>> allSubsets;

  if (set.size() == index) {
    vector<int> emptySubset = {};
    allSubsets.push_back(emptySubset);
  } else {
    allSubsets = getSubsets(set, index + 1);

    int item = set[index];
    vector<vector<int>> moreSubsets = {};

    for (int i = 0; i < allSubsets.size(); i++) {
      vector<int> subsets = allSubsets[i];
      vector<int> newSubsets = subsets;

      newSubsets.push_back(item);

      moreSubsets.push_back(newSubsets);
    }

    allSubsets.insert(allSubsets.end(), moreSubsets.begin(), moreSubsets.end());
  }

  return allSubsets;
}

int main() {
  vector<int> set = { 100, 200, 300 };

  vector<vector<int>> allSubsets;
  allSubsets = getSubsets(set, 0);

  for (int i = 0; i < allSubsets.size(); i++) {
    vector<int> subsets = allSubsets[i];

    cout << "{ ";
    for (int j = 0; j < subsets.size(); j++) {
        cout << subsets[j];
        if (j != subsets.size() - 1) { cout << ", "; };
    }
    cout << " }" << endl;
  }

  return 0;
}
