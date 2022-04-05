# include <iostream>
using namespace std;

void bubble(int a[],int n){

 int temp=0;
int swap=0;
 for(int i=0;i<n;i++)
{
  for(int j=0;j<n-i-1;j++){
     if (a[j]>a[j+1]) {
       temp=a[j+1];
       a[j+1]=a[j];
       a[j]=temp;
       } 
   swap=1;
  }
 if(swap==0)
  {break;}
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
bubble(a,n);
return 0;}
