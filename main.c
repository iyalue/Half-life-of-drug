#include <stdio.h>
#include <math.h>
void Show(double init,double halflife,double t);
int main(){
	double initc=10,halflife=24,interval=6;
	scanf("%lf %lf %lf",&initc,&halflife,&interval);
	printf("初始剂量为:%.2lf,半衰期为:%.2lf,给药间隔为:%.2lf",initc,halflife,interval);
	Show(initc,halflife,interval);
	return 0;
}
void Show(double c,double halflife,double t){
	double x=c,st=t;
	for(int i=0;i<20;i++){
	x=x*pow(0.5,t/halflife);
	printf("经过%.2lf小时后，血药浓度为%.2lf",st,x);
	x+=c;st+=t;
	printf("给药后:%.2lf\n",x);
}
}
