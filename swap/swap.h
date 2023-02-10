/********************************
The following mySwap works like the swap function in the library.

Your name: Michael Alonso Ambrocio
Your programmer number: 1
Hours spent: 0.5
Any difficulties?: I forgot how to sign in to empress
********************************/

template <class T>
const T& mySwap(T& a,T& b)
{
  T temp;
  temp = a; //temp is going to be equal to a
  a = b; //a is going to equal to b
  b = temp; //b is now going to equal temp for the swapping
}
