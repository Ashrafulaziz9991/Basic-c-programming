//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int t;cin>>t;
//    int count = 0;
//    string s;
//    for(int i = 0; i<t; i++)
//    {
//        cin>>s;
//
//        if(s == "Tetrahedron")
//            count+=4;
//
//        else if(s == "Cube")
//            count+=6;
//
//        else if(s == "Octahedron")
//            count+=8;
//
//        else if(s == "Dodecahedron")
//            count+=12;
//
//        else if(s == "Icosahedron")
//            count+=20;
//    }
//
//    cout<<count;
//    return 0;
//}
///*
//"Tetrahedron"
//"Cube"
//"Octahedron"
//"Dodecahedron"
//"Icosahedron"
//
//
///

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int counter = 0;
    string s;
    while(t--)
    {
        cin>>s;

        if(s == "Tetrahedron")
            counter+=4;

        else if(s == "Cube")
            counter+=6;

        else if(s == "Octahedron")
            counter+=8;

        else if(s == "Dodecahedron")
            counter+=12;

        else if(s == "Icosahedron")
            counter+=20;
    }

    cout<<counter;
    return 0;
}
