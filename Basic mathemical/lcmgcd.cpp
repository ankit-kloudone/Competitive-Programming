using namespace std;
int gcd(int a, int b) 
{ 
	if (b == 0) 
		return a; 
	return gcd(b, a % b); 
	
} 

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int hcf=gcd(a,b);
	    int lcm=(a*b)/hcf;
	    cout<<lcm<<" "<<hcf<<endl;
	    
	}
	return 0;
}