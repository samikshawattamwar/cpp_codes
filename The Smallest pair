int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n], min1,min2;
	    for(int i=0; i<n; i++)
	    
	        scanf("%d",&a[i]);
	    
	    min1 = 1000001;
	    min2 = 1000001;
	    for(int i=0; i<n; i++)
	    {
	        if(a[i]<min1)
	        {
	            if(min1<min2)
	            min1 =min2;
	            min1 =a[i];
	        }
	        if(a[i]<min2 && a[i]!=min1)
                min2=a[i];
	    }
	    printf("%d\n",min1+min2);
	}
	return 0;
}

