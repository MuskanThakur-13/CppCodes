#include<iostream>
#include <cstdint>

using namespace std;
int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long ans = a * b * c * d;
    int prod=0;
    int cnt=0;
    for(int i=0;i<2;i++){
        int last= ans % 10;
        if(last == 0){
            cnt++;
        }
		prod=prod*10 +last;
		ans=ans/10;
    }
    if(cnt == 1){
        prod=prod*10;
    }
    cout<<prod<<endl;
    
    return 0;
} 