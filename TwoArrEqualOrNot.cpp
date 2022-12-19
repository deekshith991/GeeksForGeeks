
/*
	https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty[]=-1&difficulty[]=0&category[]=Arrays&curated[]=1&sortBy=submissions
*/
#include <bits/stdc++.h>
using namespace std;
void Dispaly(auto const &vec) {
	for (auto i : vec)
		cout << i << " ";
	cout << endl;
}


// SOME CASES WORKED my first approach
bool EqualNot(std::vector<int> v1, std::vector<int> v2) {
	vector<int> v_result;

	v_result.insert(v_result.begin(), v1.begin(), v1.end());
	v_result.insert(v_result.end(), v2.begin(), v2.end());

	long int sum = 0;
	for (auto i : v_result)
		sum = sum ^ i ;
	if (sum == 0)
		return 1;
	else
		return 0;

}

bool EqualORNot(std::vector<int> v1, std::vector<int> v2, int n) {
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	for (int i = 0 ; i < n; i++)
		if (v1[i] != v2[i])
			return 0;
	return 1;
}


int main() {

	vector<int> v1(4, 8);
	vector<int> v2(4, 3);

	//cout << EqualORNot(v1, v2);

	cout << EqualORNot(v1, v2, 4);

	Dispaly(v1);


}
