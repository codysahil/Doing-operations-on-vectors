#include<iostream>
#include<map>
#include<string>
#include<list>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;


int main() {
	/*
	map<string, string> mp;
	mp.insert(pair<string, string>("bittu", "kumar"));
	mp.insert(pair<string, string>("Sahil", "Raj"));

	mp["bittu"] = "die";
	cout << mp.size() << endl;
	for (auto pair : mp) {
		cout << pair.first << " - " << pair.second << endl;
}
*/

	int arr[] = { 4,6,78,1,6,3,6,3,5,7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	/*
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";																			
	}
	*/
	cout << endl;
	/*
	if (binary_search(arr, arr + 10, 21)) {
		cout << "element found";
	}
	else {
		cout << "element not found";
	}
		*/
	vector<int> vect(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cout << vect[i] << " ";
	}
	sort(vect.begin(), vect.end());
	cout << endl;
	cout << "vector after sorting";
	for (int i = 0; i < n; i++) {
		cout << vect[i] << " ";
	}

	cout << endl;
	reverse(vect.begin(), vect.end());
	for (int i = 0; i < n; i++) {
		cout << vect[i] << " ";
	}
	cout << endl;
	cout<<*max_element(vect.begin(), vect.end());
	cout << endl;
	cout << *min_element(vect.begin(), vect.end());
	cout << endl;
	cout << accumulate(vect.begin(), vect.end(), 0);
	cout << endl;
	cout << count(vect.begin(), vect.end(), 6);
}