#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    vector<int> myvec;
	    
	    for(int i=0; i<n; i++){
	        
	        int num; cin>>num; myvec.push_back(num);
	        
	    }
	    
	    int count=0;
	    
	    if(n>2){
	        for(int i=1; i<n-1; i++){
	        
	            if( myvec[i-1] - myvec[i+1] <= 1  ) count++;
	        
	        }
	    
	        if( count == n-2 ){ cout<<"YES"<<endl;} else {cout<<"NO"<<endl;}
	        
	    }else cout<<"NO"<<endl;
	    
	}
	
	return 0;
}
