#include<iostream>
#include<fstream>
#include<cmath>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct point{
int x;
int y;
};


int main(){
    int counterofpluspoints=0, counteroftriangles=0, counterofgoodpoints=0;
    double segmentab, segmentcd, segmentef, det;
    point a, b, c, d, e, f;
    fstream filea, fileb, filec, filed, filee, filef;
    filea.open("A.txt");
    fileb.open("B.txt");
    filec.open("C.txt");
    filed.open("D.txt");
    filee.open("E.txt");
    filef.open("F.txt");

    while(!filea.eof() && !fileb.eof() && !filec.eof() && !filed.eof() && !filee.eof() && !filef.eof())
    {
        filea >> a.x;
        filea >> a.y;

        fileb >> b.x;
        fileb >> b.y;

        filec >> c.x;
        filec >> c.y;

        filed >> d.x;
        filed >> d.y;

        filee >> e.x;
        filee >> e.y;

        filef >> f.x;
        filef >> f.y;
        if(a.y > 1 && b.y > 1 && c.y > 1 && d.y > 1 && e.y > 1 && f.y > 1 )
            counterofpluspoints++;
        segmentab = sqrt(((b.x - a.x)*(b.x - a.x)) + ((b.y-a.y)*(b.y - a.y)));
        segmentcd = sqrt(((d.x - c.x)*(d.x - c.x)) + ((d.y-c.y)*(d.y - c.y)));
        segmentef = sqrt(((f.x - e.x)*(f.x - e.x)) + ((f.y-e.y)*(f.y - e.y)));

        if(segmentab + segmentcd > segmentef && segmentab + segmentef > segmentcd && segmentef + segmentcd > segmentab)
            counteroftriangles++;
        det=a.x*b.y+b.x*c.y+c.x*a.y - c.x*b.y-a.x*c.y-b.x*a.y;
        if ((min(a.x,b.x)<=c.x)&&(c.x<=max(a.x,b.x)) &&(min(a.y,b.y)<=c.y)&&(c.y<=max(a.y,b.y)))
            counterofgoodpoints++;

    }
    filea.close();
    fileb.close();
    filec.close();
    filed.close();
    filee.close();
    filef.close();
    cout << counterofpluspoints <<endl;
    cout << counteroftriangles <<endl;
    cout << counterofgoodpoints <<endl;
    return 0;
}
