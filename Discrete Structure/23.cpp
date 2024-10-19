#include<iostream>
using namespace std;
int implication(int p,int q){
	if(p==1 && q==0)
		return 0;
	else
		return 1;
}
int other(int p,int q){
	int k;
	if(p==0)
		k=1;
	else
		k=0;
	if(k==1 || q==1)
		return 1;
	else
		return 0;
}
int main(){
	int p,q,r[4],s[4],i=0,count=0;
	cout<<"p"<<"\t"<<"q"<<"\t"<<"p->q"<<"\t";
	cout<<"p"<<"\t"<<"q"<<"\t"<<"notp v q"<<endl;
	for(p=0;p<=1;p++){
		for(q=0;q<=1;q++){
			r[i]=implication(p,q);
			cout<<p<<"\t"<<q<<"\t"<<r[i]<<"\t";
			s[i]=other(p,q);
			cout<<p<<"\t"<<q<<"\t"<<s[i]<<endl;
			i++;
		}
	}
	for(i=0;i<=3;i++){	
		if(r[i]==s[i])
			count++;
	}
	if(count==4)
		cout<<"Logically valid";
	else
		cout<<"Not logically valid";
}
