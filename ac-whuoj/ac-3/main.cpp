//Adam>Seth 130 800 930
//Seth>Enosh 105 807 912
//Enosh>Kenan 90 815 905
//Kenan>Mahalalel 70 840 910
//Mahalalel>Jared 65 830 895
//Jared>Enoch 162 800 962
//Enoch>Methuselah 65 300 365
//Methuselah>Lamech 187 782 969
//Lamech>Noah 182 592 777
//Noah>Shem,Ham,Japheth None

#include <iostream>
#include <string>
using namespace std;
string family_name[13]={"Adam","Seth","Enosh","Kenan","Mahalalel","Jared","Enoch","Methuselah","Lamech","Noah","Shem","Ham","Japheth"};

int family_age[13]={930,912,905,910,895,962,365,969,777,0,0,0,0};

int get_hash(string name){
    int hash=0;
    while (name!=family_name[hash]) {
        hash++;
    }
    return hash;
}

int main(int argc, const char * argv[]) {
    string name1,name2;
    while (cin>>name1) {
        cin>>name2;
        int hash1=get_hash(name1);
        int hash2=get_hash(name2);
        if (hash1>=10&&hash2>=10) {
            cout<<"No\n";
        }else if(hash1>=hash2){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
        if (hash1>=9||hash2>=9){
            cout<<"No enough information\n";
        }else if(family_age[hash1]>family_age[hash2]){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    system("PAUSE");
    return 0;
}
