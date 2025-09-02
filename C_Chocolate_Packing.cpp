/*In preparation for Mother's Day, you are tasked with packing chocolate boxes into a larger shipping box for delivery. Each chocolate box is a small rectangular box, and you need to determine the maximum number of these chocolate boxes that can be packed into the shipping box. The chocolate boxes, just like your love for your mom, come in identical shapes, and they need to be packed efficiently into the shipping box, which is also a rectangular box.

However, there's a catch! To maintain the aesthetic appeal of the gift, the chocolate boxes must all be packed in the same orientation, with their sides parallel to the sides of the shipping box. Also, the chocolate boxes cannot be broken or resized to fit into the shipping box.

Your task is to write a program that calculates the maximum number of chocolate boxes that can be packed inside the shipping box.

Input
The first line contains three integers L, W, and H, representing the dimensions of the shipping box (1≤L,W,H≤1000
). The second line contains three integers l, w, and h, representing the dimensions of a chocolate box (1≤l,w,h≤1000
).

Output
Output a line with a single integer representing the maximum number of chocolate boxes that can be packed inside the shipping box.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int L,W,H,l,w,h;
    cin>>L>>W>>H>>l>>w>>h;
    int maxB=0;
    int a,b,c;
    a=l;b=w;c=h;
    if(a<=L&&b<=W&&c<=H){
        int boxes=(L/a)*(W/b)*(H/c);
        maxB=max(maxB,boxes);
    }
    a=l;b=h;c=w;
    if(a<=L&&b<=W&&c<=H){
        int boxes=(L/a)*(W/b)*(H/c);
        maxB=max(maxB,boxes);
    }
    a=w;b=l;c=h;
    if(a<=L&&b<=W&&c<=H){
        int boxes=(L/a)*(W/b)*(H/c);
        maxB=max(maxB,boxes);
    }
    a=w;b=h;c=l;
    if(a<=L&&b<=W&&c<=H){
        int boxes=(L/a)*(W/b)*(H/c);
        maxB=max(maxB,boxes);
    }
    a=h;b=l;c=w;
    if(a<=L&&b<=W&&c<=H){
        int boxes=(L/a)*(W/b)*(H/c);
        maxB=max(maxB,boxes);
    }
    a=h;b=w;c=l;
    if(a<=L&&b<=W&&c<=H){
        int boxes=(L/a)*(W/b)*(H/c);
        maxB=max(maxB,boxes);
    }
    cout<<maxB;
    return 0;
}