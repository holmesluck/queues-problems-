//#include <iostream>               //��Ϊ���ݷ�
//#include <cmath>
//#include <time.h>
//using namespace std;
//
//#define space 10000
//#define CLOCKS_PER_SEC ((clock_t)1000)
//
//
//int N;
//int *a;
//void Queen();
//void Create();
// 
//
//int main()
//{
//   clock_t start, finish;                                              
//   double  duration;                                 
//    start=clock();                                                           //��¼���еĳ�ʼʱ��
//	cout<<"please input the N of the problem N-Queen :"<<endl;
//	cin>>N ;	
//	a= new int [N];
//	a[N];
//	Create();                                        
//	Queen();
//	a=NULL;
//	delete a;
//	finish=clock();                                                       //��¼���е���ֹʱ��
//	duration = (double)(finish - start)/CLOCKS_PER_SEC ;              //�����������ĵ���ʱ��
//	cout<<"�ܹ��ķ�ʱ��Ϊ:"<<duration<<"s"<<endl;
//	return 0 ;
//	
//}
//void Create(){                              // ��ʼ��һ��һά����������Żʺ��λ��
//	int *p;
//	for (p = a; p < a + N; ++p) 
// {  
//	 *p =space ;
//
// }
//}
//
//void print()                                    //��ӡ��ǰ�Ļʺ��λ��
//{  
//    int i, j;  
//	for (i = 0; i < N; ++i) {                   
//		for (j = 0; j < N; ++j) {  
//           if (a[i] != j)                      //�жϵ�ǰλ���Ƿ��лʺ�����ǻʺ����ӡ�������ӡ��
//			   cout<<"��";  
//            else   
//			   cout<<"��";  
//        }  
//		cout<<endl;  
//    }  
//}  
//int valid(int row, int col)                  //�����ж��Ƿ����NQueen ������
//{  
//    int i;  
//	for (i = 0; i < N; ++i) {  
//       if (a[i] == col || abs(i - row) == abs(a[i] - col))    //���ͬ�г��ֻ����ڽ��������򷵻�0������1 
//           return 0;  
//   }  
//      
//    return 1;  
//}  
//
//void Queen()  
//{  
//    int n = 0;  
//    int i = 0, j = 0;  
//	while (i < N)                                  //�������N�ڼ���
//	{                          
//      
//		    while (j < N)                        
//		   {  
//               if (valid(i, j)) 
//			  {                                 //���Իʺ��Ƿ���԰ڵ����λ�� 
//                  a[i] = j;                     //�ѻʺ�ŵ���һ��
//                  j = 0;  
//                  break;  
//               } 
//			   else
//			   {                                // ����������λ���Ǿ�������һ��
//                 ++j;  
//               }  
//            }  
//		   if (a[i]== space)
//		   {                                  //�жϻʺ��λ���Ƿ��ڷ���Ŀռ���
//            if (i == 0)                       //������ڵ�һ����break 
//                break;  
//            else  
//			 {                                 //�������
//                --i;  
//                j = a[i] + 1;  
//				a[i] = space;  
//                continue;  
//             }  
//            
//           } 
//           if (i == N - 1)                       //�Ѿ��ҵ��������ӡ
//	        {                                     
//               n++;
//		       cout<<"Answer  "<<n<<":"<<endl;
//		       print();  
//               j = a[i] + 1;  
//               a[i] = space;  
//               continue;      
//            }   
//      ++i;                                       // ������һ�� 
//   }  
//}  

