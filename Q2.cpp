//WAP to display content of a file in reverse order.


#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream file;
  string str,line;
  file.open("codesdopea.txt",ios::in); 
  while(file >> str)
  {
      line = line + str;
      line = line + " ";
  }
  file.close(); 
  cout<<"Line written on file : Before reversing"<<endl;
  cout<<line<<endl;
  reverse(line.begin(),line.end()); 
  file.open("codesdopea.txt",ios::in|ios::out|ios::trunc);
  file<<line<<endl; 
  cout<<"Line written on file : After reversing"<<endl;
  cout<<line<<endl;
  file.close();
}