#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>


int f1();
int f2();

using namespace std;

		int main()
		{
					int i;

			int ( * w_1 ) ();

			auto * w_b = &f1;

				cout << "Chose function : >>>>f(1)***<<<<:::Or >>>>f(2)***<<<< :\t";

				cin >> i;

					switch( i ) {
						case 1:
							w_1 = &f1;
							break;	
						case 2:
							w_1 = &f2;
							break;
						default:
							w_1 = nullptr;
							break;
					}

					if( w_1 ) {
						( *w_1 )();	  
					}
		

			/*	if( i = 1 )
					f1();
				else
					f2();
			*/
		}


		int f1()
		{
			cout << "Run Function : f1()<<<<<<<<********>>>>>>\n";

				int q = 0;
				int m = 1 ,n = 1 , a = 1;
				
					for( q; q < 100; q++ )
					{
						m = m + 1;
				    		a = m*n;
					
							cout << " \tFunction f1 returns parameters a - multiply m & n ::: \n" << m << "\t" << m << a ;
					}
			return 0;
	
		}

		int f2()
		{
			cout << "Run function : f2()<<<<<<<<********>>>>>>\n";

				int q = 0;
				float m = 1.12, n = 1.234,a = 1.178;

					for( q; q < 100; q++ )
					{	
						m = m + 1;
						a = m / n;

							cout << "\t Function f2 returns parameters a - dividing m & n :::\n" << setprecision(11) << m  << a ;
					}
			return 0;

		}
		
		
