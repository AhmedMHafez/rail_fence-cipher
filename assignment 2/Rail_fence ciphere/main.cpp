#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cond=true;
    while (cond){
    int y;
    cout<<"Ahlan ya user ya habibi "<<endl;
    cout<<"What do you want to do today ?"<<endl;
    cout<<"1-Cipher "<<endl;
    cout<<"2-decipher"<<endl;
    cout<<"3-End"<<endl;
    cin>>y;
    if(y==1)
    {
    string word;
    int key;
    cout<<"Enter plan text: "<<endl;
    cin>>word;
    cout<<"Enter the number of rails: "<<endl;
    cin>>key;

    vector<char> lines[key];
    bool flag=true;
    for(int i=0,j=0;i<word.size();i++){
        lines[j].push_back(word[i]);
        if(j==key-1) flag=false;
        if(flag==false && j==0) flag=true;
        if(flag==true) j++;
        else j--;
    }
    for(int i=0;i<key;i++){
        for(int j=0;j<lines[i].size();j++){
            cout<<lines[i][j];
        }

    }
cout<<endl;
    }
    if(y==2)
    cout<<endl;
    string word;
    int key;
    cout<<"Enter the ciphered text: "<<endl;
    cin>>word;
    cout<<"Enter the key: "<<endl;
    cin>>key;
    bool flag=true;
    int lineSize[key]={0};
    for(int i=0,j=0;i<word.size();i++){
        lineSize[j]++;
        if(j==key-1) flag=false;
        if(flag==false && j==0) flag=true;
        if(flag==true) j++;
        else j--;
    }
    int k=0;
    vector<char> lines2[key];
    for(int i=0;i<key;i++){
        for(int j=0;j<lineSize[i];j++){
            lines2[i].push_back(word[k]);
            k++;
        }
    }

    int arr[key]={0};
    for(int i=0,j=0;i<word.size();i++){
        cout<<lines2[j][arr[j]];
        arr[j]++;
        if(j==key-1) flag=false;
        if(flag==false && j==0) flag=true;
        if(flag==true) j++;
        else j--;
    }
    cout<<endl;
    if(y==3){
        cout<<endl;
        cond=false;
    }
    }
    return 0;
}
