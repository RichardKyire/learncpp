#include "iostream"
using namespace std;
enum Week{Monday=1,Tuesday=2,Wednesday=3,Thursday=4,Friday=5,Saturday=6,Sunday=7};
int main(){
    Week week;
    week = Week(8);
    cout<<week<<endl;
}


