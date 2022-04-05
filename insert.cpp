# include <iostream>
using namespace std;

void insert(int a[],int n){

 int temp=0;

 for(int i=1;i<n;i++)
{     int key=a[i];
  for(int j=i-1;j>=0;j--){
     if (a[j]>key) {
       a[j+1]=a[j];
        a[j]=key;
 
       } 

  }

}
 for(int i=0;i<n;i++){
cout<< a[i]<<endl;
}

}
int main()
{
int n;
cout<<"enter size"<<endl;
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<endl;
insert(a,n);
return 0;}
