# include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    // for(int i=0; i<=n; i++){

    //     for(int j=i-1; j<n; j++){
    //         cout<<i+j<<" ";
    //     }
    //     cout<<endl;
    // }

    // int row=1;
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         cout<<row+col-1<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    int row=1;
    while(row<=n){
        int col=1;
        int value=row;
        while(col<=row){
            cout<<value+col-1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}