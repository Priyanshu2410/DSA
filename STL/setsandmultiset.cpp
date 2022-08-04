#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

// void explainSet() {
// 	set<int>st;
// 	st.insert(1); // {1}
// 	st.emplace(2); // {1, 2}
// 	st.insert(2); // {1, 2}
// 	st.insert(4); // {1, 2, 4}
// 	st.insert(3); // {1, 2, 3, 4}

// 	// Functionality of insert in vector
// 	// can be used also, that only increases
// 	// efficiency

// 	// begin(), end(), rbegin(), rend(), size(),
// 	// empty() and swap() are same as those of above

// 	// {1, 2, 3, 4, 5}
// 	auto it = st.find(3);

// 	// {1, 2, 3, 4, 5}
// 	auto it = st.find(6);

// 	// {1, 4, 5}
// 	st.erase(5); // erases 5 // takes logarithmic time


// 	int cnt = st.count(1); 


// 	auto it = st.find(3);
// 	st.erase(it); // it takes constant time

// 	// {1, 2, 3, 4, 5}
// 	auto it1 = st.find(2);
// 	auto it2 = st.find(4);
// 	st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

// 	// lower_bound() and upper_bound() function works in the same way
// 	// as in vector it does.

    set<int>st;

    int a =6,n=6,i;
    // st.insert(a);
    for (i=0;i<n;i++) {
		int a;
        cout<<"scn"<<endl;
        cin>>a;
        st.insert(a);
	}
 	for (auto it = st.begin(); it != st.end(); it++) {
		cout << *(it) << " ";
	}
    cout<<endl;
// 	// This is the syntax
// 	auto it = st.lower_bound(2); 

// 	auto it = st.upper_bound(3); 
// }
}

// multiset

// void explainMultiSet() {
// 	// Everything is same as set
// 	// only stores duplicate elements also


// 	multiset<int>ms;
// 	ms.insert(1); // {1}
// 	ms.insert(1); // {1, 1}
// 	ms.insert(1); // {1, 1, 1}

// 	ms.erase(1); // all 1's erased

// 	int cnt = ms.count(1); 

// 	// only a single one erased
// 	ms.erase(ms.find(1));


// 	ms.erase(ms.find(1), ms.find(1)+2);

// 	// rest all function same as set
// }

// void explainUSet() {
// 	unordered_set<int> st;
// 	// lower_bound and upper_bound function
// 	// does not works, rest all functions are same
// 	// as above,  it does not stores in any
// 	// particular order it has a better complexity
// 	// than set in most cases, except some when collision happens
// }