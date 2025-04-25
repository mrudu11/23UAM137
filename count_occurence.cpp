#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{//	vector<data_type> var_name={val1, val2, ....., valn};
	int arr[]={1,1,1,2,2,3,3,2,2,4,4,4,4,4,5,5,6};
	vector<int> v(arr, arr+sizeof(arr)/sizeof(int));
	int target,c;
	cout<<"Enter th no.: ";
	cin>>target;
	c=count(v.begin(), v.end(), target);
	cout<<"Count : "<<c;
	return 0;
}