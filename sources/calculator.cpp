double sum(double a, double b)
{
	return a + b;
}
double sub(double a, double b)
{
	return a - b;
}
double *di ( double a,  double b, int c)
{
	float d;
	if ( a != 0 && b != 0  ) 
	{ 

		d = (float)a/b; 
		return d;
	}
		else if ( a == 0 ) return 0;
		else 
		{ 
			c = 1; 
			return nullptr; 
		}
}
double multip(double a, double b)
{
	return a*b;
}
double power ( float a, int extent,  int c)
{
	float a2 = a;
	
	if ( a != 0 )
	{
		c = 0;
		if ( extent < 0 )
	{
		for (unsigned int i = 1; i < -extent; ++i)
		{
			a = a * a2;
		}
		a = (float)1 / a;
	}
	    else if ( extent > 0 ) 
	    {
			for (unsigned int i = 1; i < extent; ++i)
		    {
			a = a * a2;
		    }
	    }
		else a = 1.0;
	
	return (double) a;
	}
	else if ( a == 0 && extent < 0 ) c = 1;
	else if ( a == 0 && extent > 0 ) return 0;
	else if ( a == 0 && extent == 0 ) return 1;
	
}
double *squareroot ( double a, int c )
{
	float xn = 1.0;  
	float xn1 = 2.0;
	float d;
	if ( a >= 0 )
	{
		c = 0;
		if ( a != 1 && a != 0 )
	{
		while ( (xn1 - xn) > 0.000001 || (xn1 - xn) < -0.000001  )
		{
		 xn = xn1;
		 xn1 = (float)(xn + (float)a/xn)/2;
		}

	}
		else if ( a == 1 ) xn1 = 1;
			else if ( a == 0 ) xn1 = 0;
		d = xn1; 
		return d;
	}
	
	else 
	{ 
		c = 1; 
		return nullptr;
 
	}
	
}
