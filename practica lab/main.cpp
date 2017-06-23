/*
 * main.cpp
 *
 *  Created on: 15 de jun. de 2017
 *      Author: BlizzMac
 */
#include <iostream>
using namespace std;
#include <vector>

template < class T> class Stack;
template < class T> class Cola;

template < class T> Stack <T> operator+( const Stack <T> &s1 , const Stack <T> &s2);
template < class T> Cola <T> operator+( const Cola <T> &s1 , const Cola <T> &s2);
template < class T> Stack <T> operator-( const Stack <T> &s1 , const Stack <T> &s2);
template < class T> Cola <T> operator-( const Cola <T> &s1 , const Cola <T> &s2);
template < class T>
class Stack {
    friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T> &s2);
    friend Stack <T> operator -<>( const Stack <T> &s1 , const Stack <T> &s2);
    vector <T> items ;
public :
    bool empty () const { return items . empty () ;}
    void push ( const T & item ) { items . push_back ( item );}
    T pop () {
    T last = items . back ();
    items . pop_back ();
    return last ;
    }
    void mostrar(int i){
        cout<<items[i];
    }
    friend ostream& operator<<(ostream &o,Stack<T> &st){
    	for(unsigned i=0;i<st.items.size();i++)
    		o<<st.items[i];
    }
};

template < class T>
class Cola {
	friend Cola  <T>  operator+ <>( const Cola <T> &s1 , const Cola <T> &s2);
	friend Cola  <T>  operator- <>( const Cola <T> &s1 , const Cola <T> &s2);

    vector <T> items ;
public :
    bool empty () const { return items . empty () ;}
    void push ( const T & item ) { items . push_back ( item );}
    T pop () {
		T last = items .front();
		items.erase(items.begin());
		return last ;
    }

    void mostrar(int i){
          cout<<items[i];
     }
    friend ostream& operator<<(ostream &o,Cola<T> &st){
    	for(unsigned i=0;i<st.items.size();i++)
    		o<<st.items[i];
    }
};

template < class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2){
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s2. items . size (); ++i) {
        result.items.push_back (s2. items [i]);

    }

    return result ;
 }

template < class T>
Stack <T> operator -( const Stack <T> &s1 , const Stack <T> &s2){
    Stack <T> result;

    for ( unsigned i = 0; i < s1. items . size (); ++i) {
    	bool t=true;
    	for ( unsigned j = 0; j < s2. items . size (); ++j) {
    	    	if(s1.items[i]==s2.items[j]){
    	    		t=false;
    	    	}
    	}
    	if(t){
    		result.items.push_back(s1.items[i]);
    	}
    }
    return result ;
 }


template < class T>
Cola <T> operator +( const Cola <T> &s1 , const Cola <T> &s2){
	Cola <T> result = s1;
    for ( unsigned i = 0; i < s2. items . size (); ++i) {
        result.items.push_back (s2. items [i]);
    }

    return result ;
 }

template < class T>
Cola <T> operator -( const Cola <T> &s1 , const Cola <T> &s2){
	Cola <T> result;

    for ( unsigned i = 0; i < s1. items . size (); ++i) {
    	bool t=true;
    	for ( unsigned j = 0; j < s2. items . size (); ++j) {
    	    	if(s1.items[i]==s2.items[j]){
    	    		t=false;
    	    	}
    	}
    	if(t){
    		result.items.push_back(s1.items[i]);
    	}
    }
    return result ;
 }

 int main(){
	Cola<int> Cola1;
	Cola<int> Cola2;
	Cola1.push(1);
	Cola1.push(2);
	Cola2.push(3);
	Cola<int> Cola3=Cola1+Cola2;
	//cout<<Cola3;
	Stack<int> pila1;
	Stack<int> pila2;
	pila1.push(1);
	pila1.push(2);
	pila1.push(3);
	pila1.push(4);
	pila1.push(5);

	pila2.push(2);
	pila2.push(4);
	pila2.push(5);

	Stack<int> pila3=pila1-pila2;
	cout<<pila3;




    //cout<<pila1.pop();

    //pila2.push(4);
    //cout<<pila1.pop();
    //Stack<int> pila3=pila2+pila1;
    //cout<<pila3.pop();



 }



