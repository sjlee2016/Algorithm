#include <stdio.h>
#include <queue>
using namespace std;
int main ()
    {
    int a,b,n,c,coin,f;
	priority_queue <int> d;
	scanf("%d %d", &a,&b);
    coin=0;
	for(f=0;f<a;f++)
	{
			scanf("%d", &n);
			d.push(n);

    }

	while(!d.empty())
	{
		c=d.top();
		if(c>b)
		{
			d.pop();
		}else
		{
			coin=coin+b/c;
			b=b%c;
		}
	}
    printf("%d",coin);
}