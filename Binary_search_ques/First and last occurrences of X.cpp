#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N,x;
	    cin>>N>>x;
	    vector<int> arr;
	    for(int i=0;i<N;i++)
	    {
	        int val;
	        cin>>val;
	        arr.push_back(val);
	    }
	    int start=0;
	    int end=arr.size()-1;
	    int index=-1;
	    while(start<=end)//firt occurence 
	    {
	        int mid=start + (end-start)/2;
	        if(arr[mid]==x)
	        {
	            index=mid;
	            end=mid-1;
	        }
	        else if(arr[mid]>x)
	        {
	            end=mid-1;
	        }
	        else if(arr[mid]<x)
	        {
	             start=mid+1;
	        }
	    }
	    start=0;
	    end=arr.size()-1;
	    int index1=-1;
	    while(start<=end)// last occurence
	    {
	        int mid=start + (end-start)/2;
	        if(arr[mid]==x)
	        {
	            index1=mid;
	            start=mid+1;
	        }
	        else if(arr[mid]>x)
	        {
	            end=mid-1;
	        }
	        else if(arr[mid]<x)
	        {
	             start=mid+1;
	        }
	    }
	    cout<<index;
	    index1==-1?cout<<endl:cout<<" "<<index1<<endl;
	}
	return 0;
}
