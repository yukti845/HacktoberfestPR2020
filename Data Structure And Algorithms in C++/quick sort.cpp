#include<bits/stdc++.h>
using namespace std;

void merging(int *A,int start,int mid,int ending)
{
int B[ending+1],i,j,k,p;
for(i=start,j= mid+1,k=start;i<=mid && j<=ending;k++)
{
if(A[i]<A[j])
B[k]= A[i++];
else B[k]= A[j++];
}
while(i<=mid)
B[k++]= A[i++];
while(j<=ending)
B[k++]= A[j++];
for(k=start;k<=ending;k++) A[k]= B[k];

}

void sorting(int *A,int start,int ending)
{
if(start>= ending) return;
int mid= (start+ending)/2; // can be start+ (ending-start)/2
sorting(A,start,mid);
sorting(A,mid+1,ending);
merging(A,start,mid,ending);
}
void bubble_sort(int *A,int n)
{
int i,j,k;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(A[j]>A[j+1])
A[j]^=A[j+1],A[j+1]^=A[j],A[j]^=A[j+1];
}
}
}
// selection sort

void selection(int *A,int n)
{
int index=-1,i,j,k,mini;
for(i=0;i<n;i++)
{
mini= A[i];
index= i;
for(j=i+1;j<n;j++)
{
if(A[j]< mini)
{
mini= A[j]; index= j;
}
}

k= A[i];
A[i]= A[index];
A[index]= k;

//A[i]^=A[index];A[index]^=A[i];A[i]^=A[index];// swapping

}
}

int pivot_finder(int *A,int start,int ending)
{
int i= start-1,j= A[ending],k;
for(k=start;k<ending;k++)
{
if(A[k]> j) continue;
else
{
i++;
swap(A[i],A[k]);
}
}
i++;
swap(A[i],A[ending]);
return i;
}

void quick_sort(int *A,int start, int ending)
{
if(start>=ending) return;
int pivot= pivot_finder(A, start,ending);
quick_sort(A,start,pivot-1);
quick_sort(A,pivot+1,ending);
}
int main()
{
int length=10,i,j,k,A[10]={4,6,55,3,63,2373,-2,-999,20,5334};
cout<<"Array before sorting is ::\n";
for(i=0;i<length;i++) cout<<A[i]<<"\t";
//selection(A,length);
//bubble_sort(A,length);
//sorting(A,0,length-1);
quick_sort(A,0,length);
cout<<"\nArray after sorting is ::\n";
for(i=0;i<length;i++) cout<<A[i]<<"\t";
}

