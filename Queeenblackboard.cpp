//#include <cmath>
//#include <ctime>
//#include <iostream>
//using namespace std;
//
// struct type     
//{                               
//	int data;
//};
// struct queen
//{
//	type *top;                                 // 构造两个结构的指针
//	type *bottom;
//};
//
//queen Q;                             //定义两种结构对象
//
//type T;
//
//int v =0 ;                         //定义一个用来计数的变量
//int N;                          //定义了是几皇后的问题
//
//int Stackin(int i , int q , queen a);   //声明了一个栈的函数
//void print(queen a);                //声明了一个用来输出结果的函数
//
//void initstack(queen *a) //初始化堆栈
//	{
//	a->bottom=(type *)malloc(N * sizeof(type));	     //设置栈的大小
//	if(!a->bottom) exit(0);                           //如果超出下线则退出
//	a->top = a->bottom;                                 //顶等于底，此时栈空
//	}
//void push(struct queen *a ,type t)  //压进栈
//	{   
//	*(a->top)=t;	
//	a->top++;
//	}
//void pop(struct queen *a) //弹出栈
//	{
//	--(a->top);
//	}
//
//void print(struct queen a)                                    //打印所有的皇后的位置
//{  
//    int i, j;  
//	++v;   //解的序号
//	cout<<"the"<<" "<<v<<" "<< "answer is "<<endl;
//	for (i = 0; i < N; ++i) 
//	{                   
//		for (j = 0; j < N; ++j) 
//		{  
//           if (j==(a.bottom)->data)                      //自底向上判断当前位置是否有皇后，如果是皇后打印■否则打印□
//			   cout<<"■";  
//            else   
//			   cout<<"□";  
//        }  
//		a.bottom++;
//		cout<<endl;  
//    }  
//} 
//void seek(int q)  //查找位置插入，从0位置插入
//	{
//	int i;
//	for(i=0;i<N;i++)  
//		{
//		if(!Stackin(i,q,Q))                          //如果无冲突时填空并入栈，PutIntoStack（）=0表示有冲突
//			{
//
//			T.data=i;                                   //记下冲突
//			push(&Q,T);                                //一直压入栈
//
//			if(q==N-1)                                //当q等于N-1时再弹出来
//				{
//				print(Q);
//				pop(&Q);
//
//				}
//			else 
//				seek(q+1);	//迭代
//			}
//		}
//	if(i==N) pop(&Q);
//	}
//int Stackin(int i,int q,queen a)
//	{
//	int result=0;
//	int c,d,k=0;
//	if(q==0) return 0;
//	while(!result&&k<q)
//		{
//		c=abs(a.bottom->data-i);	
//		d=q-k;                                      //列-行
//		if(a.bottom->data==i||c==d)                //(s.base)->data==i表示在同一行，
//			result=1;                             //return=1表示有冲突
//		k++;
//		a.bottom++;
//		}
//	return result;
//	}
//void main()
//{
//	cout<<"     "<<"BLACKBOARD"<<"     "<<endl;
//	cout<<endl;
//    cout<<"please input the value of the N "<<endl;
//	cin>>N;                                                      //可以自定义改变N的值
//	cout<<"本次测试的是"<<N<<"皇后的问题"<<endl;
//	int time_start=clock();
//	initstack(&Q);
//	seek(0);
//	int time_end=clock();
//	cout<<"所消耗的时间为"<<(double)(time_end-time_start)/1000<<"s"<<endl;
//	cout<<"一共有"<<v<<"种解法"<<endl;
//}