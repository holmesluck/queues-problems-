//#include <ctime>
//#include <cmath>
//#include <iostream> 
//using namespace std;
//int total = 0; //�������� 
//void backtrace(int queen[],int N) 
//{ 
//int i, j, k; 
//cout<<"��Ϊ�ʺ����λ��\n";
//for (i=1;;)
//{ //���Ȱ��ŵ�1�� 
//   if(queen[i]<N)
//   { //�ʺ󻹿ɵ��� 
//    k=0; //������k���ʺ��Ƿ��๥�� 
//    while(k<i&&abs(queen[k]-queen[i])&&(abs(queen[k]-queen[i])-abs(k-i))) k++; 
//    if (k<=i-1)
//    { //���k���ʺ��๥�� 
//     queen[i]++; //��i���ʺ�����һ�У��ز� 
//     continue; 
//    } 
//    i++; //�޳�ͻ��������һ�лʺ� 
//    if(i<N) continue; 
//     cout<<"��"<<total+1<<"��Ϊ��\n";
//     for(int i=0;i<N;i++)
//     {
//     
//      
//      for(int j=0;j<queen[i];j++)
//       cout<<"��";
//      cout<<"��";
//      for(int k=queen[i]+1;k<N;k++)
//       cout<<"��";
//      cout<<endl;
//     }
//    
//    total++; //��������1 
//    if(total%5==0) cout<<endl; 
//    queen[N-1]++; // ����8���ʺ�����һ�У�ǰ8������ 
//    i=N-1; //�˴���������ᣬ�粻�ɹ�����ݣ��ؼ�һ�� 
//   } 
//   else //��ǰ�лʺ��޷����ã����� 
//   { 
//    queen[i]=0; //��ǰ�лʺ�ع�1�� 
//    i--; //���ݵ�ǰһ�лʺ� 
//    if(i<0)
//    { //���ݵ�����1��֮ǰ������ 
//     cout<<"\n��� "<<N<<" �ʺ����⣬"<<"һ���ҵ� "<<total<<" �ַ��÷����� "<<endl;
//     cout<<endl; 
//     return; 
//    } 
//    else queen[i]++; //ǰһ�лʺ�����һ�� 
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
//   cout<<"������ʺ������"<<endl; 
//   cin>>N; 
//   int* queen=new int[N]; 
//   for (int i=0;i<N;i++) queen[i] = 0; //�˻ʺ�ȫ���ڵ�0�� 
//   int n=N; /* ��������p[N]������Ž�����У�nΪ�к� */ 
//   start=clock(); 
//   total=0; 
//   backtrace(queen,N); 
//   finish=clock(); 
//   duration=(double)(finish-start); 
//   
//   cout<<"Ϊ�ҳ����÷���ϵͳ����ʱ "<<duration/1000<<" �룡\n"<<endl; 
//   delete []queen; 
//
//
//}
