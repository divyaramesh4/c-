// #include <iostream>
// using namespace std;
// int main(){
//    int i=1,N;
//    cin>>N;
//    while(i<=N){
//        cout<<"\n"<<i;
//        i++;
//    }

//    return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    i=2;
    int sum = 0;
    while(i<=n){
        sum = sum+i;
        i=i+2;
    }
         cout<<sum;
   

   return 0;
}