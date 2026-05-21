#include<bits/stdc++.h>
using namespace std;
// x x x x x 
// x x x x x 
// x x x x x 
// x x x x x 
// x x x x x 

void pattern1(int n){
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    cout<<"x ";
    cout<<"\n";
  }
}

// x 
// x x 
// x x x 
// x x x x 
// x x x x x 

void pattern2(int n){
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<=i; j++)
    cout<<"x ";
    cout<<"\n";
  }
}

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

void pattern3(int n){
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<=i; j++)
    cout<<j+1<<" ";
    cout<<"\n";
  }
}

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 


void pattern4(int n){
  for(int i=1; i<=n; i++)
  {
    for(int j=0; j<i; j++)
    cout<<i<<" ";
    cout<<"\n";
  }
}

// x x x x x 
// x x x x 
// x x x 
// x x 
// x 


void pattern5(int n){
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n-i; j++)
    cout<<"x"<<" ";
    cout<<"\n";
  }
}


// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

void pattern6(int n){
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n-i; j++)
    cout<<j+1<<" ";
    cout<<"\n";
  }
}

//         x 
//       x x x 
//     x x x x x 
//   x x x x x x x 
// x x x x x x x x x 


void pattern7(int n){
  for(int i=1; i<=n; i++)
  {
    for(int j=0; j<n-i; j++)
    cout<<"  ";
    for(int j=1; j<=2*i-1; j++)
    cout<<"x"<<" ";
    cout<<"\n";
  }
}

// y y y y y y y y y 
//   y y y y y y y 
//     y y y y y 
//       y y y 
//         y 

void pattern8(int n){
  for(int i=0; i<n; i++)
  {
    for(int j=1; j<i+1; j++)
    {
      cout<<"  ";
    }
    for(int j=1; j<=2*n-(2*i+1); j++)
    cout<<"y ";
    cout<<"\n";
  }
}

//         x 
//       x x x 
//     x x x x x 
//   x x x x x x x 
// x x x x x x x x x 
// x x x x x x x x x 
//   x x x x x x x 
//     x x x x x 
//       x x x 
//         x 


void pattern9(int n){

  for(int i=1; i<=n; i++)
  {
    for(int j=0; j<n-i; j++)
    cout<<"  ";
    for(int j=1; j<=2*i-1; j++)
    cout<<"x"<<" ";
    cout<<"\n";
  }

  for(int i=0; i<n; i++)
  {
    for(int j=1; j<i+1; j++)
    {
      cout<<"  ";
    }
    for(int j=1; j<=2*n-(2*i+1); j++)
    cout<<"x ";
    cout<<"\n";
  }
}

void pattern10(int n){
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<=i; j++)
    cout<<"x ";
    cout<<"\n";
  }
  for(int i=0; i<n-1; i++)
  {
    for(int j=0; j<n-1-i; j++)
    cout<<"x ";
    cout<<"\n";
  }
}

int main()
{
  int n;
  cin>>n;
  
  pattern10(n);
}