#include<stdio.h>
int noOffactors(int n){
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(n%i == 0) ans++;
    }

    return ans;
}
void main(){
    int firstnumber=1,lastnumber=1000,i;
    for(i=firstnumber;i<=lastnumber;i++){
        int facCount = noOffactors(i);
        if(facCount >3 && facCount<7) printf("%d\n",i);
        else continue;
    }
}