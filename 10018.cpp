#include <iostream>

using namespace std;

int poora(int arv){

    int pooratud = 0;
    int j = 0;


    while(arv > 0){
        j = arv%10;
        pooratud = pooratud * 10 + j;
        arv = arv/10;

    }
    return pooratud;

}



int main()
{
    int P,N,n=0,i;
    cin>>N;
    
    for(i=1;i<=N;i++){
    cin>>P;
        while(P!=poora(P)){
            P=P+poora(P);
            n++;
        }
    cout<<n<<" "<<P<<endl;
    n=0;
    }
    system("pause");
    return 0;
}
