// void explainMap() {

// 	// {key, value}
// 	map<int, int> mpp;

// 	map<int, pair<int, int>> mpp;

// 	map< pair<int, int>, int> mpp;

// 	// key values can be anything

// 	mpp[1] = 2;
// 	mpp.emplace({3, 1});

// 	mpp.insert({2, 4});

// 	mpp[{2,3}] = 10; 

// 	{
// 		{1, 2}
// 		{2, 4}
// 		{3, 1}
// 	}

// 	for(auto it : mpp) {
// 		cout << it.first << " " << it.second << endl; 
// 	}

// 	// same options for using iterators
// 	// as we did in vector for the insert function


// 	cout << mpp[1]; // prints 2
// 	cout << mpp[5]; // prints 0, since it does not exists


// 	auto it = mpp.find(3); // points to the position where 3 is found
// 	cout << *(it).second; 

// 	auto it = mpp.find(5); // points to the end of the map since 5 not there

// 	// lower_bound and upper_bound works exactly in the 
// 	// same way as explained in the other video 
    
//     // This is the syntax
// 	auto it = mpp.lower_bound(2); 

// 	auto it = mpp.upper_bound(3); 

// 	// erase, swap, size, empty, are same as above 

// }
// {1,2}
// {1,3}

// void explainMultimap() {
// 	// everything same as map, only it can store multiple keys
// 	// only mpp[key] cannot be used here 
	
// }


// void explainUnorderedMap() {
// 	// same as set and unordered_Set difference. 
// }
