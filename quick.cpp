# include <iostream>
using namespace std;
int partarray(int a[],int l,int r){

int pivot=a[r];
int i=l-1;
int temp;
for(int j=l;j<r;j++){
if(a[j]<=pivot){
i=i+1;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
 temp=a[i+1];
a[i+1]=a[r];
a[r]=temp;

 return (i + 1);
}

void quick(int a[],int l,int r){
if(l<r){

int m=partarray(a,l,r);

quick(a,l,m-1);
quick(a,m+1,r);
}
 
}
int main()
{
int n;
cout<<"erter size"<<endl;
cin>>n;
int *a=new int[n];

//cout<<"erter epeqerts........"<<endl;
for(int i=0;i<n;i++){
cin>>a[i];
}
//cout<<"entered";
quick(a,0,n-1);
for(int i=0;i<n;i++){
cout<< a[i]<<endl;
}
return 0;
}
