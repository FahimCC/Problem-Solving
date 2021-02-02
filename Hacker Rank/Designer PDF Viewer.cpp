#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[28];

	for(int i=1;i<=26;i++)
		scanf("%d", &a[i]);

	char s[104];
	getchar();
	scanf("%s", s);

	int max = 0, length = strlen(s);

	for(int i=0;i<length;i++)
	{
		if(a[s[i]-96] > max)
			max = a[s[i]-96];

        //cout<<a[s[i]-96]<<endl;
	}

	//cout<<max<<endl;

	printf("%d\n",max*length);

	return 0;
}
