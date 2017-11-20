//#include <ctime>
//#include <cmath>
//#include <iostream> 
//using namespace std;
//int total = 0; //方案计数 
//void backtrace(int queen[],int N) 
//{ 
//int i, j, k; 
//cout<<"■为皇后放置位置\n";
//for (i=1;;)
//{ //首先安放第1行 
//   if(queen[i]<N)
//   { //皇后还可调整 
//    k=0; //检查与第k个皇后是否互相攻击 
//    while(k<i&&abs(queen[k]-queen[i])&&(abs(queen[k]-queen[i])-abs(k-i))) k++; 
//    if (k<=i-1)
//    { //与第k个皇后互相攻击 
//     queen[i]++; //第i个皇后右移一列，重测 
//     continue; 
//    } 
//    i++; //无冲突，安置下一行皇后 
//    if(i<N) continue; 
//     cout<<"第"<<total+1<<"种为：\n";
//     for(int i=0;i<N;i++)
//     {
//     
//      
//      for(int j=0;j<queen[i];j++)
//       cout<<"□";
//      cout<<"■";
//      for(int k=queen[i]+1;k<N;k++)
//       cout<<"□";
//      cout<<endl;
//     }
//    
//    total++; //方案数加1 
//    if(total%5==0) cout<<endl; 
//    queen[N-1]++; // 将第8个皇后右移一列，前8个不动 
//    i=N-1; //此处是制造机会，如不成功则回溯，关键一步 
//   } 
//   else //当前行皇后无法安置，回溯 
//   { 
//    queen[i]=0; //当前行皇后回归1列 
//    i--; //回溯到前一行皇后 
//    if(i<0)
//    { //回溯到数组1行之前，结束 
//     cout<<"\n针对 "<<N<<" 皇后问题，"<<"一共找到 "<<total<<" 种放置方法。 "<<endl;
//     cout<<endl; 
//     return; 
//    } 
//    else queen[i]++; //前一行皇后右移一列 
//   } 
//} 
//
//} 
//
//void main()
//{ 
//
//
//
//   clock_t start, finish; 
//   double duration; 
//   int N; 
//   cout<<"请输入皇后个数："<<endl; 
//   cin>>N; 
//   int* queen=new int[N]; 
//   for (int i=0;i<N;i++) queen[i] = 0; //八皇后全放在第0列 
//   int n=N; /* 定义数组p[N]用来存放结果序列，n为行号 */ 
//   start=clock(); 
//   total=0; 
//   backtrace(queen,N); 
//   finish=clock(); 
//   duration=(double)(finish-start); 
//   
//   cout<<"为找出放置方法系统共耗时 "<<duration/1000<<" 秒！\n"<<endl; 
//   delete []queen; 
//
//
//}
