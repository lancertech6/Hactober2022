const int N=(int)1e7+1;             
vector<bool>prime(N,true);
void seive(){
    prime[0]=prime[1]=false;
    for(int i=2;i*i<N;i++){
        if(prime[i]){
            for(int j=i*i;j<N;j+=i){
                prime[j]=false;
            }
        }
    }
}
