
#include <stdio.h>
#include <math.h>

float u(float x, float y)
{
float q=(exp(2)*cos(M_PI*x*x)) - y;
float w=cos((x*(y*y)) - (1/cbrt(x)))/sin((x*(y*y)) - (1/cbrt(x)));
float e=(x*y) - (x*x) - (y*y);

if (x/y < 1) {
	if (q < w) return q;
	else return w;
	}
	
else return e;

}

int main()
{
for(float x=1; x<=3; x+=1.3)
{
for(float y=2; y<=4; y+=1.5)
{
printf("x=%f y=%f z(x,y)=%f\n",x,y,u(x,y));
}
}
return 0;
}