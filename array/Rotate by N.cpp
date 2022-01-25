#include <iostream>
using namespace std;

int main() {
int testcase;
cin >> testcase;

while(testcase--){
    long int N,Rotaion;
    cin >> N >> Rotaion;
    long int A[N];
    long int B[N];
    

//Input Array
    for(int i=0 ; i<N ; i++){
        cin >> A[i];
    }

 

//Main Logic
    for(int i=0 ; i<N-Rotaion ; i++){
            B[i]=A[i+Rotaion];
    }
    for(int i=0 ; i<Rotaion ; i++){
            B[N-Rotaion+i]=A[i];
    }

 

//Print Output
    for(int i=0 ; i<N ; i++){
           cout << B[i] << " ";
    }
    cout << endl;
    
}
return 0;
}
