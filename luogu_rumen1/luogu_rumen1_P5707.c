#include<stdio.h>


int main(){
    int s,v;
    scanf("%d%d",&s,&v);
    int t;
    if(s%v==0){
        t=s/v;
    }
    else{
        t=s/v+1;
    }
    t=t+10;
    int time=8*60-t;
    if(time<0){
        time=time+1440;
    }
    printf("%02d:%02d",time/60,time%60);

    return 0;
}