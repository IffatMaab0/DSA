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
    int decNum;
    cout<<"enter the number:";
    cin>>decNum;
    cout<<"The binary form is: "<<DecToBen(decNum);
}