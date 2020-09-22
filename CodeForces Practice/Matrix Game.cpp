#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
         int n,m;
   cin>>n>>m;
   
   int row[n]={0},col[m]={0};
   int arr[n][m];
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
      {
          cin>>arr[i][j];
          if(arr[i][j])
          {
              row[i]=1;
              col[j]=1;
          }
      }
    }
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j])
             break;

            if(!row[i]&&!col[j])
            {
                count++;
                row[i]=1;
                col[j]=1;
            } 

        }
    }

    if(count&1)
     cout<<"Ashish";
     else 
      cout<<"Vivek";
   cout<<endl;
    }
    return 0;
}

//
//        .--------------.
//        | Try First One|
//        '--------------'
//                |     .--------------.
//                |     |              |
//                V     V              |
//              .--------------.       |
//              |      AC.     |<---.  |
//              '--------------'    |  |
//              (True)|  |(False)   |  |
//           .--------'  |          |  |
//           |           V          |  |
//           |  .--------------.    |  |
//           |  |   Try Again  |----'  |
//           |  '--------------'       |
//           |                         |
//           |  .--------------.       |
//           '->| Try Next One |-------'
//              '--------------'
//