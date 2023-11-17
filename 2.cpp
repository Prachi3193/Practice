// number is palindrome or not

// #include<iostream>
// using namespace std;
// int palindrome(int n)
// {
//     int temp,rem,num=0;
//     temp=n;
//     while(n!=0)
//     {
//         rem=n%10;
//         num=(num*10)+rem;
//         n=n/10;
//     }
//     if (num==temp)
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main()
// {
//     int n,flag;
//     cin>>n;
//     flag=palindrome(n);
//     if(flag==1)
//     {
//         cout<<"Palindrome";
//     }
//     else{
//         cout<<"Not palindrome";
//     }
// }

//max and min elements of array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int i,j,max,min;
//     for(i=0;i<5;i++)
//     {
//         cin>>arr[i];
//     }
//     for(i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     max=arr[0];
//     for(i=0;i<5;i++)
//     {
//         for(j=i+1;j<5;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 max=arr[j];
//             }
//         }
//     }
//     cout<<"Max of array: "<<max;
//     //min=arr[0];

// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int arr[10], n, i, max, min;
//     cout << "Enter the size of the array : ";
//     cin >> n;
//     cout << "Enter the elements of the array : ";
//     for (i = 0; i < n; i++)
//         cin >> arr[i];
//     max = arr[0];
//     for (i = 0; i < n; i++)
//     {
//         if (max < arr[i])
//             max = arr[i];
//     }
//     min = arr[0];
//     for (i = 0; i < n; i++)
//     {
//         if (min > arr[i])
//             min = arr[i];
//     }
//     cout << "Largest element : " << max;
//     cout << "Smallest element : " << min;
//     return 0;
// }

//count prime numbe1rs
#include<iostream>
using namespace std;
int main()
{
    int i,j,count=1,n,sum=0,flag;
    cout<<"Enter limit: ";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        flag=1;
        for(j=2;j<=i/2;j++)
        {

            if(i%j==0)
            {
                count++;
                cout<<i<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            sum=sum+i;
        }
    }
    cout<<"No of prime numbers: "<<n-count;cout<<endl;
    cout<<sum;
}

// #include<iostream>
// using namespace std;

// int palindrome(int n,int num)
// {
//     int rem;
//     if(n==0)
//     {
//         return num;
//     }
//     else
//     {
//         rem=n%10;
//         num=(num*10)+rem;
//         n=n/10;
//         return palindrome(n,num);
//     }
// }
// int main()
// {
//     int n,flag;
//     cin>>n;
//     flag=palindrome(n,0);
//     cout<<flag;

// }