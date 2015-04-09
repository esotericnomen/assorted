// NOTE: compile with g++ filename.cpp -std=c++11
//    also, if this doesn't work for you, try the alternate char-based version
// http://codegolf.stackexchange.com/questions/35569/tweetable-mathematical-art

#include <iostream>
#include <cmath>
#define DIM 1024
#define DM1 (DIM-1)
#define _sq(x) ((x)*(x))                           // square
#define _cb(x) abs((x)*(x)*(x))                    // absolute value of cube
#define _cr(x) (unsigned short)(pow((x),1.0/3.0))  // cube root

/*unsigned short GR(int,int);*/
/*unsigned short BL(int,int);*/
#if 0
unsigned short RD(int i,int j){
    // YOUR CODE HERE
}
unsigned short GR(int i,int j){
    // YOUR CODE HERE
}
unsigned short BL(int i,int j){
    // YOUR CODE HERE
}
#endif
#if 0
unsigned short RD(int i,int j){
    return (unsigned short)sqrt((double)(_sq(i-DIM/2)*_sq(j-DIM/2))*2.0);
}
unsigned short GR(int i,int j){
    return (unsigned short)sqrt((double)(
                (_sq(i-DIM/2)|_sq(j-DIM/2))*
                (_sq(i-DIM/2)&_sq(j-DIM/2))
                ));
}
unsigned short BL(int i,int j){
    return (unsigned short)sqrt((double)(_sq(i-DIM/2)&_sq(j-DIM/2))*2.0);
}
#endif
#if 0
unsigned short RD(int i,int j){
    return i&&j?(i%j)&(j%i):0;
}
unsigned short GR(int i,int j){
    return i&&j?(i%j)+(j%i):0;
}
unsigned short BL(int i,int j){
    return i&&j?(i%j)|(j%i):0;
}
#endif
#if 0
#define r(n)(rand()%n)
char RD(int i,int j){
    static char c[1024][1024];return!c[i][j]?c[i][j]=!r(999)?r(256):RD((i+r(2))%1024,(j+r(2))%1024):c[i][j];
}
char GR(int i,int j){
    static char c[1024][1024];return!c[i][j]?c[i][j]=!r(999)?r(256):GR((i+r(2))%1024,(j+r(2))%1024):c[i][j];
}
char BL(int i,int j){
    static char c[1024][1024];return!c[i][j]?c[i][j]=!r(999)?r(256):BL((i+r(2))%1024,(j+r(2))%1024):c[i][j];
}
#endif
#if 0
#define r(n)(rand()%n)
char RD(int i,int j){
    static char c[1024][1024];return!c[i][j]?c[i][j]=r(999)?RD((i+r(5)+1022)%1024,(j+r(5)+1022)%1024):r(256):c[i][j];
}
char GR(int i,int j){
    static char c[1024][1024];return!c[i][j]?c[i][j]=r(999)?GR((i+r(5)+1022)%1024,(j+r(5)+1022)%1024):r(256):c[i][j];
}
char BL(int i,int j){
    static char c[1024][1024];return!c[i][j]?c[i][j]=r(999)?BL((i+r(5)+1022)%1024,(j+r(5)+1022)%1024):r(256):c[i][j];
}
#endif
#if 0
unsigned char RD(int i,int j){
    float s=3./(j+99);
    return (int((i+DIM)*s+j*s)%2+int((DIM*2-i)*s+j*s)%2)*127;
}
unsigned char GR(int i,int j){
    float s=3./(j+99);
    return (int((i+DIM)*s+j*s)%2+int((DIM*2-i)*s+j*s)%2)*127;
}
unsigned char BL(int i,int j){
    float s=3./(j+99);
    return (int((i+DIM)*s+j*s)%2+int((DIM*2-i)*s+j*s)%2)*127;
}
#endif
#if 0
unsigned char RD(int i,int j){
    float s=3./(j+99);
    float y=(j+sin((i*i+_sq(j-700)*5)/100./DIM)*35)*s;
    return (int((i+DIM)*s+y)%2+int((DIM*2-i)*s+y)%2)*127;
}
unsigned char GR(int i,int j){
    float s=3./(j+99);
    float y=(j+sin((i*i+_sq(j-700)*5)/100./DIM)*35)*s;
    return (int((i+DIM)*s+y)%2+int((DIM*2-i)*s+y)%2)*127;
}
unsigned char BL(int i,int j){
    float s=3./(j+99);
    float y=(j+sin((i*i+_sq(j-700)*5)/100./DIM)*35)*s;
    return (int((i+DIM)*s+y)%2+int((DIM*2-i)*s+y)%2)*127;
}
#endif
#if 0
unsigned char RD(int i,int j){
    float s=3./(j+99);
    float y=(j+sin((i*i+_sq(j-700)*5)/100./DIM)*35)*s;
    return (int((i+DIM)*s+y)%2+int((DIM*2-i)*s+y)%2)*127;
}
unsigned char GR(int i,int j){
    float s=3./(j+99);
    float y=(j+sin((i*i+_sq(j-700)*5)/100./DIM)*35)*s;
    return (int(5*((i+DIM)*s+y))%2+int(5*((DIM*2-i)*s+y))%2)*127;
}
unsigned char BL(int i,int j){
    float s=3./(j+99);
    float y=(j+sin((i*i+_sq(j-700)*5)/100./DIM)*35)*s;
    return (int(29*((i+DIM)*s+y))%2+int(29*((DIM*2-i)*s+y))%2)*127;
}
#endif
#if 0
unsigned char RD(int i,int j){
#define P 6.03
    float s=3./(j+250),y=(j+sin((i*i+_sq(j-700)*5)/100./DIM+P)*15)*s;return (int((i+DIM)*s+y)%2+int((DIM*2-i)*s+y)%2)*127;}

    unsigned char GR(int i,int j){
        float s=3./(j+250);
        float y=(j+sin((i*i+_sq(j-700)*5)/100./DIM+P)*15)*s;
        return (int(5*((i+DIM)*s+y))%2+int(5*((DIM*2-i)*s+y))%2)*127;}

        unsigned char BL(int i,int j){
            float s=3./(j+250);
            float y=(j+sin((i*i+_sq(j-700)*5)/100./DIM+P)*15)*s;
            return (int(29*((i+DIM)*s+y))%2+int(29*((DIM*2-i)*s+y))%2)*127;}
#endif

#if 1
            char RD(int i,int j){
                float x=0,y=0;int k;for(k=0;k++<256;){float a=x*x-y*y+(i-768.0)/512;y=2*x*y+(j-512.0)/512;x=a;if(x*x+y*y>4)break;}return k>31?256:k*8;
            }
char GR(int i,int j){
    float x=0,y=0;int k;for(k=0;k++<256;){float a=x*x-y*y+(i-768.0)/512;y=2*x*y+(j-512.0)/512;x=a;if(x*x+y*y>4)break;}return k>63?256:k*4;
}
char BL(int i,int j){
    float x=0,y=0;int k;for(k=0;k++<256;){float a=x*x-y*y+(i-768.0)/512;y=2*x*y+(j-512.0)/512;x=a;if(x*x+y*y>4)break;}return k;
}
#endif

#if 0
char RD(int i,int j){
    float x=0,y=0;int k;for(k=0;k++<256;){float a=x*x-y*y+(i-768.0)/512;y=2*x*y+(j-512.0)/512;x=a;if(x*x+y*y>4)break;}return log(k)*47;
}
char GR(int i,int j){
    float x=0,y=0;int k;for(k=0;k++<256;){float a=x*x-y*y+(i-768.0)/512;y=2*x*y+(j-512.0)/512;x=a;if(x*x+y*y>4)break;}return log(k)*47;
}
char BL(int i,int j){
    float x=0,y=0;int k;for(k=0;k++<256;){float a=x*x-y*y+(i-768.0)/512;y=2*x*y+(j-512.0)/512;x=a;if(x*x+y*y>4)break;}return 128 - log(k)*23;
}
#endif
#if 0
char RD(int i,int j){
    float x=0,y=0,k=0,X,Y;while(k++<256e2&&(X=x*x)+(Y=y*y)<4)y=2*x*y+(j-89500)/102400.,x=X-Y+(i-14680)/102400.;return log(k)/10.15*256;
}
char GR(int i,int j){
    float x=0,y=0,k=0,X,Y;while(k++<256e2&&(X=x*x)+(Y=y*y)<4)y=2*x*y+(j-89500)/102400.,x=X-Y+(i-14680)/102400.;return log(k)/10.15*256;
}
char BL(int i,int j){
    float x=0,y=0,k=0,X,Y;while(k++<256e2&&(X=x*x)+(Y=y*y)<4)y=2*x*y+(j-89500)/102400.,x=X-Y+(i-14680)/102400.;return 128-k/200;
}
#endif
#if 0
unsigned short RD(int i,int j){
    return(sqrt(_sq(73.-i)+_sq(609-j))+1)/(sqrt(abs(sin((sqrt(_sq(860.-i)+_sq(162-j)))/115.0)))+1)/200;
}
unsigned short GR(int i,int j){
    return(sqrt(_sq(160.-i)+_sq(60-j))+1)/(sqrt(abs(sin((sqrt(_sq(86.-i)+_sq(860-j)))/115.0)))+1)/200;
}
unsigned short BL(int i,int j){
    return(sqrt(_sq(844.-i)+_sq(200-j))+1)/(sqrt(abs(sin((sqrt(_sq(250.-i)+_sq(20-j)))/115.0)))+1)/200;
}
#endif
#if 0
unsigned short RD(int i,int j){
    return(sqrt(_sq(148.-i)+_sq(1000-j))+1)/(sqrt(abs(sin((sqrt(_sq(500.-i)+_sq(400-j)))/115.0)))+1)/200;
}
unsigned short GR(int i,int j){
    return(sqrt(_sq(610.-i)+_sq(60-j))+1)/(sqrt(abs(sin((sqrt(_sq(864.-i)+_sq(860-j)))/115.0)))+1)/200;
}
unsigned short BL(int i,int j){
    return(sqrt(_sq(180.-i)+_sq(100-j))+1)/(sqrt(abs(sin((sqrt(_sq(503.-i)+_sq(103-j)))/115.0)))+1)/200;
}
#endif
#if 0
unsigned short RD(int i, int j){
#define D(x) (x-DIM/2.)/(DIM/2.)
    float x=D(i),y=D(j),X,Y,n=0;while(n++<200&&(X=x*x)+(Y=y*y)<4){x=X-Y+.36237;y=2*x*y+.32;}return log(n)*256;}

    unsigned short GR(int i, int j){
        float x=D(i),y=D(j),X,Y,n=0;while(n++<200&&(x*x+y*y)<4){X=x;Y=y;x=X*X-Y*Y+-.7;y=2*X*Y+.27015;}return log(n)*128;}

        unsigned short BL(int i, int j){
            float x=D(i),y=D(j),X,Y,n=0;while(n++<600&&(x*x+y*y)<4){X=x;Y=y;x=X*X-Y*Y+.36237;y=2*X*Y+.32;}return log(n)*128;}
#endif

#if 0
            unsigned short RD(int i, int j){
                static int n=1;if(n){--n;srand(time(0));}
#define R rand()/16384.-1
#define S static float r=R,k=R;float
                return _cb(i^j);}

                unsigned short GR(int i, int j){
#define D(x) (x-DIM/2.)/(DIM/2.),
                    S x=D(i)y=D(j)X,Y;int n=0;while(n++<200&&(X=x)*x+(Y=y)*y<4){x=X*X-Y*Y+r;y=2*X*Y+k;}return log(n)*512;}

                    unsigned short BL(int i, int j){
                        S x=D(i)y=D(j)X,Y;int n=0;while(n++<200&&(X=x)*x+(Y=y)*y<4){x=X*X-Y*Y+r;y=2*X*Y+k;}return log(n)*512;}
#endif

#if 0
                        unsigned char GR(int i,int j);
                        unsigned char RD(int i,int j){
#define A int x=0,y=0,p[10]={512,9,0,381,196,981,827,981,DM1,381}
                            auto s=99./(j+99);return GR(i,j)?0:abs(53-int((3e3-i)*s+j*s)%107);}

                            unsigned char GR(int i,int j){static int c[DIM][DIM];if(i+j<1){A;for(int n=0;n<2e7;n++){int v=(rand()%11+1)%5*2;x+=p[v];x/=2;y+=p[v+1];y/=2;c[x][y]++;}}return c[i][j];}

                            unsigned char BL(int i,int j){static int c[DIM][DIM];if(i+j<1){A;for(int n=0;n<3e7;n++){int v=(rand()%11+4)%5*2;x+=p[v];x/=2;y+=p[v+1];y/=2;c[x][y]++;}}return c[i][j];}
#endif

#if 0
                            unsigned char RD(int i,int j){
                                double a=0,b=0,c,d,n=0;
                                while((c=a*a)+(d=b*b)<4&&n++<880)
                                {b=2*a*b+j*8e-9-.645411;a=c-d+i*8e-9+.356888;}
                                return 255*pow((n-80)/800,3.);
                            }
unsigned char GR(int i,int j){
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880)
    {b=2*a*b+j*8e-9-.645411;a=c-d+i*8e-9+.356888;}
    return 255*pow((n-80)/800,.7);
}
unsigned char BL(int i,int j){
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880)
    {b=2*a*b+j*8e-9-.645411;a=c-d+i*8e-9+.356888;}
    return 255*pow((n-80)/800,.5);
}
#endif

#if 0
unsigned char RD(int i,int j){
    double a=0,b=0,d,n=0;
    for(;a*a+(d=b*b)<4&&n++<8192;b=2*a*b+j/5e4+.06,a=a*a-d+i/5e4+.34);
    return n/4;
}
unsigned char GR(int i,int j){
    return 2*RD(i,j);
}
unsigned char BL(int i,int j){
    return 4*RD(i,j);
}
#endif

#if 0
unsignedchar red_fn(int i,int j){
    return (char)(_sq(cos(atan2(j-512,i-512)/2))*255);
}
char green_fn(int i,int j){
    return (char)(_sq(cos(atan2(j-512,i-512)/2-2*acos(-1)/3))*255);
}
char blue_fn(int i,int j){
    return (char)(_sq(cos(atan2(j-512,i-512)/2+2*acos(-1)/3))*255);
} short RD(int i,int j){
    return ((int)(100*sin((i+400)*(j+100)/11115)))&i;
}
unsigned short GR(int i,int j){
    return RD(i,j);
}
unsigned short BL(int i,int j){
    return RD(i,j);
}
#endif

#if 0
//RED
unsigned short RD(int i,int j){
    float r,s=0,x=.5;for(int k=0;k++<50;)r=k%5==2||k%5==4?(2.*j)/DIM+2:(2.*i)/DIM+2,x*=r*(1-x),s+=log(fabs(r-r*2*x));return abs(s);
}
unsigned short GR(int i,int j){
    //GREEN
    float r,s=0,x=.5;for(int k=0;k++<50;)r=k%5==2||k%5==4?(2.*j)/DIM+2:(2.*i)/DIM+2,x*=r*(1-x),s+=log(fabs(r-r*2*x));return s>0?s:0;
}
unsigned short BL(int i,int j){
    //BLUE
    float r,s=0,x=.5;for(int k=0;k++<50;)r=k%5==2||k%5==4?(2.*j)/DIM+2:(2.*i)/DIM+2,x*=r*(1-x),s+=log(fabs(r-r*2*x));return abs(s*x);
}
#endif

#if 0
unsigned short RD(int i,int j){
    //RED
    float x=0,y=0;for(int k=0;k++<15;){float t=_sq(sin(x))-_sq(cos(y))+(i-512.)/512;y=2*sin(x)*cos(y)+(j-512.0)/512;x=t;}return 2.5*(x*x+y*y);
}
unsigned short GR(int i,int j){
    //GREEN
    float x=0,y=0;for(int k=0;k++<15;){float t=_sq(sin(x))-_sq(cos(y))+(i-512.)/512;y=2*sin(x)*cos(y)+(j-512.0)/512;x=t;}return 15*fabs(x);
}
unsigned short BL(int i,int j){
    //BLUE
    float x=0,y=0;for(int k=0;k++<15;){float t=_sq(sin(x))-_sq(cos(y))+(i-512.)/512;y=2*sin(x)*cos(y)+(j-512.0)/512;x=t;}return 15*fabs(y);
}
#endif

#if 0
char RD(int i,int j){
    return (char)(_sq(cos(atan2(j-512,i-512)/2))*255);
}
char GR(int i,int j){
    return (char)(_sq(cos(atan2(j-512,i-512)/2-2*acos(-1)/3))*255);
}
char BL(int i,int j){
    return (char)(_sq(cos(atan2(j-512,i-512)/2+2*acos(-1)/3))*255);
}
#endif

#if 0
unsigned short RD(int i,int j){
    double r=i/256.-2,s=j/256.-2,q=r*r+s*s,n=hypot(r+(.866-r/2)/q,s+(r*.866+s/2)/q),
           d=.5/log(n);if(d<0||d>1)d=1;return d*(sin(n*10)*511+512);
}
unsigned short GR(int i,int j){
    return 0;
}
unsigned short BL(int i,int j){
    double r=i/256.-2,s=j/256.-2,q=r*r+s*s;return RD(i,j)*sqrt(q/40);
}
#endif

#if 0
unsigned char BL(int i,int j);
unsigned char RD(int i,int j){
#define D DIM
#define M m[(x+D+(d==0)-(d==2))%D][(y+D+(d==1)-(d==3))%D]
#define R rand()%D
#define B m[x][y]
    return(i+j)?256-(BL(i,j))/2:0;}

    unsigned char GR(int i,int j){
#define A static int m[D][D],e,x,y,d,c[4],f,n;if(i+j<1){for(d=D*D;d;d--){m[d%D][d/D]=d%6?0:rand()%2000?1:255;}for(n=1
        return RD(i,j);}

        unsigned char BL(int i,int j){A;n;n++){x=R;y=R;if(B==1){f=1;for(d=0;d<4;d++){c[d]=M;f=f<c[d]?c[d]:f;}if(f>2){B=f-1;}else{++e%=4;d=e;if(!c[e]){B=0;M=1;}}}}}return m[i][j];}
#endif

#if 0
unsigned char BL(int i,int j);
unsigned char RD(int i,int j){
#define D DIM
#define M m[(x+D+(d==0)-(d==2))%D][(y+D+(d==1)-(d==3))%D]
#define R rand()%D
#define B m[x][y]
    return(i+j)?256-BL(i,j):0;}

    unsigned char GR(int i,int j){
#define A static int m[D][D],e,x,y,d,c[4],f,n;if(i+j<1){for(d=D*D;d;d--){m[d%D][d/D]=d%6?0:rand()%2000?1:255;}for(n=1
        return RD(i,j);}

        unsigned char BL(int i,int j){A;n;n++){x=R;y=R;if(B==1){f=1;for(d=0;d<4;d++){c[d]=M;f=f<c[d]?c[d]:f;}if(f>2){B=f-1;}else{++e%=4;d=e;if(!c[e]){B=0;M=1;}}}}}return m[i][j];}
#endif

#if 0
unsigned short RD(int i, int j){
    int t[64],k=0,l,e,d=2e7;srand(time(0));while(k<64){t[k]=rand()%DIM;if((e=_sq(i-t[k])+_sq(j-t[42&k++]))<d)d=e,l=k;}return t[l];
}

unsigned short GR(int i, int j){
    static int t[64];int k=0,l,e,d=2e7;while(k<64){if(!t[k])t[k]=rand()%DIM;if((e=_sq(i-t[k])+_sq(j-t[42&k++]))<d)d=e,l=k;}return t[l];
}

unsigned short BL(int i, int j){
    static int t[64];int k=0,l,e,d=2e7;while(k<64){if(!t[k])t[k]=rand()%DIM;if((e=_sq(i-t[k])+_sq(j-t[42&k++]))<d)d=e,l=k;}return t[l];
}
#endif
#if 0
unsigned short GR(int i,int j);
unsigned short RD(int i,int j){
    static int h[1000];return j<0?h[i]?h[i]:h[i]=i<2?1:RD(i-RD(i-1,j),j)+RD(i-RD(i-2,j),j):GR(i+256,j+512);
}
unsigned short GR(int i,int j){
    return DIM-4*RD(sqrt((i-512)*(i-512)+(j-768)*(j-768))/2.9,-1);
}
unsigned short BL(int i,int j){
    return DIM-4*RD(sqrt((i-768)*(i-768)+(j-256)*(j-256))/2.9,-1);
}
#endif

#if 0
unsigned short RD(int i,int j){
    static int h[1024];return j<0?h[i]?h[i]:h[i]=i<2?1:RD(i-RD(i-1,j),j)+RD(i-RD(i-2,j),j):RD(2*RD(i,-1)-i+512>1023-j?i:1023-i,-1)/0.6;
}
unsigned short GR(int i,int j){
    return RD(i, j);
}
unsigned short BL(int i,int j){
    return RD(i, j);
}
#endif
#if 0
unsigned short RD(int i,int j){
    return(sqrt(_sq(abs(73.-i))+_sq(abs(609.-j)))+1.)/abs(sin((sqrt(_sq(abs(860.-i))+_sq(abs(162.-j))))/115.)+2)/(115^i&j);
}
unsigned short GR(int i,int j){
    return(sqrt(_sq(abs(160.-i))+_sq(abs(60.-j)))+1.)/abs(sin((sqrt(_sq(abs(73.-i))+_sq(abs(609.-j))))/115.)+2)/(115^i&j);
}
unsigned short BL(int i,int j){
    return(sqrt(_sq(abs(600.-i))+_sq(abs(259.-j)))+1.)/abs(sin((sqrt(_sq(abs(250.-i))+_sq(abs(20.-j))))/115.)+2)/(115^i&j);
}
#endif
#if 0
unsigned short RD(int i,int j){
    double a=DM1-sqrt(_sq(i-DIM/2)*_sq(j-DIM/2)/8);return a<0?0:a;
}
unsigned short GR(int i,int j){
    return (unsigned short)((i^j)/9*sqrt(_sq((i-DIM/2)/10.)*_sq((j-DIM/2)/10.)))%DM1/(1+3.*(i+j)/DIM);
}
unsigned short BL(int i,int j){
    return i&(~_sq(i/(j/10+1))|j);
}
#endif

#if 0
unsigned short RD(int i,int j){
    /* RED */
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+(j)*9e-9-.645411;a=c-d+(i)*9e-9+.356888;}
    return 1000*pow((n)/800,.5);
}
unsigned short GR(int i,int j){
    /* GREEN */
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+(j)*9e-9-.645411;a=c-d+(i)*9e-9+.356888;}
    return 8000*pow((n)/800,.5);
}
unsigned short BL(int i,int j){
    /* BLUE */
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+(j)*9e-9-.645411;a=c-d+(i)*9e-9+.356888;}
    return 8000*pow((n)/800,.5);
}
#endif


#if 0
unsigned short RD(int i,int j){
    /* RED */
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+(j)*9e-9-.645411;a=c-d+(i)*9e-9+.356888;}
    return 8000*pow((n)/800,.5);
}
unsigned short GR(int i,int j){
    /* GREEN */
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+(j)*9e-9-.645411;a=c-d+(i)*9e-9+.356888;}
    return 40*pow((n)/800,.5);
}
unsigned short BL(int i,int j){
    /* BLUE */
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+(j)*9e-9-.645411;a=c-d+(i)*9e-9+.356888;}
    return 10*pow((n)/800,.5);
}
#endif

#if 0
unsigned short RD(int i,int j){
    /* RED */
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+j*8e-8-.645411;a=c-d+i*8e-8+.356888;}
    return 2000*pow((n)/800,.5);
}
unsigned short GR(int i,int j){
    /* GREEN */
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+j*8e-8-.645411;a=c-d+i*8e-8+.356888;}
    return 1000*pow((n)/800,.5);
}
unsigned short BL(int i,int j){
    /* BLUE */
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+j*8e-8-.645411;a=c-d+i*8e-8+.356888;}
    return 4000*pow((n)/800,.5);
}
#endif
#if 0
/* RED */
unsigned short RD(int i,int j){
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+j*8e-9-.645411;a=c-d+i*8e-9+.356888;}
    return 2000*pow((n)/800,.5);
}
unsigned short GR(int i,int j){
    /* GREEN */
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+j*8e-9-.645411;a=c-d+i*8e-9+.356888;}
    return 1000*pow((n)/800,.5);
}
unsigned short BL(int i,int j){
    /* BLUE */
    double a=0,b=0,c,d,n=0;
    while((c=a*a)+(d=b*b)<4&&n++<880){b=2*a*b+j*8e-9-.645411;a=c-d+i*8e-9+.356888;}
    return 4000*pow((n)/800,.5);
}
#endif
#if 0
unsigned short RD(int i,int j){
    //red
    static int r[DIM];int p=rand()%9-4;r[i]=i&r[i]?(r[i]+r[i-1])/2:i?r[i-1]:512;r[i]+=r[i]+p>0?p:0;return r[i]?r[i]<DIM?r[i]:DM1:0;
}
unsigned short GR(int i,int j){
    //green
    static int r[DIM];int p=rand()%7-3;r[i]=i&r[i]?(r[i]+r[i-1])/2:i?r[i-1]:512;r[i]+=r[i]+p>0?p:0;return r[i]?r[i]<DIM?r[i]:DM1:0;
    //blue
}
unsigned short BL(int i,int j){
    static int r[DIM];int p=rand()%15-7;r[i]=i&r[i]?(r[i]+r[i-1])/2:i?r[i-1]:512;r[i]+=r[i]+p>0?p:0;return r[i]?r[i]<DIM?r[i]:DM1:0;
}
#endif
#if 0
unsigned char BL(int i,int j);
unsigned char RD(int i,int j){
#define A float a=0,b,k,r,x
#define B int e,o
#define C(x) x>255?255:x
#define R return
#define D DIM
    R BL(i,j)*(D-i)/D;
}
unsigned char GR(int i,int j){
#define E DM1
#define F static float
#define G for(
#define H r=a*1.6/D+2.4;x=1.0001*b/D
        R BL(i,j)*(D-j/2)/D;
        }
        unsigned char BL(int i,int j){
        F c[D][D];if(i+j<1){A;B;G;a<D;a+=0.1){G b=0;b<D;b++){H;G k=0;k<D;k++){x=r*x*(1-x);if(k>D/2){e=a;o=(E*x);c[e][o]+=0.01;}}}}}R C(c[j][i])*i/D;
        }
#endif
#if 0
unsigned short GR(int i,int j);
unsigned short BL(int i,int j);
unsigned short RD(int i,int j){
#define f(a)for(a=0;++a<DIM;)
    static int z;float x=0,y=0,m,n,k;if(!z){z=1;f(m)f(n)GR(m-DIM,n-DIM);};return BL(i,j);
}
unsigned short GR(int i,int j){
    float x=0,y=0,a,k;if(i<0)f(k){a=x*x-y*y+(i+256.0)/512;y=2*x*y+(j+512.0)/512;x=a;if(x*x+y*y>4)break;BL((x-.6)*512,(y-1)*512);}return BL(i,j);
}
unsigned short BL(int i,int j){
    static float c[DIM][DIM];if(i<0&&i>-DIM-1&&j<0&&j>-DIM-1)c[j+DIM][i+DIM]++;else if(i>0&&i<DIM&&j>0&&j<DIM)return log(c[i][j])*110;
}
#endif

void pixel_write(int,int);
FILE *fp;
int main(){
    fp = fopen("MathPic","wb");
    fprintf(fp, "P6\n%d %d\n1023\n", DIM, DIM);
    for(int j=0;j<DIM;j++)
        for(int i=0;i<DIM;i++)
            pixel_write(i,j);
    fclose(fp);
    return 0;
}
void pixel_write(int i, int j){
    static unsigned short color[3];
    color[0] = RD(i,j)&DM1;
    color[1] = GR(i,j)&DM1;
    color[2] = BL(i,j)&DM1;
    fwrite(color, 2, 3, fp);
}

