#include<iostream>
#include<vector>
using namespace std;
int input(int num1,int num2, int num3 ) { 
       int list[3]={num1 ,num2 ,num3 };   
     for(int j=0 ; j<3 ; j++){
        cin >> list[j];
        if (list[j] == list[j+1])
        {
            break;
            bool check = false ;
 }
        else{
            // SORTING 
            cout << "bkjdfv";
        }
        
       /* while(list[j] == list[j+1]){
           bool check = true ;
            break;
        }*/

     }
     return 0;
}

void sorting(int num1,int num2, int num3 ){
  // for(int i=0 ; i<3 ; i++){
        if(num1 > num2 && num1 > num3 ){
            cout <<  num1 << endl;
        }
        else if(num2 > num1 && num2 > num3 ){
            cout <<  num2 << endl;
        }
        else{
            cout <<  num3 << endl;
        }
    }
int main(){

    int num1 ,num2 ,num3;
    bool check = true;
  int list[3]={num1 ,num2 ,num3 };   
     for(int j=0 ; j<3 ; j++){
         cin >> list[j];
        if (list[j] == list[j+1])
        {
            break;
           //bool check = false ;

        }
        else{
            // SORTING 
            cout << "bkjdfv";
        }
    return 0;
}
}