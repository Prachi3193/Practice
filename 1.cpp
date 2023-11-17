//matrix rotation
// #include<iostream>
// using namespace std;
// int main()
// {
//     int m,n;
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<m;i++)
//     {
//         for(int j=n-1;j>=0;j--)
//         {
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// void reverse(int start,int end,string &s){
//     while(start<=end)
//     {
//         swap(s[start++],s[end--]);
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     string s="abc def";
//     reverse(0,n,s);
//     reverse(n+1,s.size()-1,s);
//     reverse(0,s.size()-1,s);
//     cout<<s;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     string s="abcdefgh";
//     int n;
//     cin>>n;
//     char c=s[n];
//     string first;
//     string second;
//     string final;
//     for(int i=0;i<n;i++)
//     {
//         first+=s[i];
//     }
//     for(int i=n+1;i<s.size();i++)
//     {
//         second+=s[i];
//     }
//     final=second+c+first;
//     cout<<final;   
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     for(int i=0;i<s.size()-1;i++)
//     {
//         for(int j=i+1;j<s.size();j++)
//         {
//             if(s[i]==s[j])
//             {
//                 s.erase(s.begin()+j);
//                 s.erase(s.begin()+i);
//                 i--;
//                 cout<<s<<endl;
//             }
//         }
//     }
//     if(s.size()<=1) 
//         cout<<"palindrome";
//     else 
//         cout<<"not palindrome";
// }

// #include<iostream>
// using namespace std;
// int main()
// {
    
//     for(int i=0;i<4;i++){
//         if(i%2==0){
//             for(int j=0;j<3;j++)
//             {
//                 cout<<arr[j][i]<<" ";
//             }
//         }
//         else
//         {
//             for(int j=2;j>=0;j--)
//             {
//                 cout<<arr[j][i]<<" ";
//             }
//         }
//     }
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[100][100];
//     int m,n;
//     cin>>m>>n;
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int total=m*n;
//     int count=0;
//     int srow=0;
//     int erow=m-1;
//     int scol=0;
//     int ecol=n-1;
//     while(count<total)
//     {
//         for(int i=scol; i<=ecol;i++)
//         {
//             cout<<arr[srow][i]<<" ";
//             count++;
//         }
//         srow++;
//         for(int i=srow;i<=erow;i++)
//         {
//             cout<<arr[i][ecol]<<" ";
//             count++;
//         }
//         ecol--;
//         for(int i=ecol;i>=scol;i--)
//         {
//             cout<<arr[erow][i]<<" ";
//             count++;
//         }
//         erow--;
//         for(int i=erow;i>=srow;i--)
//         {
//             cout<<arr[i][scol]<<" ";
//             count++;
//         }
//         scol++;
//     }
// }

#include<iostream>
using namespace std;
int hcf(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return hcf(b,a%b);
    }
}
int lcm(int a,int b)
{
    int hcff=hcf(a,b);
    int lcmm=(a*b)/hcff;
    return lcmm;
}
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=lcm(a,b);
    cout<<c;
}