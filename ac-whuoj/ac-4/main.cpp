#include <iostream>
using namespace std;

double turn_to_centi(double ori,string measure){
    if (measure=="cubits") {
        return (ori*45.72);
    }else if(measure=="feet"){
        return (ori*137.16/450*100);
    }else if(measure=="meters"){
        return (ori*100);
    }else if(measure=="inches"){
        return (ori*45.72/18);
    }else{
        return ori;
    }
}

int main(int argc, const char * argv[]) {
    double length,width,height;
    string measure;
    while (cin>>length) {
        cin>>measure;
        length=turn_to_centi(length,measure);
        cin>>width;
        cin>>measure;
        width=turn_to_centi(width,measure);
        cin>>height;
        cin>>measure;
        if ((length-width*6<1e-9)&&(length-width*6>-(1e-9))){
            cout<<"Excellent\n\n";
        }else if((length-width<1e-9)&&(-(1e-9)<length-width)){
            cout<<"Spin\n\n";
        }else{
            cout<<"Neither\n\n";
        }
    }
    return 0;
}
