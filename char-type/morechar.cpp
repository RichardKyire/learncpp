#include "iostream"
using namespace std;
int main(){
    char c;
    cout<<"请输入一个字符:";
    cin>>c;
    cout<<"感谢！您输入的字符是"<<c<<endl;
    int 3n = c;
    cout<<"字符"<<c<<"的ASCII码是"<<n<<endl;

    cout<<"对"<<c<<"进行加一操作"<<endl;

    c++;
    n=c;

    cout<<"得到字符"<<c<<",其ASCII码是"<<n<<endl;
}