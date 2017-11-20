//#include <iostream>               //此为回溯法
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
//    start=clock();                                                           //记录运行的初始时间
//	cout<<"please input the N of the problem N-Queen :"<<endl;
//	cin>>N ;	
//	a= new int [N];
//	a[N];
//	Create();                                        
//	Queen();
//	a=NULL;
//	delete a;
//	finish=clock();                                                       //记录运行的终止时间
//	duration = (double)(finish - start)/CLOCKS_PER_SEC ;              //计算运行所耗的总时间
//	cout<<"总共耗费时间为:"<<duration<<"s"<<endl;
//	return 0 ;
//	
//}
//void Create(){                              // 初始化一个一维数组用来存放皇后的位置
//	int *p;
//	for (p = a; p < a + N; ++p) 
// {  
//	 *p =space ;
//
// }
//}
//
//void print()                                    //打印当前的皇后的位置
//{  
//    int i, j;  
//	for (i = 0; i < N; ++i) {                   
//		for (j = 0; j < N; ++j) {  
//           if (a[i] != j)                      //判断当前位置是否有皇后，如果是皇后则打印■否则打印□
//			   cout<<"□";  
//            else   
//			   cout<<"■";  
//        }  
//		cout<<endl;  
//    }  
//}  
//int valid(int row, int col)                  //进行判断是否符合NQueen 的条件
//{  
//    int i;  
//	for (i = 0; i < N; ++i) {  
//       if (a[i] == col || abs(i - row) == abs(a[i] - col))    //如果同列出现或是在交叉线上则返回0否则是1 
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
//	while (i < N)                                  //如果行在N内继续
//	{                          
//      
//		    while (j < N)                        
//		   {  
//               if (valid(i, j)) 
//			  {                                 //测试皇后是否可以摆到这个位置 
//                  a[i] = j;                     //把皇后放到下一列
//                  j = 0;  
//                  break;  
//               } 
//			   else
//			   {                                // 如果不是这个位置那就跳到下一列
//                 ++j;  
//               }  
//            }  
//		   if (a[i]== space)
//		   {                                  //判断皇后的位置是否在分配的空间内
//            if (i == 0)                       //如果是在第一行则break 
//                break;  
//            else  
//			 {                                 //否则回溯
//                --i;  
//                j = a[i] + 1;  
//				a[i] = space;  
//                continue;  
//             }  
//            
//           } 
//           if (i == N - 1)                       //已经找到结果并打印
//	        {                                     
//               n++;
//		       cout<<"Answer  "<<n<<":"<<endl;
//		       print();  
//               j = a[i] + 1;  
//               a[i] = space;  
//               continue;      
//            }   
//      ++i;                                       // 测试下一行 
//   }  
//}  

