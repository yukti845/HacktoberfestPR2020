#include<bits/stdc++.h>
using namespace std;

int main()
{
cout<<"Hello world!!!!";
return 0;
vector<int>V;// vector decleration

// pushing into vector..
cout<<"Inserting elements into vector eq : 10,42,-2,-22433 ::\n";
V.push_back(10);
V.push_back(42);
V.push_back(-2);
V.push_back(-22433);

cout<<"vector size is ::\t"<<V.size()<<"\n";
cout<<"Elements in vector are ::\n";
for(int i=0;i<V.size();i++)
cout<<V[i]<<"\t";
cout<<"\nPop from vector : pop last element :"<<"\n";
V.pop_back();
cout<<"Vector becomes :\n";
for(int i=0;i<V.size();i++) cout<<V[i]<<"\t";
}

