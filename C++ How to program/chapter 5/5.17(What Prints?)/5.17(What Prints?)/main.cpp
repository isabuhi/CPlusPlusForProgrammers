//
//  main.cpp
//  5.17(What Prints?)
//
//  Created by Ibrahimov Sabuhi on 10/21/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace::std;

int main() {
int i = 1, j = 2, k = 3, m = 2;
  /*a)*/ cout<<(i==1)<<endl;
  /*b)*/ cout << ( j == 3 ) << endl;
  /*c)*/ cout<<(i>=1&&j<4)<<endl;
  /*d)*/ cout << ( m <= 99 && k < m ) << endl;
  /*e)*/ cout<<(j>=i||k==m)<<endl;
  /*f)*/ cout<<(k+m<j||3-j>=k)<<endl;
  /*g)*/ cout << ( !m ) << endl;
  /*h)*/ cout << ( !( j - m ) ) << endl;
  /*i)*/ cout<<(!(k>m))<<endl;
}
