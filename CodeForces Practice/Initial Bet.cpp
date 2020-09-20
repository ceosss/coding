#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int c[5],total=0,i;
        for(i=0;i<5;i++){
            cin>>c[i];
            total=total+c[i];
        }
        if(total%5==0&&total!=0){
            cout<<total/5<<endl;
        }
        else{
            cout<<"-1"<<endl;
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