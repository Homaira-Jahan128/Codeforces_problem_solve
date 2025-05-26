 #include<bits/stdc++.h>
        using namespace std;
        #define nl        cout<<endl;
        int printSquare(int n){
            for(int i = 0;i<n; i++){
                for(int j=0;i<n;j++){
                    cout<<"* ";
                }
                cout<<endl;
            }
        }
        
        int main(){
            int n;
            cin>>n;
            printSquare(n);
            return 0;
        }