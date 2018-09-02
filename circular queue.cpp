#include<iostream>
using namespace std;

class circular{
public:
     int val;
    int Max;
    int Size;
    int a[10];
     int f=-1;
     int r=-1;

    circular(){
    cout<<"enter the size of queue"<<endl;
    cin>>Size;
    Max=Size;
    }
void push(){
     cout<<"enter the value: ";
     cin>>val;
    if((f==0 && r==Size-1)||(r==f-1)){
        cout<<"print overflow"<<endl;
    }

    else{
        if(f==-1){
        r=0;
        f=0;
        a[r]=val;
        }
    else if((r==Size)){
        r=0;
    }
    else
        r++;
        a[r]=val;
    }
}
void pop(){
if(f==-1){
    cout<<"underflow"<<endl;
}
else{
    if(f==r){
        f=-1;
        r=-1;
    }
    else if(f==(Max-1))
        f=0;
    else
        f=f+1;
}
}
void pip(){
    if(r<f){
        for(int i=f;i<Size;i++)
                cout<<a[i]<<" ";
                for(int i=0;i<=r;i++)
                    cout<<a[i]<<" ";

        }
else if(r>f){
    for(int i=f;i<=r;i++){
        cout<<a[i]<<" " ;
    }
}
cout<<endl;
}

};

int main(){
circular d;
int c;
while(1){
 cout<<endl<<"1 for push"<<endl<<"2 for pop"<<endl<<"3 for pip"<<endl;
    cout<<"enter your choice :";
    cin>>c;
    if(c==1)
        d.push();
    if(c==2)
        d.pop();
    if(c==3)
        d.pip();
}
}
