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
//	type *top;                                 // ���������ṹ��ָ��
//	type *bottom;
//};
//
//queen Q;                             //�������ֽṹ����
//
//type T;
//
//int v =0 ;                         //����һ�����������ı���
//int N;                          //�������Ǽ��ʺ������
//
//int Stackin(int i , int q , queen a);   //������һ��ջ�ĺ���
//void print(queen a);                //������һ�������������ĺ���
//
//void initstack(queen *a) //��ʼ����ջ
//	{
//	a->bottom=(type *)malloc(N * sizeof(type));	     //����ջ�Ĵ�С
//	if(!a->bottom) exit(0);                           //��������������˳�
//	a->top = a->bottom;                                 //�����ڵף���ʱջ��
//	}
//void push(struct queen *a ,type t)  //ѹ��ջ
//	{   
//	*(a->top)=t;	
//	a->top++;
//	}
//void pop(struct queen *a) //����ջ
//	{
//	--(a->top);
//	}
//
//void print(struct queen a)                                    //��ӡ���еĻʺ��λ��
//{  
//    int i, j;  
//	++v;   //������
//	cout<<"the"<<" "<<v<<" "<< "answer is "<<endl;
//	for (i = 0; i < N; ++i) 
//	{                   
//		for (j = 0; j < N; ++j) 
//		{  
//           if (j==(a.bottom)->data)                      //�Ե������жϵ�ǰλ���Ƿ��лʺ�����ǻʺ��ӡ�������ӡ��
//			   cout<<"��";  
//            else   
//			   cout<<"��";  
//        }  
//		a.bottom++;
//		cout<<endl;  
//    }  
//} 
//void seek(int q)  //����λ�ò��룬��0λ�ò���
//	{
//	int i;
//	for(i=0;i<N;i++)  
//		{
//		if(!Stackin(i,q,Q))                          //����޳�ͻʱ��ղ���ջ��PutIntoStack����=0��ʾ�г�ͻ
//			{
//
//			T.data=i;                                   //���³�ͻ
//			push(&Q,T);                                //һֱѹ��ջ
//
//			if(q==N-1)                                //��q����N-1ʱ�ٵ�����
//				{
//				print(Q);
//				pop(&Q);
//
//				}
//			else 
//				seek(q+1);	//����
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
//		d=q-k;                                      //��-��
//		if(a.bottom->data==i||c==d)                //(s.base)->data==i��ʾ��ͬһ�У�
//			result=1;                             //return=1��ʾ�г�ͻ
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
//	cin>>N;                                                      //�����Զ���ı�N��ֵ
//	cout<<"���β��Ե���"<<N<<"�ʺ������"<<endl;
//	int time_start=clock();
//	initstack(&Q);
//	seek(0);
//	int time_end=clock();
//	cout<<"�����ĵ�ʱ��Ϊ"<<(double)(time_end-time_start)/1000<<"s"<<endl;
//	cout<<"һ����"<<v<<"�ֽⷨ"<<endl;
//}