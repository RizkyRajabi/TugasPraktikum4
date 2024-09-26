#include<iostream>
using namespace std;
int main(){
    int suku1, suku2, suku3, n, temp;
    suku1 = 0;
    suku2 = 1;

    cout<<"Masukkan jumlah suku deret fibonacci yang ingin ditampilkan: ";
    cin>>n;

    cout<<suku1<<" ";
    cout<<suku2<<" ";

    for(int i = 2; i < n; i++){

    suku3 = suku1 + suku2;
    cout<<suku3<<" ";
    suku1 = suku2;
    suku2 = suku3;
    }
    cout<<endl;

return 0;
}
