# include <iostream>
using namespace std;

void select(int a[],int n){

 int temp=0;
int swap=0;
int min;
 for(int i=0;i<n;i++)
{
   min=i;
  for(int j=i+1;j<n;j++){
     if (a[j]<a[min]) {
       min=j;
       } 
}
       temp=a[i];
       a[i]=a[min];
       a[min]=temp;
 
// if(swap==0)
 // {break;}
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
select(a,n);
return 0;}
