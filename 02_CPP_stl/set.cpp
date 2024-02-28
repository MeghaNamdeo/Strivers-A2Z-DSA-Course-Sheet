#include <iostream>
#include <set>
using namespace std;

// set = unique + sorted
void Set_Stl() {
    set<int> s;

    s.insert(1);
    s.insert(1);
    s.insert(12);
    s.insert(12);
    s.insert(2);
    s.insert(12);
    // Output: {1, 2, 12}
    s.emplace(2);  // Output: {1, 2, 12}
    s.insert(45);  // Output: {1, 2, 12, 45}
    s.insert(90);  // Output: {1, 2, 12, 45, 90}

    auto it = s.find(3);
    if (it != s.end()) {
        cout << *it << endl;  // Output: 0 (not found)
    } else {
        cout << "Element not found" << endl;
    }

    it = s.find(90);
    cout << *it << endl;  // Output: 90 (found)

    s.erase(45);  // Erase 45 (takes logarithmic time)

    int count = s.count(1);
    cout << count << endl;  // Output: 1 (present)

    it = s.find(90);
    s.erase(it);

    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;  // Output: 1 2 12
}

int main() {
    Set_Stl();
    return 0;
}


//or 
#include<bits/stdc++.h>

using namespace std;

int main() {
  set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The set is not empty " << endl;
  else
    cout << "The set is empty" << endl;
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}