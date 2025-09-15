#include <iostream>
using namespace std;
int DecToBen(int decNum){
    int ans = 0 , pow=1;
    while(decNum>0){
        int rem = decNum %2;
        decNum /= 2;
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}
int main(){
    int decNum ;
    for(int i=1 ; i<=10; i++){
        cout<<"The binary form of "<< i <<" is: "<<DecToBen(i)<<endl;
    }
    
}