#include 
#include

int board [8] [8];

bool isValid (int i, int j)
{
	int count = 0;
	for ( int k = 0; k < 8; k++ ) 
	{ 
		if ( board [i] [k] == 1 ) 
			count++; 
	} 	
	for ( int k = 0; k < 8; k++ ) 
	{ 
		if ( board [k] [j] == 1 ) 
			count++;
	} 
	int x = i; int y = j; 
	
	while ( x != -1 && y != -1 ) 
	{ 
		if ( board [x--] [y--] == 1 ) 
			count++; 
	} 
	
	x = i + 1; y = j + 1; 
	
	while ( x != 7 && y != 7 ) 
	{ 
		if ( board [x++] [y++] == 1 ) 
			count++; 
	} 
		if ( count == 3 ) 
			return true; 
		return false; 
	} 
	
	int main () 
	{ 
		for ( int i = 0; i < 8; i++ ) 
		{ 
			for ( int j = 0; j < 8; j++ ) 
				board [i] [j] = 0; 
			} 
			printf ("Enter board configuration: "); 
			
			int input; 
			
			for ( int i = 0; i < 8; i++ ) 
			{ 
				scanf ("%d", &input); 
				board [i] [input - 1] = 1; 
			} 
			
			bool flag = true; 
			
			for ( int i = 0; i < 8; i++ ) 
			{ 
			for ( int j = 0; j < 8; j++ ) 
			{
				if ( board [i] [j] == 1 ) 
				{ 
					if ( isValid (i, j) == false ) 
					{ 
						flag = false; 
						i = j = 8; // break 
					} 
				} 
			} 
		} 
		if ( flag ) 
			printf("This is a valid configuration.\n"); 
		else 
			printf ("This is NOT a valid configuration.\n"); 
		return 0; 
	} 