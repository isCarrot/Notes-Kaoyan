/*
��˳�����ɾ��������Сֵ��Ԫ�أ�����Ψһ�����ɺ������ر�ɾԪ�ص�ֵ��
�ճ���λ�������һ��Ԫ�������˳���Ϊ�գ�����ʾ������Ϣ���˳�����
*/
#include<bits/stdc++.h>
using namespace std;
#define Max 50
struct SqList{
    int a[Max]={1,2,3,4,5,6,9,0,987,6543};
    int length=10;
};
bool listdelete(SqList &s,int &ele)
{
    if(s.length==0)
        return false;
    int minn=s.a[0];
    int flag=0;
    for(int i=1;i<s.length;i++)
    {
        if(s.a[i]<minn)
        {
            minn=s.a[i];flag=i;
        }
    }
    ele=s.a[flag];
    s.a[flag]=s.a[s.length-1];
    return true;
}
int main()
{
   SqList s;
   cout<<"ԭ������Ϊ:"<<endl;
   for(int i=0;i<s.length;i++) cout<<s.a[i]<<" ";
   cout<<endl;
   int k=0;
   if(listdelete(s,k))
   {
       cout<<"��СԪ��k="<<k<<endl;
       cout<<"�޸�֮������Ա�Ϊ:"<<endl;
       for(int i=0;i<s.length;i++)
       {
           cout<<s.a[i]<<" ";
       }
       cout<<endl;
   }
   else{
       cout<<"����"<<endl;
   }
    return 0;
}
