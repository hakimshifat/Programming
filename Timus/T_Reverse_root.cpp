#include<bits/stdc++.h>
using namespace std;

int main()
{
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
vector<double>num;
vector<double>mun;
long long int input;
while(cin >> input){
num.push_back(input);
}
for(int i=0;i<num.size();i++){
	mun.push_back(sqrt(num[i]));
}

for(int i=num.size()-1;i>=0;i--){
	printf("%.4lf\n",mun[i]);
}
return 0;
}