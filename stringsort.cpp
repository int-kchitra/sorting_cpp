#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter number of strings";
cin>>n;
string temp="";
string str[n];
for(int i=0;i<n;i++){
  getline(cin,str[i]);
}
cin.ignore();
for(int i=0;i<n;i++){
cout<<str[i]<<endl;
}

for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){
      if(str[i]>str[j]){
         temp=str[i];
         str[i]=str[j];
         str[j]=temp;
      }
}
}

for(int i=0;i<n;i++){
cout<<str[i]<<endl;
}
return 0;

}
