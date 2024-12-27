#include <iostream>
#include <vector>
using namespace std;

void explainVector() {
    vector<int> v; // Create an empty vector of integers

    v.push_back(1); // Insert 1 into the vector v
    v.emplace_back(2); // Same as push_back, but slightly faster in some cases

    // Vector of pairs
    vector<pair<int, int>> vec;

    vec.push_back({1, 2}); // Add a pair {1, 2} using push_back
    vec.emplace_back(3, 4); // Add a pair {3, 4} using emplace_back (faster)

    // Vector initialization
    vector<int> v1(5, 100); // Creates a vector with 5 elements, all initialized to 100
    vector<int> v2(5);      // Creates a vector with 5 elements, all initialized to 0

    vector<int> v3(v1); // Copies the contents of v1 into v3

    // Iterators
    vector<int>::iterator it = v1.begin();
    it++;
    cout << *(it) << " "; // Access the second element in v1

    it = it + 2;
    cout << *(it) << " "; // Access the fourth element in v1

    // Accessing elements
    cout << v[0] << " " << v.at(0) << " "; // Access elements safely using `at`
    cout << v.back() << " "; // Access the last element

    // Loop using iterator
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Loop using range-based for loop (preferred)
    for (auto value : v) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    explainVector();
    return 0;
}
