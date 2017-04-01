#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){

	ifstream in("file.in",ios::in);
	if(!in){
		cerr << "Failed" << endl;
		exit(1);
	}

	vector<int> cows_1;
	int sum = 0;
	int n;
	int i;
	
	in >> n;
	cows_1.resize(n);
	for(i=0;i<n;++i)
	in >> cows_1[i];
	sort(cows_1.begin(),cows_1.end());
	for(i=0;i<5;++i){
	sum = sum + cows_1[n-1-i];
	}

	ofstream out("file.out",ios::out);
	if(!out){
		cerr << "Failed" << endl;
		exit(1);
	}

	out << sum << endl;
}
