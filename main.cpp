#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
enum cars { rock ,paper ,scissors};
using namespace std;

int main()
{     
    //  "rock, paper, scissors game 
   int x= time(0) , probability;
   cout << "rock, paper, scissors game \n"<< " pick one of them : \n";
   string pick , Computer , pick_ , Computer_  ;
  /*string Computer[3]={"rock" ,"paper" ,"scissors"};
   string pick[3]={"rock" ,"paper" ,"scissors"};*/
    

    srand(x);
probability= 1 + rand()% 3;  
if( probability == 1){
     Computer = Computer[0] ;}
    else if(probability == 2){
        Computer =  Computer[1] ;}
            else if(probability == 3){
                Computer =  Computer[2] ; }
                else{}
                           
cout << Computer_ ;        

if(Computer == pick ){
    cout << "draw"<<endl ;
}
else if(Computer != pick){
    if (Computer[0] == pick[1]){
        cout << "you won" << endl;}
    else if(Computer[0] == pick[2]){
        cout << "you lose"<< endl;}
    else if(Computer[1] == pick[0]){
        cout << "you lose"<< endl;}
    else if(Computer[1] == pick[2]){
        cout << "you won"<< endl;}
    else if(Computer[2] == pick[0]){
        cout << "you won "<< endl;}
    else if(Computer[2] == pick[1]){
        cout << "you lose"<< endl;}     
}
else{}
    return 0;
}