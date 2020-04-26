#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n],i,mul=10,p=1;
    for(i=0;i<n;i++)
    cin>>a[i];
    long long int max=*max_element(a,a+n);
    while(max)
    {
        max=max/mul;
        multimap<long long int,long long int>m;
        for(i=0;i<n;i++)
        {
            m.insert(make_pair((a[i]/p)%10,a[i]));
        }
        i=0;
        multimap <long long int, long long int> :: iterator itr;
        for (itr = m.begin(); itr !=m.end(); ++itr) 
        { 
        cout  <<  itr->second<<" "; 
        a[i]=itr->second;
        i++;
        } 
        m.clear();
        cout<<endl;
        p=p*10;
    }
}


https://www.hackerearth.com/practice/algorithms/sorting/radix-sort/tutorial/