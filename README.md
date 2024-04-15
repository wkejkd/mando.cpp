
#include <iostream>
using namespace std;

int main(){
    int x=0,y=0;
    char op;
   
    cout<<"x정수를 입력하세요:";
    cin>>x;

   cout<<"연산자를 입력하세요:";
cin>>op;
   
 cout<<"y정수를 입력하세요:";
 cin>>y;

    switch (op){
    case '+':
        cout<<"x+y="<<x+y<<endl;
        break;
    
     case '-':
    
    
        cout<<"x-y="<<x-y<<endl;
        break;
    
      case '*':
     
        
        cout<<"x*y="<<x*y<<endl;
        break;
    
    case '/':
    
        cout<<"x/y="<<x/y<<endl;
        break;

      
    }
    
    
}
