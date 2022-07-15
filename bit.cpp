 //program to perform bit manipulation.
 #include<iostream>
 using namespace std;

 bool ispowerof2(int n)
 {
     return (n && !(n & n-1));
 }

 int numberofones(int n)
 {
     int count;
     while(n!=0)
     {
         n = n & (n-1);
         ++count;
     }
     return count;
 }

 int main()
 {
     int num;
     cin>>num;
     cout<<ispowerof2(num)<<endl;
     cout<<numberofones(num)<<endl;
     return 0;
 }