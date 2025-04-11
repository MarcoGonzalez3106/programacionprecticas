//Marco Alexis Gonzalez Mejia
#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int d,m,a;
    string mes;
    cout<<"Dime el día: ";
    cin>>d;
    cout<<"Dime el mes: ";
    cin>>m;
    cout<<"Dime el año: ";
    cin>>a;
    if(m==1){
    	mes="enero"
    }
    else
    {
    	if(m==2){
    		mes="feb";
    	}
    	else
    	{
    		if(m==3){
    			mes="mar";
    		}
    		else
    		{
    			if(m==4){
    				mes="abr";
    			}
    			else
    			{
    				if(m==5){
    					mes="may";
    				}
    				else
    				{
    					if(m==6){
    						mes="jun";
    					}
    					else
    					{
    						if(m==7){
    							mes="jul";
    						}
    						else
    						{
    							if(m==8){
    								mes="ago";
    							}
    							else
    							{
    								if(m==9){
    									mes="sep";
    								}
    								else
    								{
    									if(m==10){
    										mes="oct";
    									}
    									else
    									{
    										if(m==11){
    											mes="nov";
    										}
    										else
    										{
    											if(m==12){
    												mes="dic";
												}
												else
												{
													mes="no valido";
																					  }  									
											}
											}
										}
										}
									}
									}
								}
								}
							}
							}
						}
						}
					}
					}
				}
				}
			}
			}
		}
		}
	}
	}
	cout<<"la fecha es"<<d<<" de "<<mes<<" de "<<a;
	return 0;
}