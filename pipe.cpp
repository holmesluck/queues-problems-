#include<iostream> 
#include<string> 
#include<cstdlib> 
#include<ctime> 
using namespace std;
int  num=0;

bool Place(int x[],int k) //����ʺ�k������x[k]���Ƿ�����ͻ 
{ int i;
for (i=1; i<k; i++) 
if (x[k]==x[i]||abs(k-i)==abs(x[k]-x[i])) 
return 0; 
return 1; 
}


void print(int n ,int x[])                                    //��ӡ��ǰ�Ļʺ��λ��
{  
    int i, j;                                           //i����j����
	for (i = 0; i < n; ++i) {                   
		for (j= 0; j < n; ++j) {  
			if (x[i] != j)                      //�жϵ�ǰλ���Ƿ��лʺ�����ǻʺ����ӡ�������ӡ��
			   cout<<"��";  
            else   
			   cout<<"��";  
        }  
		cout<<endl;  
    }  
}  

void Queue(int n,int x[]) 
{ 
	int i;
	for (i=1;i<=n;i++) //��ʼ�� 
		x[i]=0; 
	int k=1; 
	int num=0;
	while(k>=1) 
	{ 
		x[k]=x[k]+1; //����һ�з��õ�k���ʺ� 
		while (x[k]<=n && !Place(x,k)) 
			x[k]=x[k]+1; //������һ�� 
		if (x[k]<=n && k==n) { //�õ�һ���⣬��� 
			cout<<"this is the answer :"<<num+1<<endl;
			print(n,x);
			num++; 
		} 
		else if (x[k]<=n && k<n) 
			k=k+1; //������һ���ʺ� 
		else { 
			x[k]=0; //����x[k]������ 
			k=k-1; 
		} 
	} 
} 



int main(int argc, char *argv[]) 
{ 
	cout<<"---------------------�ܵ����--------------------\n"; 
	int N; 
	cout<<"������N��ֵ"<<endl;
	cin>>N;
	int *x=new int[N];
	x[0]=0; 
	int t1=clock();
	Queue(N,x); 
	int t2=clock();
	cout<<"���ĵ�ʱ��Ϊ��\t"<<(double)(t2-t1)/1000<<" ��"<<endl;
	cout<<endl;
    cout<<endl;
	cout<<endl;
	
	return 0; 
}
