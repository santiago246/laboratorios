#include <iostream>

using namespace std;

int main()
{
    //int c=5;
    //c+=5;
    //int x=c++;
    //int y=++c;
    //cout<<x<<endl;
    //cout<<c<<endl;
    //cout<<y<<endl;
    //cout<<c<<endl;
    /*
    float a,b,z;
    cin>>a;
    cin>>b;
    z=(a>b)?a:b;
    cout<<z<<endl;
    */
    int score[2];
    int c=5;
    score[0]=c++;
    score[1]=c++;
    c=5;
    cout<<score[0]<<endl;
    cout<<score[1]<<endl;
    /*
    for(int i=0;i<10;i++){
        score[i]=i;
    }
    for(int i=0;i<10;i++){
        cout<<score[i]<<endl;
    }
    */
    return 0;
}
