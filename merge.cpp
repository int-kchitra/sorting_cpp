# include <iostream>
using namespace std;
void merge(int a[],int p,int q,int r){

//fird size of sub array
   int n1=q-p+1;//high-qid+1//because of A[0]
   int n2=r-q;//high-qid
   int L[n1],M[n2];
//con1y epeqrets froq qair array to sub array
   for(int i=0;i<n1;i++){
     L[i]=a[p+i];
    }
  for(int j=0;j<n2;j++){
     M[j]=a[q+1+j];
    }
//coqn1are
  int i;
int j;
int k;
i=0;j=0;k=p;
  while(i<n1 && j<n2){
   if(L[i]<=M[j])
     {a[k]=L[i];
       i++;
      }
    else{
      a[k]=M[j];
       j++;
   } 
  k++; 
}
  while(i<n1)
    {a[k]=L[i];
 	i++;
k++;}

while(j<n2)
    {a[k]=M[j];
 	j++;
k++;}


}

void mergesort(int a[],int l,int r){
if(l<r){

int m=(l+r)/2;
//cout<<m<<r;
mergesort(a,l,m);
mergesort(a,m+1,r);
merge(a,l,m,r);
}
 
}
int main()
{
int n;
cout<<"erter size"<<endl;
cin>>n;
int *a=new int[n];

//cout<<"erter epeqerts........"<<endl;
for(int i=0;i<5;i++){
cin>>a[i];
}
//cout<<"entered";
mergesort(a,0,4);
for(int i=0;i<5;i++){
cout<< a[i]<<endl;
}
return 0;
}
