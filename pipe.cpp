#include<iostream> 
#include<string> 
#include<cstdlib> 
#include<ctime> 
using namespace std;
int  num=0;

bool Place(int x[],int k) //考察皇后k放置在x[k]列是否发生冲突 
{ int i;
for (i=1; i<k; i++) 
if (x[k]==x[i]||abs(k-i)==abs(x[k]-x[i])) 
return 0; 
return 1; 
}


void print(int n ,int x[])                                    //打印当前的皇后的位置
{  
    int i, j;                                           //i是行j是列
	for (i = 0; i < n; ++i) {                   
		for (j= 0; j < n; ++j) {  
			if (x[i] != j)                      //判断当前位置是否有皇后，如果是皇后则打印■否则打印□
			   cout<<"□";  
            else   
			   cout<<"■";  
        }  
		cout<<endl;  
    }  
}  

void Queue(int n,int x[]) 
{ 
	int i;
	for (i=1;i<=n;i++) //初始化 
		x[i]=0; 
	int k=1; 
	int num=0;
	while(k>=1) 
	{ 
		x[k]=x[k]+1; //在下一列放置第k个皇后 
		while (x[k]<=n && !Place(x,k)) 
			x[k]=x[k]+1; //搜索下一列 
		if (x[k]<=n && k==n) { //得到一个解，输出 
			cout<<"this is the answer :"<<num+1<<endl;
			print(n,x);
			num++; 
		} 
		else if (x[k]<=n && k<n) 
			k=k+1; //放置下一个皇后 
		else { 
			x[k]=0; //重置x[k]，回溯 
			k=k-1; 
		} 
	} 
} 



int main(int argc, char *argv[]) 
{ 
	cout<<"---------------------管道风格--------------------\n"; 
	int N; 
	cout<<"请输入N的值"<<endl;
	cin>>N;
	int *x=new int[N];
	x[0]=0; 
	int t1=clock();
	Queue(N,x); 
	int t2=clock();
	cout<<"消耗的时间为：\t"<<(double)(t2-t1)/1000<<" 秒"<<endl;
	cout<<endl;
    cout<<endl;
	cout<<endl;
	
	return 0; 
}
