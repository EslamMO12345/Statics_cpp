#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define f float
#define loop for(int i=0; i<n; i++)
// calculate the mean
void mean(int n){
int a[n];
  loop{
        cout<<"Enter number "<<i+1<<": ";
     cin>>a[i];
  }
  f sum=0;
  loop{
    sum+=a[i];
  }
  cout<<"The mean is: " <<sum/n;
}
// calculate the median even
void medianEven(int n){
    f a[n];
    loop{
        cout<< "Enter number "<<i+1<<": ";
        cin>>a[i];
    }

   sort(a,a+n);

   if(n%2==0){
    cout<< "The median is: "<<(a[n/2-1]+a[n/2])/2;
   }
}
// calculate the median odd
void medianOdd(int n){
  f a[n];
  loop{
    cout<<"Enter number "<<i+1<<": ";
    cin>>a[i];
  }
  int result;
  sort(a,a+n);
  result =a[n/2];
  cout<< "The median is: "<<result;
}
// calculate the median
f median (f a[],int n){
   sort(a,a+n);
   if(n%2==0){
    return (a[n/2-1]+a[n/2])/2;
   }else {
     return a[n/2];
   }
}
// calculate the variance and standard deviation and cv
// calculate the population
void population(ll  n){
  f  a[n];
  loop{
    cout<<"Enter number "<<i+1<<": ";
    cin>>a[i];
  }
  f sum=0.0;
  f variance=0.0;
  f meann;
  f stdDevation=0.0;
  f cv;
  f var;
  loop{
    sum+=a[i];
    meann=sum/n;
  }
  loop{
    variance +=pow(a[i]-meann,2);
    var=variance/n;
    stdDevation=sqrt(var);
    cv=stdDevation/meann*100;
  }

  cout<<"choose in this operation but write the number: "<<endl;
  cout<<"(variance = 1) ,( standard deviation)= 2 ) ,(cv= 3) "<<endl;
  string s;
  cout<< "Enter the operation: ";
  cin>>s;

  if(s=="1"){
        cout<< "variance = E(xi - M)2 / N "<<endl;
        cout<<"The variance is : "<<var;
    }else if (s== "2"){
        cout<< "standard deviation = sqrt(variance)"<<endl;
       cout<<"The standard deviation is: "<<stdDevation;
    }else if (s== "3"){
        cout<< "the cv = (standard deviation / mean )* 100"<<endl;
       cout<<"The cv is: "<<cv;
    }else {
       cout<< "Try again plzz...";
    }

}
// calculate the variance and standard deviation and cv
// calculate the sample
void sample(int n){
  f a[n];
  loop{
    cout<<"Enter number "<<i+1<<": ";
    cin>>a[i];
  }
  f sum=0.0;
  f variance=0.0;
  f meann;
  f stdDevation=0.0;
  f cv;
  f var;
  loop{
    sum+=a[i];
    meann=sum/n;
  }
  loop{
    variance +=pow(a[i]-meann,2);
    var=variance/(n-1);
    stdDevation=sqrt(var);
    cv=stdDevation/meann*100;
  }
  cout<<"choose in this operation but write the number: "<<endl;
  cout<<" (variance = 1) ,( standard deviation)= 2 ) ,(cv= 3) "<<endl;

  string s;
  cout<< "Enter the operation: ";
  cin>>s;

  if(s=="1"){
        cout<< "variance = E(xi - M)2 / N - 1 "<<endl;
        cout<<"The variance is : "<<var;
    }else if(s=="2"){
       cout<< "standard deviation = sqrt(variance)"<<endl;
       cout<<"The standard deviation is: "<<stdDevation;
    }else if (s== "3"){
       cout<< "the cv = (standard deviation / mean )* 100"<<endl;
       cout<<"The cv is: "<<cv;
    } else {
       cout<< "Try again plzz...";
    }
}
int main(){




	int function;
	cout<<"choose the function"<<endl;
	cout<<"1 => mean"<<endl;
	cout<<"2 => medianEven"<<endl;
	cout<<"3 => medianOdd"<<endl;
	cout<<"4 => population"<<endl;
	cout<<"5 => sample"<<endl;
	cout<<"6 => median"<<endl;
    cout<<"Enter the function: ";
    cin>>function ;

 if(function == 1) {
	ll n;
	cout<<"How many numbers do you want to enter: ";
    cin>>n;
	mean(n);
 }
 if(function == 2) {
	ll n;
	cout<<"How many numbers do you want to enter: ";
    cin>>n;
	medianEven(n);
 }
 if(function == 3) {
	ll n;
	cout<<"How many numbers do you want to enter: ";
    cin>>n;
	medianOdd(n);
 }
 if(function == 4) {
	ll n;
	cout<<"How many numbers do you want to enter: ";
    cin>>n;
	population(n);
 }
 if(function == 5) {
	ll n;
	cout<<"How many numbers do you want to enter: ";
    cin>>n;
	sample(n);
 }
 if (function == 6 ){
        ll n;
         cout<< "How many numbers do you want to enter: ";
         cin>>n;
        f a[n];
    loop {
       cout<< "Enter number "<<i+1<< ": ";
       cin>>a[i];
     }
     cout<< "The median is: "<<median(a,n);
 }
return 0;
}




// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*class Array{
  protected:
      int size;
      int length;
      int * items;
  public:
    Array(int arrSize){
      size=arrSize;
      length=0;
      items=new int[arrSize];
    }
void fill(){
   int n;
   cout<< "How many items u want to fill ? ";
   cin>>n;
   if(n>size){
    cout<< "Error try again plzz...";
    return;
   }else {
       loop{
        cout<< "Enter number "<<i<<": "<<endl;
        cin>>items[i];
        length++;
       }
   }
}
void Display(){
  cout<< "Display Array Content ";
  for(int i=0; i<length; i++){
     cout<< items[i]<<" ";
  }
  cout<<endl;
}
int getSize(){
  return size;
}
int getLength(){
  return length;
}
int search(){
    int key;
    cin>>key;
    int ii=0;
   int index= 0;
   for(int i=0; i<length; i++){
      if (items[i]==key){
            index=1;
            ii=i+1 ;
      }
   }
   !index? cout<< "item not found " :
       cout<< "the item is found@ position  "<<ii<<endl;
}
void Append(int newItem){
    cin>>newItem;
   length < size? items[length]=newItem
    length++ :
        cout<<" out of range "<<endl;
        ///////////////////////////////////////////////////////////
        if(length<size){
            items[length]=newItem;
            length++;
        }else if(length==size){
            cout<< "Array is full "<<endl;
        }else {
            cout<< "out of range "<<endl;
         }
}
void insert(int index, int newItem){
   if(index>=0&& index<=size){
      for(int i=length; i>index; i--){

          items[i]=items[i-1];
      }

      items[index]=newItem;
      length++;
   }else {
      cout<< "Error _ out of range "<<endl;
   }

}
void delte(int index){
    if(index>=0&& index<=size){
      for(int i=index; i<length-1; i++){

          items[i]=items[i+1];
      }

     // items[index]=newItem;
      length--;
   }else {
      cout<< "Error _ out of range "<<endl;
   }
   //return index;
}
};
int main(){
    int ArraySize;
    cout<< "Enter the array size : "<<endl;
    cin>> ArraySize;
    Array myArray(ArraySize);
    myArray.fill();
   /* myArray.Display();

   cout<< "size array is "<<myArray.getSize()<< " length array is "<<myArray.getLength()<<endl;
   cout<< "Enter the value to search "<<endl;
   cout<< myArray.search();
   int newItem;
   cout<< "Enter the new item to store the array "<<endl;
   cin>>newItem;
   myArray.Append(newItem);
   myArray.Display();*/
  // cout<< "Enter the index and new item plzz.."<<endl;
   ////////////////////////////////////////////////////////////////////////////
  /* int index,newItem;
   cin>>index>>newItem;
   myArray.insert(index,newItem);
   myArray.Display(); */
   //////////////////////////////////////////
  /* cout<< "Enter the index to delete \n ";
   int index;
   cin>>index;
   myArray.delte(index);
   myArray.Display();


}*/
//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*#include <iostream>
#include <vector>
#include <algorithm>
#define str string
#include <queue>
#include <deque>
using namespace std;
void push_b (deque<int> q){
  cout<< "Queue element is (back):  ";
  while (!q.empty()){
     cout<< q.back()<< " " ;
     q.pop_back();
  }
  cout<< endl ;
 }
 void push_f(deque <int> &q){
  cout<< "Queue is element is (front) : ";
  while (!q.empty()){
    cout<< q.front()<< " ";
     q.pop_front();
  }
  cout<< endl;
 }
int main(){
    deque <int> q;
    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
    q.push_front(10);
    q.push_back(50);
    q.push_front(0);
    push_b(q);
    push_f(q);
    push_f(q);

}*/
//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void print(priority_queue<int> &pq){
   cout<< "priority Queue element: ";
   while (!pq.empty()){
      cout<< pq.top()<< " ";
      pq.pop();
   }
   cout<< endl;
}
int main(){
  priority_queue <int> pq;
  (pq.push(-3));
  (pq.push(-5));
  (pq.push(-1));
  (pq.push(0));
  (pq.push(-7));
  print(pq);
  print(pq);
}*/
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*#include <iostream>
#include <stack>

using namespace std;
void print(stack<str> &s){
 cout<< "Stack element is: ";
 while (!s.empty()){
     cout<< s.top()<< " ";
     s.pop();
 }
 cout<< endl;
}
int main(){
 stack <str> s;
 s.push("ebrahim");
 s.push("mohamad");
 s.push("Eslam");
 print(s);
 return 0;
}*/
//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*#include <iostream>
#include <stack>
using namespace std;
struct triple {
  int first;
  str second;
  double third;
};

int main(){
   pair <int , str> p=make_pair(10,"Eslam");
   cout<< p.first<< " "<< p.second<<endl;
   stack <pair<int,str>> s;
   s.push(p);
   s.push(p);
   pair <int,pair<int,str> > my_p = make_pair(10,make_pair(20,"ali"));
   my_p = make_pair(10,p);
   return 0;
}*/
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// ::::::::::::::::::: PREFIX SUM ::::::::::::::::::::::::::::
/*#include <iostream>
#include <vector>
using namespace std;
int sum_rangel (int S, int E, vector<int> cum_sum){
   return cum_sum[E]-cum_sum[S-1];
}
void one_based (){
   int n;
   cin>> n;
   vector <int> A(n);
   vector <int> S(A.size(),0);
   for(int i=0; i<n; i++){
     cin>> A[i];
   }
   for(int i=1; i<(int)A.size(); i++){
      S[i] = A[i] + S[i-1];
   }
   int e,s;
   cin>> e>>s;
   cout<< sum_rangel(e,s,S)<< "\n";
}
int main(){
  // sum (2,4) = s[4] - s[2-1]
  // range (2,4) = range (0,4) - range (0,1)
  // s[i] = s[i-1] + A[i]
 // s[i] = a[0]+a[1]+... +a[i-1]+a[i] ,,,  s[i-1] = a[0]+a[1] +.....+a[i-1] ,,,, then s[i]=s[i-1]+a[i] ,,,, s[5] = sum(0,5)



  one_based();
  return 0;
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////// ::::::::::::::::::::::::: TWO POINTER :::::::::::::::::::::::::::::::::: //////
/*#include <bits/stdc++.h>
#define str string
#define lower transform (a.begin(),a.end(), a.begin(), ::tolower);
#define upper transform (a.begin(),a.end(), a.begin(), ::toupper);
#define lli long long int
#define ll long long
#define lo long
#define f first
#define s second
#define nl endl
#define testCase int t; cin>> t; while(t--)
#define loopi for(int i=0; i<n; i++)
#define loopj for(int j=0; j<n; j++)
using namespace std;
void solve(){
   lli n;
   cin>> n;
   vector <lli> a(n);
  loopi{
    cin >> a[i];
   }
   lli l=0;
   lli r=n-1;
   while (r>l){
    cout << a[l++] <<" " << a[r--] << " ";
   }
   n%2 != 0? cout << a[n/2] << nl : cout << nl;
}
int main(){
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   testCase {solve();}
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////::::::::::::::::::::::::::::::::::::::: ICPC :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
void solve(){
   int x,y,z;
   cin >> x >> y >> z;
   vector <pair<int,int>> a(z);
   int sum = 0, cnt =0;
   int summ = 0;
   for (int i=0; i<z; i++){
       a[i].f = i;
       a[i].s = a[i].f*x+x;
       sum += a[i].s;
       if (a[i].s >= y){
          cnt++;
       }
    summ = sum - (cnt * y);
   }
   cout << summ << endl;
}
int main(){
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
            solve();
    }
}*/
////////////////////////////////////////////////
/*#include <bits/stdc++.h>
using namespace std;
void solve() {
       int n;
    cin >> n;
    vector <tuple<int,str,int>> a(n);
    for (int i=1;i<=n; i++){
            int first;
            str second;
            cin >> first >> second;
            a[i] = make_tuple(first,second,0);
           if (get<0>(a[i]) %2 == 0){
              cout << get<1>(a[i]) ;
           }
    }
}
int main(){
    ios_base ::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;
   cin >> t;
   while (t--){solve();}
}*/
///////////////////////////////////////////////////
/*                     ⠘⣷⣶⣤⣄⡀
                       ⠸⣿⣿⣿⣿⣷⡒⢄⡀
                        ⢹⣿⣿⣿⣿⣿⣆⠙⡄ ⠐
           ⣤⣤⣤⣤⣤⣤⣤⣤⣤⠤⢄⡀  ⣿⣿⣿⣿⣿⣿⡆⠘⡄ ⡆
           ⠈⠙⢿⣿⣿⣿⣿⣿⣿⣿⣦⡈⠒⢄⢸⣿⣿⣿⣿⣿⣿⡀⠱ ⡇
              ⠈⠻⣿⣿⣿⣿⣿⣿⣿⣦ ⠱⣿⣿⣿⣿⣿⣿⣇ ⢃⡇
                ⠘⢿⣿⣿⣿⣿⣿⣿⣷⡄⣹⣿⣿⣿⣿⣿⣿⣶⣾⣿⣶⣤⣀
                ⣀⣀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀
          ⢀⣠⣴⣶⣿⣭⣍⡉⠙⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷
       ⢀⣠⣶⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇   ⣀
       ⠉⠉⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡷⢂⣓⣶⣶⣶⣶⣤⣤⣄⣀
            ⠈⠙⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⠟⢀⣴⢿⣿⣿⣿⠟⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠋⠉
            ⠤⠤⠤⠤⠙⣻⣿⣿⣿⣿⣿⣿⣾⣿⣿⡏⣠⠟⡉⣾⣿⣿⠋⡠⠊⣿⡟⣹⣿⢿⣿⣿⣿⠿⠛⠉
           ⢀⣠⣤⣶⣤⣭⣤⣼⣿⢛⣿⣿⣿⣿⣻⣿⣿⠇⠐⢀⣿⣿⡷⠋ ⢠⣿⣺⣿⣿⢺⣿⣋⣉⣉⣩⣴⣶⣤⣤⣄
            ⠉⠉⠛⠻⠿⣿⣿⣿⣇⢻⣿⣿⡿⠿⣿⣯⡀ ⢸⣿⠋⢀⣠⣶⠿⠿⢿⡿⠈⣾⣿⣿⣿⣿⡿⠿⠛⠋⠁
                  ⠙⠻⢧⡸⣿⣿⣿ ⠃⠻⠟⢦⢾⢣⠶⠿⠏ ⠰ ⣼⡇⣸⣿⣿⠟⠉  ⢀
                  ⢀⣠⣴⣾⣶⣽⣿⡟⠓⠒  ⡀ ⠠⠤⠬⠉⠁⣰⣥⣾⣿⣿⣶⣶⣷⡶⠄
                  ⠉⠉⠉⠉⠹⠟⣿⣿⡄  ⠠⡇     ⢠⡟⠛⠛⠋⠉
                      ⢀⣠⠋⠹⣷⣄ ⠐⣊⣀  ⢀⡴⠁⠣⣀
                ⢀⣀⣤⣀⠤⠊⢁⡸ ⣆⠹⣿⣧⣀  ⡠⠖⡑⠁   ⠑⢄⣀⣀
             ⣰⣦⣶⣿⣿⣟⣁⣤⣾⠟⠁⢀⣿⣆⠹⡆⠻⣿⠉⢀⠜⡰  ⠈⠑⢦⡀⠈⢾⠑⡾⠲⣄ ⣀
        ⣀⣤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠖⠒⠚⠛⠛⠢⠽⢄⣘⣤⡎⠠⠿⠂ ⠠⠴⠶⢉⡭⠃⢸⠃ ⣿⣿⣿⠡⣀
     ⡤⠶⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣋⠁     ⢹⡇    ⠒⠢⣤⠔⠁ ⢀⡏  ⢸⣿⣿ ⢻⡟⠑⠢⢄⡀
    ⢸   ⡀⠉⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⣀⣀⡀ ⢸⣷⡀⣀⣀⡠⠔⠊  ⢀⣠⡞   ⢸⣿⡿ ⠘    ⠈⠑⢤
  ⢀⣴⣿⡀  ⡇   ⠈⣿⣿⣿⣿⣿⣿⣿⣿⣝⡛⠿⢿⣷⣦⣄⡀⠈⠉⠉⠁   ⢀⣠⣴⣾⣿⡿⠁   ⢸⡿⠁        ⡜
 ⢀⣾⣿⣿⡇ ⢰⣷ ⢀  ⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⣭⣍⣉⣉ ⢀⣀⣤⣶⣾⣿⣿⣿⢿⠿⠁    ⠘         ⡰⠉⢦
⢀⣼⣿⣿⡿⢱ ⢸⣿⡀⢸⣧⡀ ⢿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡭⠖⠁ ⡠⠂        ⢠   ⢠⠃ ⠈⣀
⢸⣿⣿⣿⡇ ⢧⢸⣿⣇⢸⣿⣷⡀⠈⣿⣿⣇⠈⠛⢿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⠿⠿⠟⡻⠟⠉  ⡠⠊ ⢠        ⣾⡄ ⢠⣿⠔⠁ ⢸
⠈⣿⣿⣿⣷⡀ ⢻⣿⣿⡜⣿⣿⣷⡀⠈⢿⣿⡄  ⠈⠛⠿⣿⣿⣿⣷⣶⣶⣶⡶⠖⠉ ⣀⣤⡶⠋ ⣠⣶⡏       ⢰⣿⣧⣶⣿⣿⠖⡠⠖⠁
 ⣿⣿⣷⣌⡛⠶⣼⣿⣿⣷⣿⣿⣿⣿⡄⠈⢻⣷ ⣄⡀   ⠈⠉⠛⠛⠛⠁⣀⣤⣶⣾⠟⠋ ⣠⣾⣿⡟        ⣿⣿⣿⣿⣿⠷⠊ ⢰
⢰⣿⣿ ⠈⢉⡶⢿⣿⣿⣿⣿⣿⣿⣿⣿⣆ ⠙⢇⠈⢿⣶⣦⣤⣀⣀⣠⣤⣶⣿⣿⡿⠛⠁⢀⣤⣾⣿⣿⡿⠁       ⣸⣿⡿⠿⠋⠙⠒⠄ ⠉⡄
⣿⣿⡏  ⠁   ⠉⠉⠙⢻⣿⣿⣿⣿⣷⡀   ⠻⣿⣿⣿⣿⣿⠿⠿⠛⠁ ⣀⣴⣿⣿⣿⣿⠟        ⢠⠏         ⠰
*/

///////////
/*
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <iomanip>
#include <cmath>
#include <tuple>
#define nl endl
#define str string
#define lowercase transform(a.begin(),a.end(),a.begin(), ::tolower);
#define uppercase transform(a.begin(),a.end(),a.begin(), ::toupper);
#define hakunaMatata ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define lli long long int
#define l long
#define F first
#define S second
#include <bits/stdc++.h>
#include <fstream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

   int t; cin>>t;
   while(t--){
      str s; cin>>s;
      str temp = s;
      reverse(s.begin(), s.end());
      if(s!=temp){
        cout << s << '\n';
         cout<<"yes"<<"\n";
      } else {
         cout<<"no"<<"\n";
      }
   }
   return 0;
}*/
