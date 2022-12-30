#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>

using namespace std;
//	int r=2,l=4,d=3,u=1;             // directions right, left , down , up
void move(int k, int h,int &x,int &y ){
	if(k==1){ // up
		y=y-h;
	}
	else if(k==2){
		x=x+h;  //right
	}
	
	else if(k==3){         // down
		y=y+h;
	}
	
	else if(k==4){     //left
		x=x-h;
	}
	
	lineto(x,y);  // draw the line to new x,y co-ordinates
}

void helbert(int r,int d,int l,int u,int i,int h,int &x,int &y){
	if(i>0){
		i--;
		
		helbert(d,r,u,l,i,h,x,y);
		move(r,h,x,y);
		
		helbert(r,d,l,u,i,h,x,y);
		move(d,h,x,y);
		
		helbert(r,d,l,u,i,h,x,y);
		move(l,h,x,y);
		
		helbert(u,l,d,r,i,h,x,y);
		
	}
	
}

int main(){
	cout<<"Helbert curve "<<endl;
	
	int x0=50,y0=150,x,y;            // intial point from which helbert curve whill start
	int h=10;                   // step height 
	int r=2,l=4,d=3,u=1;             // directions right, left , down , up
	
	int n;
	cout<<"Enter the value : "<<endl;        // taking limmit of curve as it is infinite
	cin>>n;
	
	 x=x0;
	 y=y0;
	 
	 int gd=DETECT;
	 int gm;           // graphic mode which is computer display mode that generates image using pixels
	 initgraph(&gd,&gm,NULL);  // graphic system
	 
	 moveto(x,y);           // Changes the current position to x,y
	 
	 helbert(r,d,l,u,n,h,x,y);  
	  
	 delay(10000);      // to stop execution of program for particular time
	 
     closegraph();   // close graphics mode	 
	
}

