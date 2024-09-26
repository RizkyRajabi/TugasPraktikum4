#include<iostream>
using namespace std;
int main(){
    int tinggi;
    cout<<"Masukkan tinggi segitiga: ";
    cin>>tinggi;

    for(int i = 1; i <= tinggi; i++){
            //membuat spasi untuk menggeser segitiga ke kanan
            for(int j = tinggi - i; j >= 1; j--){
            cout<<" ";
            }
            //Menampilkan bintang untung membuat segitiga
            for(int k = i; k >= 1; k--){
            cout<<"* ";
            }
            cout<<endl;
    }
return 0;
}
