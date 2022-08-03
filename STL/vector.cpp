#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

// // A empty vector
// 	vector<int> v;  // {}

// 	v.push_back(1); // {1}
// 	v.emplace_back(2); // {1, 2}
// uper ni be vastu same 6e.

// 	vector<pair<int, int>>vec;

// 	v.push_back({1, 2});
// 	v.emplace_back(1, 2);

// 	// Vector of size 5 with
// 	// everyone as 100
// 	vector<int> v(5, 100); // {100, 100, 100, 100, 100}

// 	// A vector of size 5
// 	// initialized with 0
// 	// might take garbage value,
// 	// dependent on the vector
// 	vector<int> v(5); // {0, 0, 0, 0, 0}

// 	vector<int> v1(5, 20); // {20, 20, 20, 20, 20}
// 	vector<int> v2(v1); // {20, 20, 20, 20, 20}



// 	// Take the vector to be {10, 20, 30, 40}
    vector<int> v;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
 	// vector<int>::iterator it = v.begin();

 	// it++;
	// cout << *(it) << " "; // prints 20


// 	it = it + 2;
// 	cout << *(it) << " "; // prints 30

// 	vector<int>::iterator it = v.end();

// 	vector<int>::iterator it = v.rend();

// 	vector<int>::iterator it = v.rbegin();



	// cout << v[0] << " " << v.at(0);  // print 10 10

	// cout << v.back() << " ";  // print 50


// 	// Ways to print the vector

// 	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
// 		cout << *(it) << " ";
// 	}

// hear auto create autometicly iterator 


 	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *(it) << " ";
	}
    cout<<endl;

// 	for (auto it : v) {
// 		cout << it << " ";
// 	}

// 	// {10, 20, 12, 23}
	// v.erase(v.begin()+1); // hear this erase 20
// for (auto it = v.begin(); it != v.end(); it++) {
// 		cout << *(it) << " ";
// 	}

// 	// {10, 20, 12, 23, 35}
	// v.erase(v.begin() + 2, v.begin() + 4); // // {10, 20, 35} [start, end)
    // it never erase last number
    // for (auto it = v.begin(); it != v.end(); it++) {
 	// 	cout << *(it) << " ";
 	// }

// 	// Insert function

// 	vector<int>v(2, 100); // {100, 100}
// 	v.insert(v.begin(), 300); // {300, 100, 100};
// 	v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

// 	vector<int> copy(2, 50); // {50, 50}
// 	v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

// 	// {10, 20}
// 	cout << v.size(); // 2

// 	//{10, 20}
// 	v.pop_back(); // {10}

// 	// v1 -> {10, 20}
// 	// v2 -> {30, 40}
// 	v1.swap(v2); // v1 -> {30, 40} , v2 -> {10, 20}

// 	v.clear(); // erases the entire vector

// 	cout << v.empty();

// }


}