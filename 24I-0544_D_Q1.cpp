// Assignment #4 Raja Shehryar Ameer Std ID:24I-0544 Question 1

#include<iostream>
using namespace std;
int main(){
    int rows=11;
    cout<<"W pattern:-"<<endl;
    for(int i=rows;i>=1;i--){
        // for spaces
        for(int j=1;j<=(rows-i);j++){
            cout<<" ";
        }
        
        // for left pattern printer 
        for(int k=1;k<=2*i-1;k++){
            if(k==1 || k==2*i-1){
                cout<<"*";
            }
            else if(k==3 || k==2*i-3){
                cout<<"-";
            }
            else if(k==5 || k==2*i-5){
                cout<<"+";
            }
            else
            cout<<" ";
        }

        // for spaces b/w 'V'
        for(int j=1;j<=2*(rows-i);j++){
            cout<<" ";
        }

        // for right pattern printer 
        for(int k=1;k<=2*i-1;k++){
            if(k==1 || k==2*i-1){
                cout<<"*";
            }
            else if(k==3 || k==2*i-3){
                cout<<"-";
            }
            else if(k==5 || k==2*i-5){
                cout<<"+";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Diamond box pattern:-"<<endl;

    for(int i=1;i<=rows;i++){
        // for spaces
        for(int j=1;j<=(rows-i);j++){
            cout<<" ";
        }
        
        // for half diamond printer 
        for(int k=1;k<=2*i-1;k++){
            if(k==1 || k==2*i-1){
                cout<<"*";
            }
            else if(k==3 || k==2*i-3){
                cout<<"-";
            }
            else if(k==5 || k==2*i-5){
                cout<<"+";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=rows-1;i>=1;i--){
        // for spaces
        for(int j=1;j<=(rows-i);j++){
            cout<<" ";
        }
        
        // for lower side daimond 
        for(int k=1;k<=2*i-1;k++){
            if(k==1 || k==2*i-1){
                cout<<"*";
            }
            else if(k==3 || k==2*i-3){
                cout<<"-";
            }
            else if(k==5 || k==2*i-5){
                cout<<"+";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Numbered diamond pattern:-"<<endl;
    rows=10;
    int count=0;
    
    // for upper half
    for(int i=1;i<=rows;i++){

        // for first right triangle
        for(int j=1;j<=i;j++){
            cout<<count;
        }

        //for spaces b/w right triangle and pyramid
        for(int k=1;k<=2*(rows-i)+1;k++){
            cout<<" ";
        }

        // for pyramid
        for(int j=1;j<=2*i;j++){
            cout<<count;
        }

        //for spaces b/w pyramid and right triangle
        for(int k=1;k<=2*(rows-i)+1;k++){
            cout<<" ";
        }
        
        // for right traingle
        for(int j=1;j<=i;j++){
            cout<<count;
        }
        count++;
        cout<<endl;
    }
    count-=2;
    // for lower half
    for(int i=rows-1;i>=1;i--){

        // for first right triangle
        for(int j=1;j<=i;j++){
            cout<<count;
        }

        //for spaces b/w right triangle and pyramid
        for(int k=1;k<=2*(rows-i)+1;k++){
            cout<<" ";
        }

        // for pyramid
        for(int j=1;j<=2*i;j++){
            cout<<count;
        }

        //for spaces b/w pyramid and right triangle
        for(int k=1;k<=2*(rows-i)+1;k++){
            cout<<" ";
        }

        // for right triangle
        for(int j=1;j<=i;j++){
            cout<<count;
        }
        count--;
        cout<<endl;
    }
    cout<<"\nColoured patterned:-"<<endl;
    for(int i=1;i<=10;i++){

        // for spaces 
        for(int j=1;j<=(2*(10-i)+2);j++){
            cout<<" ";
        }

        // for right triangle
        for(int j=1;j<(2*i-1);j++){
            cout<<"\033[92m"<<"*"<<"\033[0m";
        }
        cout<<"\033[95m"<<"|"<<"\033[0m";
        for(int j=1;j<(2*i-1);j++){
            cout<<"\033[91m"<<"+"<<"\033[0m";
        }
        cout<<endl;
    }

    for(int j=1;j<=41;j++){
        cout<<"\033[95m"<<"-"<<"\033[0m";
    }
    cout<<endl;
    for(int k=1;k<=10;k++){
        int count=1;
        for(int j=1;j<k;j++){
            cout<<"\033[97m"<<count<<"\033[0m";
        }
        cout<<"\033[95m"<<"\\"<<"\033[0m";
        count++;
        for(int j=1;j<=2*(10-k);j++){
            cout<<"\033[96m"<<count<<"\033[0m";
        }
        cout<<"\033[95m"<<"/"<<"\033[0m";
        count++;
        for(int j=1;j<=2*k-1;j++){
            cout<<"\033[38;5;214m"<<count<<"\033[0m";
        }
        cout<<"\033[95m"<<"\\"<<"\033[0m";
        count++;
        for(int j=1;j<=2*(10-k);j++){
            cout<<"\033[92m"<<count<<"\033[0m";
        }
        cout<<"\033[95m"<<"/"<<"\033[0m";
        count++;
        for(int j=1;j<k;j++){
            cout<<"\033[94m"<<count<<"\033[0m";
        }
        cout<<endl;
    }
    for(int j=1;j<=41;j++){
        cout<<"\033[95m"<<"-"<<"\033[0m";
    }
    cout<<endl;
    for(int i=10;i>=1;i--){

        // for spaces 
        for(int j=1;j<=(2*(10-i)+2);j++){
            cout<<" ";
        }

        // for right triangle
        for(int j=1;j<(2*i-1);j++){
            cout<<"\033[38;5;214m"<<"*"<<"\033[0m";
        }
        cout<<"\033[95m"<<"|"<<"\033[0m";
        for(int j=1;j<(2*i-1);j++){
            cout<<"\033[92m"<<"+"<<"\033[0m";
        }
        cout<<endl;
    }

    return 0;
}